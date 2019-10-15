#include "./library.hpp"

#include <libman/parse.hpp>

#include <spdlog/spdlog.h>

using namespace lm;

library library::from_file(path_ref fpath) {
    auto pairs = parse_file(fpath);

    library ret;

    std::string _type_;
    read(fmt::format("Reading library manifest file '{}'", fpath.string()),
         pairs,
         read_required("Type", _type_),
         read_check_eq("Type", "Library"),
         read_required("Name", ret.name),
         read_opt("Path", ret.linkable_path),
         read_accumulate("Include-Path", ret.include_paths),
         read_accumulate("Preprocessor-Define", ret.preproc_defs),
         read_accumulate("Uses", ret.uses),
         read_accumulate("Special-Uses", ret.special_uses));

    auto make_absolute = [&](path_ref p) { return fpath.parent_path() / p; };
    std::transform(ret.include_paths.begin(),
                   ret.include_paths.end(),
                   ret.include_paths.begin(),
                   make_absolute);

    if (ret.linkable_path) {
        ret.linkable_path = make_absolute(*ret.linkable_path);
    }

    return ret;
}