#pragma once

#include <dds/util/fs.hpp>

#include <optional>
#include <string>
#include <string_view>
#include <vector>

namespace dds {

std::vector<std::string> split_shell_string(std::string_view s);

enum class language {
    automatic,
    c,
    cxx,
};

struct compile_file_spec {
    fs::path                 source_path;
    fs::path                 out_path;
    std::vector<std::string> definitions     = {};
    std::vector<fs::path>    include_dirs    = {};
    language                 lang            = language::automatic;
    bool                     enable_warnings = false;
};

struct archive_spec {
    std::vector<fs::path> input_files;
    fs::path              out_path;
};

struct link_exe_spec {
    std::vector<fs::path> inputs;
    fs::path              output;
};

struct toolchain_prep;

class toolchain {
    using string_seq = std::vector<std::string>;

    string_seq _c_compile;
    string_seq _cxx_compile;
    string_seq _inc_template;
    string_seq _def_template;
    string_seq _link_archive;
    string_seq _link_exe;
    string_seq _warning_flags;

    std::string _archive_prefix;
    std::string _archive_suffix;
    std::string _object_prefix;
    std::string _object_suffix;
    std::string _exe_prefix;
    std::string _exe_suffix;

public:
    toolchain() = default;

    static toolchain realize(const toolchain_prep&);

    auto& archive_suffix() const noexcept { return _archive_suffix; }
    auto& object_suffix() const noexcept { return _object_suffix; }
    auto& executable_suffix() const noexcept { return _exe_suffix; }

    std::vector<std::string> definition_args(std::string_view s) const noexcept;
    std::vector<std::string> include_args(const fs::path& p) const noexcept;
    std::vector<std::string> create_compile_command(const compile_file_spec&) const noexcept;
    std::vector<std::string> create_archive_command(const archive_spec&) const noexcept;
    std::vector<std::string> create_link_executable_command(const link_exe_spec&) const noexcept;

    static std::optional<toolchain> get_builtin(std::string_view key) noexcept;
};

}  // namespace dds