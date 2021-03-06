#include <dds/repoman/repoman.hpp>

#include <dds/pkg/listing.hpp>
#include <dds/temp.hpp>

#include <neo/sqlite3/error.hpp>

#include <catch2/catch.hpp>

namespace {

const auto THIS_FILE = dds::fs::canonical(__FILE__);
const auto THIS_DIR  = THIS_FILE.parent_path();
const auto REPO_ROOT = (THIS_DIR / "../../../").lexically_normal();
const auto DATA_DIR  = REPO_ROOT / "data";

struct tmp_repo {
    dds::temporary_dir tempdir = dds::temporary_dir::create();
    dds::repo_manager  repo    = dds::repo_manager::create(tempdir.path(), "test-repo");
};

}  // namespace

TEST_CASE_METHOD(tmp_repo, "Open and import into a repository") {
    auto neo_url_tgz = DATA_DIR / "neo-url@0.2.1.tar.gz";
    repo.import_targz(neo_url_tgz);
    CHECK(dds::fs::is_directory(repo.pkg_dir() / "neo-url/"));
    CHECK(dds::fs::is_regular_file(repo.pkg_dir() / "neo-url/0.2.1/sdist.tar.gz"));
    CHECK_THROWS_AS(repo.import_targz(neo_url_tgz), neo::sqlite3::constraint_unique_error);
    repo.delete_package(dds::pkg_id::parse("neo-url@0.2.1"));
    CHECK_FALSE(dds::fs::is_regular_file(repo.pkg_dir() / "neo-url/0.2.1/sdist.tar.gz"));
    CHECK_FALSE(dds::fs::is_directory(repo.pkg_dir() / "neo-url"));
    CHECK_THROWS_AS(repo.delete_package(dds::pkg_id::parse("neo-url@0.2.1")), std::system_error);
    CHECK_NOTHROW(repo.import_targz(neo_url_tgz));
}

TEST_CASE_METHOD(tmp_repo, "Add a package directly") {
    dds::pkg_listing info{
        .ident       = dds::pkg_id::parse("foo@1.2.3"),
        .deps        = {},
        .description = "Something",
        .remote_pkg  = {},
    };
    repo.add_pkg(info, "http://example.com");
    CHECK_THROWS_AS(repo.add_pkg(info, "https://example.com"),
                    neo::sqlite3::constraint_unique_error);
    repo.delete_package(dds::pkg_id::parse("foo@1.2.3"));
}
