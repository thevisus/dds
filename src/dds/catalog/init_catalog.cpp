
#include <dds/catalog/package_info.hpp>
#include <dds/catalog/init_catalog.hpp>
#include <dds/catalog/import.hpp>

static constexpr std::string_view INIT_PACKAGES_CONTENT= R"json({
  "packages": {
    "abseil": {
      "2018.6.0": {
        "depends": [],
        "description": "Abseil Common Libraries",
        "git": {
          "auto-lib": "abseil/abseil",
          "ref": "20180600",
          "transform": [
            {
              "move": {
                "exclude": [],
                "from": "absl",
                "include": [],
                "strip-components": 0,
                "to": "src/absl/"
              },
              "remove": {
                "only-matching": [
                  "**/*_test.c*",
                  "**/*_testing.c*",
                  "**/*_benchmark.c*",
                  "**/benchmarks.c*",
                  "**/*_test_common.c*",
                  "**/mocking_*.c*",
                  "**/test_util.cc",
                  "**/mutex_nonprod.cc",
                  "**/named_generator.cc",
                  "**/print_hash_of.cc",
                  "**/*_gentables.cc"
                ],
                "path": "src/"
              }
            }
          ],
          "url": "https://github.com/abseil/abseil-cpp.git"
        }
      },
      "2019.8.8": {
        "depends": [],
        "description": "Abseil Common Libraries",
        "git": {
          "auto-lib": "abseil/abseil",
          "ref": "20190808",
          "transform": [
            {
              "move": {
                "exclude": [],
                "from": "absl",
                "include": [],
                "strip-components": 0,
                "to": "src/absl/"
              },
              "remove": {
                "only-matching": [
                  "**/*_test.c*",
                  "**/*_testing.c*",
                  "**/*_benchmark.c*",
                  "**/benchmarks.c*",
                  "**/*_test_common.c*",
                  "**/mocking_*.c*",
                  "**/test_util.cc",
                  "**/mutex_nonprod.cc",
                  "**/named_generator.cc",
                  "**/print_hash_of.cc",
                  "**/*_gentables.cc"
                ],
                "path": "src/"
              }
            }
          ],
          "url": "https://github.com/abseil/abseil-cpp.git"
        }
      },
      "2020.2.25": {
        "depends": [],
        "description": "Abseil Common Libraries",
        "git": {
          "auto-lib": "abseil/abseil",
          "ref": "20200225.2",
          "transform": [
            {
              "move": {
                "exclude": [],
                "from": "absl",
                "include": [],
                "strip-components": 0,
                "to": "src/absl/"
              },
              "remove": {
                "only-matching": [
                  "**/*_test.c*",
                  "**/*_testing.c*",
                  "**/*_benchmark.c*",
                  "**/benchmarks.c*",
                  "**/*_test_common.c*",
                  "**/mocking_*.c*",
                  "**/test_util.cc",
                  "**/mutex_nonprod.cc",
                  "**/named_generator.cc",
                  "**/print_hash_of.cc",
                  "**/*_gentables.cc"
                ],
                "path": "src/"
              }
            }
          ],
          "url": "https://github.com/abseil/abseil-cpp.git"
        }
      }
    },
    "asio": {
      "1.12.0": {
        "depends": [],
        "description": "Asio asynchronous I/O C++ library",
        "git": {
          "auto-lib": "asio/asio",
          "ref": "asio-1-12-0",
          "transform": [
            {
              "move": {
                "exclude": [],
                "from": "asio/src",
                "include": [],
                "strip-components": 0,
                "to": "src/"
              },
              "remove": {
                "only-matching": [
                  "doc/**",
                  "examples/**",
                  "tests/**",
                  "tools/**"
                ],
                "path": "src/"
              }
            },
            {
              "edit": {
                "edits": [
                  {
                    "content": "#define ASIO_STANDALONE 1",
                    "kind": "insert",
                    "line": 13
                  },
                  {
                    "content": "#define ASIO_SEPARATE_COMPILATION 1",
                    "kind": "insert",
                    "line": 14
                  }
                ],
                "path": "include/asio/detail/config.hpp"
              },
              "move": {
                "exclude": [],
                "from": "asio/include/",
                "include": [],
                "strip-components": 0,
                "to": "include/"
              }
            }
          ],
          "url": "https://github.com/chriskohlhoff/asio.git"
        }
      },
      "1.12.1": {
        "depends": [],
        "description": "Asio asynchronous I/O C++ library",
        "git": {
          "auto-lib": "asio/asio",
          "ref": "asio-1-12-1",
          "transform": [
            {
              "move": {
                "exclude": [],
                "from": "asio/src",
                "include": [],
                "strip-components": 0,
                "to": "src/"
              },
              "remove": {
                "only-matching": [
                  "doc/**",
                  "examples/**",
                  "tests/**",
                  "tools/**"
                ],
                "path": "src/"
              }
            },
            {
              "edit": {
                "edits": [
                  {
                    "content": "#define ASIO_STANDALONE 1",
                    "kind": "insert",
                    "line": 13
                  },
                  {
                    "content": "#define ASIO_SEPARATE_COMPILATION 1",
                    "kind": "insert",
                    "line": 14
                  }
                ],
                "path": "include/asio/detail/config.hpp"
              },
              "move": {
                "exclude": [],
                "from": "asio/include/",
                "include": [],
                "strip-components": 0,
                "to": "include/"
              }
            }
          ],
          "url": "https://github.com/chriskohlhoff/asio.git"
        }
      },
      "1.12.2": {
        "depends": [],
        "description": "Asio asynchronous I/O C++ library",
        "git": {
          "auto-lib": "asio/asio",
          "ref": "asio-1-12-2",
          "transform": [
            {
              "move": {
                "exclude": [],
                "from": "asio/src",
                "include": [],
                "strip-components": 0,
                "to": "src/"
              },
              "remove": {
                "only-matching": [
                  "doc/**",
                  "examples/**",
                  "tests/**",
                  "tools/**"
                ],
                "path": "src/"
              }
            },
            {
              "edit": {
                "edits": [
                  {
                    "content": "#define ASIO_STANDALONE 1",
                    "kind": "insert",
                    "line": 13
                  },
                  {
                    "content": "#define ASIO_SEPARATE_COMPILATION 1",
                    "kind": "insert",
                    "line": 14
                  }
                ],
                "path": "include/asio/detail/config.hpp"
              },
              "move": {
                "exclude": [],
                "from": "asio/include/",
                "include": [],
                "strip-components": 0,
                "to": "include/"
              }
            }
          ],
          "url": "https://github.com/chriskohlhoff/asio.git"
        }
      },
      "1.13.0": {
        "depends": [],
        "description": "Asio asynchronous I/O C++ library",
        "git": {
          "auto-lib": "asio/asio",
          "ref": "asio-1-13-0",
          "transform": [
            {
              "move": {
                "exclude": [],
                "from": "asio/src",
                "include": [],
                "strip-components": 0,
                "to": "src/"
              },
              "remove": {
                "only-matching": [
                  "doc/**",
                  "examples/**",
                  "tests/**",
                  "tools/**"
                ],
                "path": "src/"
              }
            },
            {
              "edit": {
                "edits": [
                  {
                    "content": "#define ASIO_STANDALONE 1",
                    "kind": "insert",
                    "line": 13
                  },
                  {
                    "content": "#define ASIO_SEPARATE_COMPILATION 1",
                    "kind": "insert",
                    "line": 14
                  }
                ],
                "path": "include/asio/detail/config.hpp"
              },
              "move": {
                "exclude": [],
                "from": "asio/include/",
                "include": [],
                "strip-components": 0,
                "to": "include/"
              }
            }
          ],
          "url": "https://github.com/chriskohlhoff/asio.git"
        }
      },
      "1.14.0": {
        "depends": [],
        "description": "Asio asynchronous I/O C++ library",
        "git": {
          "auto-lib": "asio/asio",
          "ref": "asio-1-14-0",
          "transform": [
            {
              "move": {
                "exclude": [],
                "from": "asio/src",
                "include": [],
                "strip-components": 0,
                "to": "src/"
              },
              "remove": {
                "only-matching": [
                  "doc/**",
                  "examples/**",
                  "tests/**",
                  "tools/**"
                ],
                "path": "src/"
              }
            },
            {
              "edit": {
                "edits": [
                  {
                    "content": "#define ASIO_STANDALONE 1",
                    "kind": "insert",
                    "line": 13
                  },
                  {
                    "content": "#define ASIO_SEPARATE_COMPILATION 1",
                    "kind": "insert",
                    "line": 14
                  }
                ],
                "path": "include/asio/detail/config.hpp"
              },
              "move": {
                "exclude": [],
                "from": "asio/include/",
                "include": [],
                "strip-components": 0,
                "to": "include/"
              }
            }
          ],
          "url": "https://github.com/chriskohlhoff/asio.git"
        }
      },
      "1.14.1": {
        "depends": [],
        "description": "Asio asynchronous I/O C++ library",
        "git": {
          "auto-lib": "asio/asio",
          "ref": "asio-1-14-1",
          "transform": [
            {
              "move": {
                "exclude": [],
                "from": "asio/src",
                "include": [],
                "strip-components": 0,
                "to": "src/"
              },
              "remove": {
                "only-matching": [
                  "doc/**",
                  "examples/**",
                  "tests/**",
                  "tools/**"
                ],
                "path": "src/"
              }
            },
            {
              "edit": {
                "edits": [
                  {
                    "content": "#define ASIO_STANDALONE 1",
                    "kind": "insert",
                    "line": 13
                  },
                  {
                    "content": "#define ASIO_SEPARATE_COMPILATION 1",
                    "kind": "insert",
                    "line": 14
                  }
                ],
                "path": "include/asio/detail/config.hpp"
              },
              "move": {
                "exclude": [],
                "from": "asio/include/",
                "include": [],
                "strip-components": 0,
                "to": "include/"
              }
            }
          ],
          "url": "https://github.com/chriskohlhoff/asio.git"
        }
      },
      "1.16.0": {
        "depends": [],
        "description": "Asio asynchronous I/O C++ library",
        "git": {
          "auto-lib": "asio/asio",
          "ref": "asio-1-16-0",
          "transform": [
            {
              "move": {
                "exclude": [],
                "from": "asio/src",
                "include": [],
                "strip-components": 0,
                "to": "src/"
              },
              "remove": {
                "only-matching": [
                  "doc/**",
                  "examples/**",
                  "tests/**",
                  "tools/**"
                ],
                "path": "src/"
              }
            },
            {
              "edit": {
                "edits": [
                  {
                    "content": "#define ASIO_STANDALONE 1",
                    "kind": "insert",
                    "line": 13
                  },
                  {
                    "content": "#define ASIO_SEPARATE_COMPILATION 1",
                    "kind": "insert",
                    "line": 14
                  }
                ],
                "path": "include/asio/detail/config.hpp"
              },
              "move": {
                "exclude": [],
                "from": "asio/include/",
                "include": [],
                "strip-components": 0,
                "to": "include/"
              }
            }
          ],
          "url": "https://github.com/chriskohlhoff/asio.git"
        }
      },
      "1.16.1": {
        "depends": [],
        "description": "Asio asynchronous I/O C++ library",
        "git": {
          "auto-lib": "asio/asio",
          "ref": "asio-1-16-1",
          "transform": [
            {
              "move": {
                "exclude": [],
                "from": "asio/src",
                "include": [],
                "strip-components": 0,
                "to": "src/"
              },
              "remove": {
                "only-matching": [
                  "doc/**",
                  "examples/**",
                  "tests/**",
                  "tools/**"
                ],
                "path": "src/"
              }
            },
            {
              "edit": {
                "edits": [
                  {
                    "content": "#define ASIO_STANDALONE 1",
                    "kind": "insert",
                    "line": 13
                  },
                  {
                    "content": "#define ASIO_SEPARATE_COMPILATION 1",
                    "kind": "insert",
                    "line": 14
                  }
                ],
                "path": "include/asio/detail/config.hpp"
              },
              "move": {
                "exclude": [],
                "from": "asio/include/",
                "include": [],
                "strip-components": 0,
                "to": "include/"
              }
            }
          ],
          "url": "https://github.com/chriskohlhoff/asio.git"
        }
      }
    },
    "boost.leaf": {
      "0.1.0": {
        "depends": [],
        "description": "(No description was provided)",
        "git": {
          "auto-lib": "boost/leaf",
          "ref": "0.1.0",
          "transform": [],
          "url": "https://github.com/zajo/leaf.git"
        }
      },
      "0.2.0": {
        "depends": [],
        "description": "(No description was provided)",
        "git": {
          "auto-lib": "boost/leaf",
          "ref": "0.2.0",
          "transform": [],
          "url": "https://github.com/zajo/leaf.git"
        }
      },
      "0.2.1": {
        "depends": [],
        "description": "(No description was provided)",
        "git": {
          "auto-lib": "boost/leaf",
          "ref": "0.2.1",
          "transform": [],
          "url": "https://github.com/zajo/leaf.git"
        }
      },
      "0.2.2": {
        "depends": [],
        "description": "(No description was provided)",
        "git": {
          "auto-lib": "boost/leaf",
          "ref": "0.2.2",
          "transform": [],
          "url": "https://github.com/zajo/leaf.git"
        }
      },
      "0.2.3": {
        "depends": [],
        "description": "(No description was provided)",
        "git": {
          "auto-lib": "boost/leaf",
          "ref": "0.2.3",
          "transform": [],
          "url": "https://github.com/zajo/leaf.git"
        }
      },
      "0.2.4": {
        "depends": [],
        "description": "(No description was provided)",
        "git": {
          "auto-lib": "boost/leaf",
          "ref": "0.2.4",
          "transform": [],
          "url": "https://github.com/zajo/leaf.git"
        }
      },
      "0.2.5": {
        "depends": [],
        "description": "(No description was provided)",
        "git": {
          "auto-lib": "boost/leaf",
          "ref": "0.2.5",
          "transform": [],
          "url": "https://github.com/zajo/leaf.git"
        }
      },
      "0.3.0": {
        "depends": [],
        "description": "(No description was provided)",
        "git": {
          "auto-lib": "boost/leaf",
          "ref": "0.3.0",
          "transform": [],
          "url": "https://github.com/zajo/leaf.git"
        }
      }
    },
    "boost.mp11": {
      "1.70.0": {
        "depends": [],
        "description": "(No description was provided)",
        "git": {
          "auto-lib": "boost/mp11",
          "ref": "boost-1.70.0",
          "transform": [],
          "url": "https://github.com/boostorg/mp11.git"
        }
      },
      "1.71.0": {
        "depends": [],
        "description": "(No description was provided)",
        "git": {
          "auto-lib": "boost/mp11",
          "ref": "boost-1.71.0",
          "transform": [],
          "url": "https://github.com/boostorg/mp11.git"
        }
      },
      "1.72.0": {
        "depends": [],
        "description": "(No description was provided)",
        "git": {
          "auto-lib": "boost/mp11",
          "ref": "boost-1.72.0",
          "transform": [],
          "url": "https://github.com/boostorg/mp11.git"
        }
      },
      "1.73.0": {
        "depends": [],
        "description": "(No description was provided)",
        "git": {
          "auto-lib": "boost/mp11",
          "ref": "boost-1.73.0",
          "transform": [],
          "url": "https://github.com/boostorg/mp11.git"
        }
      }
    },
    "boost.pfr": {
      "1.0.0": {
        "depends": [],
        "description": "(No description was provided)",
        "git": {
          "auto-lib": "boost/pfr",
          "ref": "1.0.0",
          "transform": [],
          "url": "https://github.com/apolukhin/magic_get.git"
        }
      },
      "1.0.1": {
        "depends": [],
        "description": "(No description was provided)",
        "git": {
          "auto-lib": "boost/pfr",
          "ref": "1.0.1",
          "transform": [],
          "url": "https://github.com/apolukhin/magic_get.git"
        }
      }
    },
    "catch2": {
      "2.12.4": {
        "depends": [],
        "description": "A modern C++ unit testing library",
        "git": {
          "auto-lib": "catch2/catch2",
          "ref": "v2.12.4",
          "transform": [
            {
              "move": {
                "exclude": [],
                "from": "include",
                "include": [],
                "strip-components": 0,
                "to": "include/catch2"
              }
            },
            {
              "copy": {
                "exclude": [],
                "from": "include",
                "include": [],
                "strip-components": 0,
                "to": "src"
              },
              "write": {
                "content": "\n                    #pragma once\n\n                    #define CATCH_CONFIG_MAIN\n                    #include \"./catch.hpp\"\n\n                    namespace Catch {\n\n                    CATCH_REGISTER_REPORTER(\"console\", ConsoleReporter)\n\n                    }\n                    ",
                "path": "include/catch2/catch_with_main.hpp"
              }
            }
          ],
          "url": "https://github.com/catchorg/Catch2.git"
        }
      }
    },
    "cereal": {
      "0.9.0": {
        "depends": [],
        "description": "A C++11 library for serialization",
        "git": {
          "auto-lib": "cereal/cereal",
          "ref": "v0.9.0",
          "transform": [],
          "url": "https://github.com/USCiLab/cereal.git"
        }
      },
      "0.9.1": {
        "depends": [],
        "description": "A C++11 library for serialization",
        "git": {
          "auto-lib": "cereal/cereal",
          "ref": "v0.9.1",
          "transform": [],
          "url": "https://github.com/USCiLab/cereal.git"
        }
      },
      "1.0.0": {
        "depends": [],
        "description": "A C++11 library for serialization",
        "git": {
          "auto-lib": "cereal/cereal",
          "ref": "v1.0.0",
          "transform": [],
          "url": "https://github.com/USCiLab/cereal.git"
        }
      },
      "1.1.0": {
        "depends": [],
        "description": "A C++11 library for serialization",
        "git": {
          "auto-lib": "cereal/cereal",
          "ref": "v1.1.0",
          "transform": [],
          "url": "https://github.com/USCiLab/cereal.git"
        }
      },
      "1.1.1": {
        "depends": [],
        "description": "A C++11 library for serialization",
        "git": {
          "auto-lib": "cereal/cereal",
          "ref": "v1.1.1",
          "transform": [],
          "url": "https://github.com/USCiLab/cereal.git"
        }
      },
      "1.1.2": {
        "depends": [],
        "description": "A C++11 library for serialization",
        "git": {
          "auto-lib": "cereal/cereal",
          "ref": "v1.1.2",
          "transform": [],
          "url": "https://github.com/USCiLab/cereal.git"
        }
      },
      "1.2.0": {
        "depends": [],
        "description": "A C++11 library for serialization",
        "git": {
          "auto-lib": "cereal/cereal",
          "ref": "v1.2.0",
          "transform": [],
          "url": "https://github.com/USCiLab/cereal.git"
        }
      },
      "1.2.1": {
        "depends": [],
        "description": "A C++11 library for serialization",
        "git": {
          "auto-lib": "cereal/cereal",
          "ref": "v1.2.1",
          "transform": [],
          "url": "https://github.com/USCiLab/cereal.git"
        }
      },
      "1.2.2": {
        "depends": [],
        "description": "A C++11 library for serialization",
        "git": {
          "auto-lib": "cereal/cereal",
          "ref": "v1.2.2",
          "transform": [],
          "url": "https://github.com/USCiLab/cereal.git"
        }
      },
      "1.3.0": {
        "depends": [],
        "description": "A C++11 library for serialization",
        "git": {
          "auto-lib": "cereal/cereal",
          "ref": "v1.3.0",
          "transform": [],
          "url": "https://github.com/USCiLab/cereal.git"
        }
      }
    },
    "ctre": {
      "2.8.1": {
        "depends": [],
        "description": "A compile-time PCRE (almost) compatible regular expression matcher",
        "git": {
          "auto-lib": "hanickadot/ctre",
          "ref": "v2.8.1",
          "transform": [],
          "url": "https://github.com/hanickadot/compile-time-regular-expressions.git"
        }
      },
      "2.8.2": {
        "depends": [],
        "description": "A compile-time PCRE (almost) compatible regular expression matcher",
        "git": {
          "auto-lib": "hanickadot/ctre",
          "ref": "v2.8.2",
          "transform": [],
          "url": "https://github.com/hanickadot/compile-time-regular-expressions.git"
        }
      },
      "2.8.3": {
        "depends": [],
        "description": "A compile-time PCRE (almost) compatible regular expression matcher",
        "git": {
          "auto-lib": "hanickadot/ctre",
          "ref": "v2.8.3",
          "transform": [],
          "url": "https://github.com/hanickadot/compile-time-regular-expressions.git"
        }
      },
      "2.8.4": {
        "depends": [],
        "description": "A compile-time PCRE (almost) compatible regular expression matcher",
        "git": {
          "auto-lib": "hanickadot/ctre",
          "ref": "v2.8.4",
          "transform": [],
          "url": "https://github.com/hanickadot/compile-time-regular-expressions.git"
        }
      }
    },
    "fmt": {
      "6.0.0": {
        "depends": [],
        "description": "A modern formatting library : https://fmt.dev/",
        "git": {
          "auto-lib": "fmt/fmt",
          "ref": "6.0.0",
          "transform": [],
          "url": "https://github.com/fmtlib/fmt.git"
        }
      },
      "6.1.0": {
        "depends": [],
        "description": "A modern formatting library : https://fmt.dev/",
        "git": {
          "auto-lib": "fmt/fmt",
          "ref": "6.1.0",
          "transform": [],
          "url": "https://github.com/fmtlib/fmt.git"
        }
      },
      "6.1.1": {
        "depends": [],
        "description": "A modern formatting library : https://fmt.dev/",
        "git": {
          "auto-lib": "fmt/fmt",
          "ref": "6.1.1",
          "transform": [],
          "url": "https://github.com/fmtlib/fmt.git"
        }
      },
      "6.1.2": {
        "depends": [],
        "description": "A modern formatting library : https://fmt.dev/",
        "git": {
          "auto-lib": "fmt/fmt",
          "ref": "6.1.2",
          "transform": [],
          "url": "https://github.com/fmtlib/fmt.git"
        }
      },
      "6.2.0": {
        "depends": [],
        "description": "A modern formatting library : https://fmt.dev/",
        "git": {
          "auto-lib": "fmt/fmt",
          "ref": "6.2.0",
          "transform": [],
          "url": "https://github.com/fmtlib/fmt.git"
        }
      },
      "6.2.1": {
        "depends": [],
        "description": "A modern formatting library : https://fmt.dev/",
        "git": {
          "auto-lib": "fmt/fmt",
          "ref": "6.2.1",
          "transform": [],
          "url": "https://github.com/fmtlib/fmt.git"
        }
      },
      "7.0.0": {
        "depends": [],
        "description": "A modern formatting library : https://fmt.dev/",
        "git": {
          "auto-lib": "fmt/fmt",
          "ref": "7.0.0",
          "transform": [],
          "url": "https://github.com/fmtlib/fmt.git"
        }
      },
      "7.0.1": {
        "depends": [],
        "description": "A modern formatting library : https://fmt.dev/",
        "git": {
          "auto-lib": "fmt/fmt",
          "ref": "7.0.1",
          "transform": [],
          "url": "https://github.com/fmtlib/fmt.git"
        }
      }
    },
    "inja": {
      "1.0.0": {
        "depends": [],
        "description": "A Template Engine for Modern C++",
        "git": {
          "auto-lib": "inja/inja",
          "ref": "v1.0.0",
          "transform": [],
          "url": "https://github.com/pantor/inja.git"
        }
      },
      "2.0.0": {
        "depends": [],
        "description": "A Template Engine for Modern C++",
        "git": {
          "auto-lib": "inja/inja",
          "ref": "v2.0.0",
          "transform": [],
          "url": "https://github.com/pantor/inja.git"
        }
      },
      "2.0.1": {
        "depends": [],
        "description": "A Template Engine for Modern C++",
        "git": {
          "auto-lib": "inja/inja",
          "ref": "v2.0.1",
          "transform": [],
          "url": "https://github.com/pantor/inja.git"
        }
      },
      "2.1.0": {
        "depends": [
          "nlohmann-json+0.0.0"
        ],
        "description": "A Template Engine for Modern C++",
        "git": {
          "ref": "v2.1.0",
          "transform": [
            {
              "write": {
                "content": "{\"name\": \"inja\", \"namespace\": \"inja\", \"version\": \"2.1.0\", \"depends\": [\"nlohmann-json+0.0.0\"]}",
                "path": "package.json"
              }
            },
            {
              "write": {
                "content": "{\"name\": \"inja\", \"uses\": [\"nlohmann/json\"]}",
                "path": "library.json"
              }
            }
          ],
          "url": "https://github.com/pantor/inja.git"
        }
      },
      "2.2.0": {
        "depends": [
          "nlohmann-json+0.0.0"
        ],
        "description": "A Template Engine for Modern C++",
        "git": {
          "ref": "v2.2.0",
          "transform": [
            {
              "write": {
                "content": "{\"name\": \"inja\", \"namespace\": \"inja\", \"version\": \"2.2.0\", \"depends\": [\"nlohmann-json+0.0.0\"]}",
                "path": "package.json"
              }
            },
            {
              "write": {
                "content": "{\"name\": \"inja\", \"uses\": [\"nlohmann/json\"]}",
                "path": "library.json"
              }
            }
          ],
          "url": "https://github.com/pantor/inja.git"
        }
      }
    },
    "libsodium": {
      "1.0.10": {
        "depends": [],
        "description": "Sodium is a new, easy-to-use software library for encryption,\ndecryption, signatures, password hashing and more.",
        "git": {
          "auto-lib": "sodium/sodium",
          "ref": "1.0.10",
          "transform": [
            {
              "edit": {
                "edits": [
                  {
                    "content": "#define SODIUM_STATIC 1",
                    "kind": "insert",
                    "line": 8
                  }
                ],
                "path": "include/sodium/export.h"
              },
              "move": {
                "exclude": [],
                "from": "src/libsodium/include",
                "include": [],
                "strip-components": 0,
                "to": "include/"
              }
            },
            {
              "copy": {
                "exclude": [],
                "from": "builds/msvc/version.h",
                "include": [],
                "strip-components": 0,
                "to": "include/sodium/version.h"
              },
              "move": {
                "exclude": [],
                "from": "src/libsodium",
                "include": [],
                "strip-components": 0,
                "to": "src/"
              },
              "remove": {
                "only-matching": [],
                "path": "src/libsodium"
              }
            },
            {
              "copy": {
                "exclude": [],
                "from": "include",
                "include": [],
                "strip-components": 1,
                "to": "src/"
              }
            }
          ],
          "url": "https://github.com/jedisct1/libsodium.git"
        }
      },
      "1.0.11": {
        "depends": [],
        "description": "Sodium is a new, easy-to-use software library for encryption,\ndecryption, signatures, password hashing and more.",
        "git": {
          "auto-lib": "sodium/sodium",
          "ref": "1.0.11",
          "transform": [
            {
              "edit": {
                "edits": [
                  {
                    "content": "#define SODIUM_STATIC 1",
                    "kind": "insert",
                    "line": 8
                  }
                ],
                "path": "include/sodium/export.h"
              },
              "move": {
                "exclude": [],
                "from": "src/libsodium/include",
                "include": [],
                "strip-components": 0,
                "to": "include/"
              }
            },
            {
              "copy": {
                "exclude": [],
                "from": "builds/msvc/version.h",
                "include": [],
                "strip-components": 0,
                "to": "include/sodium/version.h"
              },
              "move": {
                "exclude": [],
                "from": "src/libsodium",
                "include": [],
                "strip-components": 0,
                "to": "src/"
              },
              "remove": {
                "only-matching": [],
                "path": "src/libsodium"
              }
            },
            {
              "copy": {
                "exclude": [],
                "from": "include",
                "include": [],
                "strip-components": 1,
                "to": "src/"
              }
            }
          ],
          "url": "https://github.com/jedisct1/libsodium.git"
        }
      },
      "1.0.12": {
        "depends": [],
        "description": "Sodium is a new, easy-to-use software library for encryption,\ndecryption, signatures, password hashing and more.",
        "git": {
          "auto-lib": "sodium/sodium",
          "ref": "1.0.12",
          "transform": [
            {
              "edit": {
                "edits": [
                  {
                    "content": "#define SODIUM_STATIC 1",
                    "kind": "insert",
                    "line": 8
                  }
                ],
                "path": "include/sodium/export.h"
              },
              "move": {
                "exclude": [],
                "from": "src/libsodium/include",
                "include": [],
                "strip-components": 0,
                "to": "include/"
              }
            },
            {
              "copy": {
                "exclude": [],
                "from": "builds/msvc/version.h",
                "include": [],
                "strip-components": 0,
                "to": "include/sodium/version.h"
              },
              "move": {
                "exclude": [],
                "from": "src/libsodium",
                "include": [],
                "strip-components": 0,
                "to": "src/"
              },
              "remove": {
                "only-matching": [],
                "path": "src/libsodium"
              }
            },
            {
              "copy": {
                "exclude": [],
                "from": "include",
                "include": [],
                "strip-components": 1,
                "to": "src/"
              }
            }
          ],
          "url": "https://github.com/jedisct1/libsodium.git"
        }
      },
      "1.0.13": {
        "depends": [],
        "description": "Sodium is a new, easy-to-use software library for encryption,\ndecryption, signatures, password hashing and more.",
        "git": {
          "auto-lib": "sodium/sodium",
          "ref": "1.0.13",
          "transform": [
            {
              "edit": {
                "edits": [
                  {
                    "content": "#define SODIUM_STATIC 1",
                    "kind": "insert",
                    "line": 8
                  }
                ],
                "path": "include/sodium/export.h"
              },
              "move": {
                "exclude": [],
                "from": "src/libsodium/include",
                "include": [],
                "strip-components": 0,
                "to": "include/"
              }
            },
            {
              "copy": {
                "exclude": [],
                "from": "builds/msvc/version.h",
                "include": [],
                "strip-components": 0,
                "to": "include/sodium/version.h"
              },
              "move": {
                "exclude": [],
                "from": "src/libsodium",
                "include": [],
                "strip-components": 0,
                "to": "src/"
              },
              "remove": {
                "only-matching": [],
                "path": "src/libsodium"
              }
            },
            {
              "copy": {
                "exclude": [],
                "from": "include",
                "include": [],
                "strip-components": 1,
                "to": "src/"
              }
            }
          ],
          "url": "https://github.com/jedisct1/libsodium.git"
        }
      },
      "1.0.14": {
        "depends": [],
        "description": "Sodium is a new, easy-to-use software library for encryption,\ndecryption, signatures, password hashing and more.",
        "git": {
          "auto-lib": "sodium/sodium",
          "ref": "1.0.14",
          "transform": [
            {
              "edit": {
                "edits": [
                  {
                    "content": "#define SODIUM_STATIC 1",
                    "kind": "insert",
                    "line": 8
                  }
                ],
                "path": "include/sodium/export.h"
              },
              "move": {
                "exclude": [],
                "from": "src/libsodium/include",
                "include": [],
                "strip-components": 0,
                "to": "include/"
              }
            },
            {
              "copy": {
                "exclude": [],
                "from": "builds/msvc/version.h",
                "include": [],
                "strip-components": 0,
                "to": "include/sodium/version.h"
              },
              "move": {
                "exclude": [],
                "from": "src/libsodium",
                "include": [],
                "strip-components": 0,
                "to": "src/"
              },
              "remove": {
                "only-matching": [],
                "path": "src/libsodium"
              }
            },
            {
              "copy": {
                "exclude": [],
                "from": "include",
                "include": [],
                "strip-components": 1,
                "to": "src/"
              }
            }
          ],
          "url": "https://github.com/jedisct1/libsodium.git"
        }
      },
      "1.0.15": {
        "depends": [],
        "description": "Sodium is a new, easy-to-use software library for encryption,\ndecryption, signatures, password hashing and more.",
        "git": {
          "auto-lib": "sodium/sodium",
          "ref": "1.0.15",
          "transform": [
            {
              "edit": {
                "edits": [
                  {
                    "content": "#define SODIUM_STATIC 1",
                    "kind": "insert",
                    "line": 8
                  }
                ],
                "path": "include/sodium/export.h"
              },
              "move": {
                "exclude": [],
                "from": "src/libsodium/include",
                "include": [],
                "strip-components": 0,
                "to": "include/"
              }
            },
            {
              "copy": {
                "exclude": [],
                "from": "builds/msvc/version.h",
                "include": [],
                "strip-components": 0,
                "to": "include/sodium/version.h"
              },
              "move": {
                "exclude": [],
                "from": "src/libsodium",
                "include": [],
                "strip-components": 0,
                "to": "src/"
              },
              "remove": {
                "only-matching": [],
                "path": "src/libsodium"
              }
            },
            {
              "copy": {
                "exclude": [],
                "from": "include",
                "include": [],
                "strip-components": 1,
                "to": "src/"
              }
            }
          ],
          "url": "https://github.com/jedisct1/libsodium.git"
        }
      },
      "1.0.16": {
        "depends": [],
        "description": "Sodium is a new, easy-to-use software library for encryption,\ndecryption, signatures, password hashing and more.",
        "git": {
          "auto-lib": "sodium/sodium",
          "ref": "1.0.16",
          "transform": [
            {
              "edit": {
                "edits": [
                  {
                    "content": "#define SODIUM_STATIC 1",
                    "kind": "insert",
                    "line": 8
                  }
                ],
                "path": "include/sodium/export.h"
              },
              "move": {
                "exclude": [],
                "from": "src/libsodium/include",
                "include": [],
                "strip-components": 0,
                "to": "include/"
              }
            },
            {
              "copy": {
                "exclude": [],
                "from": "builds/msvc/version.h",
                "include": [],
                "strip-components": 0,
                "to": "include/sodium/version.h"
              },
              "move": {
                "exclude": [],
                "from": "src/libsodium",
                "include": [],
                "strip-components": 0,
                "to": "src/"
              },
              "remove": {
                "only-matching": [],
                "path": "src/libsodium"
              }
            },
            {
              "copy": {
                "exclude": [],
                "from": "include",
                "include": [],
                "strip-components": 1,
                "to": "src/"
              }
            }
          ],
          "url": "https://github.com/jedisct1/libsodium.git"
        }
      },
      "1.0.17": {
        "depends": [],
        "description": "Sodium is a new, easy-to-use software library for encryption,\ndecryption, signatures, password hashing and more.",
        "git": {
          "auto-lib": "sodium/sodium",
          "ref": "1.0.17",
          "transform": [
            {
              "edit": {
                "edits": [
                  {
                    "content": "#define SODIUM_STATIC 1",
                    "kind": "insert",
                    "line": 8
                  }
                ],
                "path": "include/sodium/export.h"
              },
              "move": {
                "exclude": [],
                "from": "src/libsodium/include",
                "include": [],
                "strip-components": 0,
                "to": "include/"
              }
            },
            {
              "copy": {
                "exclude": [],
                "from": "builds/msvc/version.h",
                "include": [],
                "strip-components": 0,
                "to": "include/sodium/version.h"
              },
              "move": {
                "exclude": [],
                "from": "src/libsodium",
                "include": [],
                "strip-components": 0,
                "to": "src/"
              },
              "remove": {
                "only-matching": [],
                "path": "src/libsodium"
              }
            },
            {
              "copy": {
                "exclude": [],
                "from": "include",
                "include": [],
                "strip-components": 1,
                "to": "src/"
              }
            }
          ],
          "url": "https://github.com/jedisct1/libsodium.git"
        }
      },
      "1.0.18": {
        "depends": [],
        "description": "Sodium is a new, easy-to-use software library for encryption,\ndecryption, signatures, password hashing and more.",
        "git": {
          "auto-lib": "sodium/sodium",
          "ref": "1.0.18",
          "transform": [
            {
              "edit": {
                "edits": [
                  {
                    "content": "#define SODIUM_STATIC 1",
                    "kind": "insert",
                    "line": 8
                  }
                ],
                "path": "include/sodium/export.h"
              },
              "move": {
                "exclude": [],
                "from": "src/libsodium/include",
                "include": [],
                "strip-components": 0,
                "to": "include/"
              }
            },
            {
              "copy": {
                "exclude": [],
                "from": "builds/msvc/version.h",
                "include": [],
                "strip-components": 0,
                "to": "include/sodium/version.h"
              },
              "move": {
                "exclude": [],
                "from": "src/libsodium",
                "include": [],
                "strip-components": 0,
                "to": "src/"
              },
              "remove": {
                "only-matching": [],
                "path": "src/libsodium"
              }
            },
            {
              "copy": {
                "exclude": [],
                "from": "include",
                "include": [],
                "strip-components": 1,
                "to": "src/"
              }
            }
          ],
          "url": "https://github.com/jedisct1/libsodium.git"
        }
      }
    },
    "lua": {
      "5.1.1": {
        "depends": [],
        "description": "Lua is a powerful and fast programming language that is easy to learn and use and to embed into your application.",
        "git": {
          "auto-lib": "lua/lua",
          "ref": "v5.1.1",
          "transform": [
            {
              "move": {
                "exclude": [],
                "from": ".",
                "include": [
                  "*.c",
                  "*.h"
                ],
                "strip-components": 0,
                "to": "src/"
              }
            }
          ],
          "url": "https://github.com/lua/lua.git"
        }
      },
      "5.2.0": {
        "depends": [],
        "description": "Lua is a powerful and fast programming language that is easy to learn and use and to embed into your application.",
        "git": {
          "auto-lib": "lua/lua",
          "ref": "v5.2.0",
          "transform": [
            {
              "move": {
                "exclude": [],
                "from": ".",
                "include": [
                  "*.c",
                  "*.h"
                ],
                "strip-components": 0,
                "to": "src/"
              }
            }
          ],
          "url": "https://github.com/lua/lua.git"
        }
      },
      "5.2.1": {
        "depends": [],
        "description": "Lua is a powerful and fast programming language that is easy to learn and use and to embed into your application.",
        "git": {
          "auto-lib": "lua/lua",
          "ref": "v5.2.1",
          "transform": [
            {
              "move": {
                "exclude": [],
                "from": ".",
                "include": [
                  "*.c",
                  "*.h"
                ],
                "strip-components": 0,
                "to": "src/"
              }
            }
          ],
          "url": "https://github.com/lua/lua.git"
        }
      },
      "5.2.2": {
        "depends": [],
        "description": "Lua is a powerful and fast programming language that is easy to learn and use and to embed into your application.",
        "git": {
          "auto-lib": "lua/lua",
          "ref": "v5.2.2",
          "transform": [
            {
              "move": {
                "exclude": [],
                "from": ".",
                "include": [
                  "*.c",
                  "*.h"
                ],
                "strip-components": 0,
                "to": "src/"
              }
            }
          ],
          "url": "https://github.com/lua/lua.git"
        }
      },
      "5.2.3": {
        "depends": [],
        "description": "Lua is a powerful and fast programming language that is easy to learn and use and to embed into your application.",
        "git": {
          "auto-lib": "lua/lua",
          "ref": "v5.2.3",
          "transform": [
            {
              "move": {
                "exclude": [],
                "from": ".",
                "include": [
                  "*.c",
                  "*.h"
                ],
                "strip-components": 0,
                "to": "src/"
              }
            }
          ],
          "url": "https://github.com/lua/lua.git"
        }
      },
      "5.3.0": {
        "depends": [],
        "description": "Lua is a powerful and fast programming language that is easy to learn and use and to embed into your application.",
        "git": {
          "auto-lib": "lua/lua",
          "ref": "v5.3.0",
          "transform": [
            {
              "move": {
                "exclude": [],
                "from": ".",
                "include": [
                  "*.c",
                  "*.h"
                ],
                "strip-components": 0,
                "to": "src/"
              }
            }
          ],
          "url": "https://github.com/lua/lua.git"
        }
      },
      "5.3.1": {
        "depends": [],
        "description": "Lua is a powerful and fast programming language that is easy to learn and use and to embed into your application.",
        "git": {
          "auto-lib": "lua/lua",
          "ref": "v5.3.1",
          "transform": [
            {
              "move": {
                "exclude": [],
                "from": ".",
                "include": [
                  "*.c",
                  "*.h"
                ],
                "strip-components": 0,
                "to": "src/"
              }
            }
          ],
          "url": "https://github.com/lua/lua.git"
        }
      },
      "5.3.2": {
        "depends": [],
        "description": "Lua is a powerful and fast programming language that is easy to learn and use and to embed into your application.",
        "git": {
          "auto-lib": "lua/lua",
          "ref": "v5.3.2",
          "transform": [
            {
              "move": {
                "exclude": [],
                "from": ".",
                "include": [
                  "*.c",
                  "*.h"
                ],
                "strip-components": 0,
                "to": "src/"
              }
            }
          ],
          "url": "https://github.com/lua/lua.git"
        }
      },
      "5.3.3": {
        "depends": [],
        "description": "Lua is a powerful and fast programming language that is easy to learn and use and to embed into your application.",
        "git": {
          "auto-lib": "lua/lua",
          "ref": "v5.3.3",
          "transform": [
            {
              "move": {
                "exclude": [],
                "from": ".",
                "include": [
                  "*.c",
                  "*.h"
                ],
                "strip-components": 0,
                "to": "src/"
              }
            }
          ],
          "url": "https://github.com/lua/lua.git"
        }
      },
      "5.3.4": {
        "depends": [],
        "description": "Lua is a powerful and fast programming language that is easy to learn and use and to embed into your application.",
        "git": {
          "auto-lib": "lua/lua",
          "ref": "v5.3.4",
          "transform": [
            {
              "move": {
                "exclude": [],
                "from": ".",
                "include": [
                  "*.c",
                  "*.h"
                ],
                "strip-components": 0,
                "to": "src/"
              }
            }
          ],
          "url": "https://github.com/lua/lua.git"
        }
      },
      "5.3.5": {
        "depends": [],
        "description": "Lua is a powerful and fast programming language that is easy to learn and use and to embed into your application.",
        "git": {
          "auto-lib": "lua/lua",
          "ref": "v5.3.5",
          "transform": [
            {
              "move": {
                "exclude": [],
                "from": ".",
                "include": [
                  "*.c",
                  "*.h"
                ],
                "strip-components": 0,
                "to": "src/"
              }
            }
          ],
          "url": "https://github.com/lua/lua.git"
        }
      },
      "5.4.0": {
        "depends": [],
        "description": "Lua is a powerful and fast programming language that is easy to learn and use and to embed into your application.",
        "git": {
          "auto-lib": "lua/lua",
          "ref": "v5.4.0",
          "transform": [
            {
              "move": {
                "exclude": [],
                "from": ".",
                "include": [
                  "*.c",
                  "*.h"
                ],
                "strip-components": 0,
                "to": "src/"
              }
            }
          ],
          "url": "https://github.com/lua/lua.git"
        }
      }
    },
    "magic_enum": {
      "0.5.0": {
        "depends": [],
        "description": "Static reflection for enums",
        "git": {
          "auto-lib": "neargye/magic_enum",
          "ref": "v0.5.0",
          "transform": [],
          "url": "https://github.com/Neargye/magic_enum.git"
        }
      },
      "0.6.0": {
        "depends": [],
        "description": "Static reflection for enums",
        "git": {
          "auto-lib": "neargye/magic_enum",
          "ref": "v0.6.0",
          "transform": [],
          "url": "https://github.com/Neargye/magic_enum.git"
        }
      },
      "0.6.1": {
        "depends": [],
        "description": "Static reflection for enums",
        "git": {
          "auto-lib": "neargye/magic_enum",
          "ref": "v0.6.1",
          "transform": [],
          "url": "https://github.com/Neargye/magic_enum.git"
        }
      },
      "0.6.2": {
        "depends": [],
        "description": "Static reflection for enums",
        "git": {
          "auto-lib": "neargye/magic_enum",
          "ref": "v0.6.2",
          "transform": [],
          "url": "https://github.com/Neargye/magic_enum.git"
        }
      },
      "0.6.3": {
        "depends": [],
        "description": "Static reflection for enums",
        "git": {
          "auto-lib": "neargye/magic_enum",
          "ref": "v0.6.3",
          "transform": [],
          "url": "https://github.com/Neargye/magic_enum.git"
        }
      },
      "0.6.4": {
        "depends": [],
        "description": "Static reflection for enums",
        "git": {
          "auto-lib": "neargye/magic_enum",
          "ref": "v0.6.4",
          "transform": [],
          "url": "https://github.com/Neargye/magic_enum.git"
        }
      },
      "0.6.5": {
        "depends": [],
        "description": "Static reflection for enums",
        "git": {
          "auto-lib": "neargye/magic_enum",
          "ref": "v0.6.5",
          "transform": [],
          "url": "https://github.com/Neargye/magic_enum.git"
        }
      },
      "0.6.6": {
        "depends": [],
        "description": "Static reflection for enums",
        "git": {
          "auto-lib": "neargye/magic_enum",
          "ref": "v0.6.6",
          "transform": [],
          "url": "https://github.com/Neargye/magic_enum.git"
        }
      }
    },
    "ms-wil": {
      "2020.03.16": {
        "depends": [],
        "description": "The Windows Implementation Library",
        "git": {
          "ref": "dds/2020.03.16",
          "transform": [],
          "url": "https://github.com/vector-of-bool/wil.git"
        }
      }
    },
    "nameof": {
      "0.8.3": {
        "depends": [],
        "description": "Nameof operator for modern C++",
        "git": {
          "auto-lib": "neargye/nameof",
          "ref": "v0.8.3",
          "transform": [],
          "url": "https://github.com/Neargye/nameof.git"
        }
      },
      "0.9.0": {
        "depends": [],
        "description": "Nameof operator for modern C++",
        "git": {
          "auto-lib": "neargye/nameof",
          "ref": "v0.9.0",
          "transform": [],
          "url": "https://github.com/Neargye/nameof.git"
        }
      },
      "0.9.1": {
        "depends": [],
        "description": "Nameof operator for modern C++",
        "git": {
          "auto-lib": "neargye/nameof",
          "ref": "v0.9.1",
          "transform": [],
          "url": "https://github.com/Neargye/nameof.git"
        }
      },
      "0.9.2": {
        "depends": [],
        "description": "Nameof operator for modern C++",
        "git": {
          "auto-lib": "neargye/nameof",
          "ref": "v0.9.2",
          "transform": [],
          "url": "https://github.com/Neargye/nameof.git"
        }
      },
      "0.9.3": {
        "depends": [],
        "description": "Nameof operator for modern C++",
        "git": {
          "auto-lib": "neargye/nameof",
          "ref": "v0.9.3",
          "transform": [],
          "url": "https://github.com/Neargye/nameof.git"
        }
      },
      "0.9.4": {
        "depends": [],
        "description": "Nameof operator for modern C++",
        "git": {
          "auto-lib": "neargye/nameof",
          "ref": "v0.9.4",
          "transform": [],
          "url": "https://github.com/Neargye/nameof.git"
        }
      }
    },
    "neo-concepts": {
      "0.1.0": {
        "depends": [],
        "description": "Minimal C++ concepts library. Contains many definitions from C++20.",
        "git": {
          "ref": "0.1.0",
          "transform": [],
          "url": "https://github.com/vector-of-bool/neo-concepts.git"
        }
      },
      "0.2.0": {
        "depends": [],
        "description": "Minimal C++ concepts library. Contains many definitions from C++20.",
        "git": {
          "ref": "0.2.0",
          "transform": [],
          "url": "https://github.com/vector-of-bool/neo-concepts.git"
        }
      },
      "0.2.1": {
        "depends": [],
        "description": "Minimal C++ concepts library. Contains many definitions from C++20.",
        "git": {
          "ref": "0.2.1",
          "transform": [],
          "url": "https://github.com/vector-of-bool/neo-concepts.git"
        }
      },
      "0.2.2": {
        "depends": [],
        "description": "Minimal C++ concepts library. Contains many definitions from C++20.",
        "git": {
          "ref": "0.2.2",
          "transform": [],
          "url": "https://github.com/vector-of-bool/neo-concepts.git"
        }
      },
      "0.3.0": {
        "depends": [],
        "description": "Minimal C++ concepts library. Contains many definitions from C++20.",
        "git": {
          "ref": "0.3.0",
          "transform": [],
          "url": "https://github.com/vector-of-bool/neo-concepts.git"
        }
      },
      "0.3.1": {
        "depends": [],
        "description": "Minimal C++ concepts library. Contains many definitions from C++20.",
        "git": {
          "ref": "0.3.1",
          "transform": [],
          "url": "https://github.com/vector-of-bool/neo-concepts.git"
        }
      },
      "0.3.2": {
        "depends": [],
        "description": "Minimal C++ concepts library. Contains many definitions from C++20.",
        "git": {
          "ref": "0.3.2",
          "transform": [],
          "url": "https://github.com/vector-of-bool/neo-concepts.git"
        }
      }
    },
    "neo-fun": {
      "0.1.0": {
        "depends": [],
        "description": "Some library fundamentals that you might find useful",
        "git": {
          "ref": "0.1.0",
          "transform": [],
          "url": "https://github.com/vector-of-bool/neo-fun.git"
        }
      },
      "0.1.1": {
        "depends": [],
        "description": "Some library fundamentals that you might find useful",
        "git": {
          "ref": "0.1.1",
          "transform": [],
          "url": "https://github.com/vector-of-bool/neo-fun.git"
        }
      },
      "0.2.0": {
        "depends": [],
        "description": "Some library fundamentals that you might find useful",
        "git": {
          "ref": "0.2.0",
          "transform": [],
          "url": "https://github.com/vector-of-bool/neo-fun.git"
        }
      },
      "0.2.1": {
        "depends": [],
        "description": "Some library fundamentals that you might find useful",
        "git": {
          "ref": "0.2.1",
          "transform": [],
          "url": "https://github.com/vector-of-bool/neo-fun.git"
        }
      },
      "0.3.0": {
        "depends": [],
        "description": "Some library fundamentals that you might find useful",
        "git": {
          "ref": "0.3.0",
          "transform": [],
          "url": "https://github.com/vector-of-bool/neo-fun.git"
        }
      },
      "0.3.1": {
        "depends": [],
        "description": "Some library fundamentals that you might find useful",
        "git": {
          "ref": "0.3.1",
          "transform": [],
          "url": "https://github.com/vector-of-bool/neo-fun.git"
        }
      },
      "0.3.2": {
        "depends": [],
        "description": "Some library fundamentals that you might find useful",
        "git": {
          "ref": "0.3.2",
          "transform": [],
          "url": "https://github.com/vector-of-bool/neo-fun.git"
        }
      }
    },
    "neo-sqlite3": {
      "0.1.0": {
        "depends": [],
        "description": "A modern and low-level C++ SQLite API",
        "git": {
          "ref": "0.1.0",
          "transform": [],
          "url": "https://github.com/vector-of-bool/neo-sqlite3.git"
        }
      },
      "0.2.0": {
        "depends": [],
        "description": "A modern and low-level C++ SQLite API",
        "git": {
          "ref": "0.2.0",
          "transform": [],
          "url": "https://github.com/vector-of-bool/neo-sqlite3.git"
        }
      },
      "0.2.1": {
        "depends": [],
        "description": "A modern and low-level C++ SQLite API",
        "git": {
          "ref": "0.2.1",
          "transform": [],
          "url": "https://github.com/vector-of-bool/neo-sqlite3.git"
        }
      },
      "0.2.2": {
        "depends": [],
        "description": "A modern and low-level C++ SQLite API",
        "git": {
          "ref": "0.2.2",
          "transform": [],
          "url": "https://github.com/vector-of-bool/neo-sqlite3.git"
        }
      },
      "0.2.3": {
        "depends": [],
        "description": "A modern and low-level C++ SQLite API",
        "git": {
          "ref": "0.2.3",
          "transform": [],
          "url": "https://github.com/vector-of-bool/neo-sqlite3.git"
        }
      },
      "0.3.0": {
        "depends": [],
        "description": "A modern and low-level C++ SQLite API",
        "git": {
          "ref": "0.3.0",
          "transform": [],
          "url": "https://github.com/vector-of-bool/neo-sqlite3.git"
        }
      }
    },
    "nlohmann-json": {
      "3.7.1": {
        "depends": [],
        "description": "JSON for Modern C++",
        "git": {
          "ref": "dds/3.7.1",
          "transform": [],
          "url": "https://github.com/vector-of-bool/json.git"
        }
      }
    },
    "pcg-cpp": {
      "0.98.1": {
        "depends": [],
        "description": "PCG Randum Number Generation, C++ Edition",
        "git": {
          "auto-lib": "pcg/pcg-cpp",
          "ref": "v0.98.1",
          "transform": [],
          "url": "https://github.com/imneme/pcg-cpp.git"
        }
      }
    },
    "pegtl": {
      "2.6.0": {
        "depends": [],
        "description": "Parsing Expression Grammar Template Library",
        "git": {
          "auto-lib": "tao/pegtl",
          "ref": "2.6.0",
          "transform": [
            {
              "remove": {
                "only-matching": [],
                "path": "src/"
              }
            }
          ],
          "url": "https://github.com/taocpp/PEGTL.git"
        }
      },
      "2.6.1": {
        "depends": [],
        "description": "Parsing Expression Grammar Template Library",
        "git": {
          "auto-lib": "tao/pegtl",
          "ref": "2.6.1",
          "transform": [
            {
              "remove": {
                "only-matching": [],
                "path": "src/"
              }
            }
          ],
          "url": "https://github.com/taocpp/PEGTL.git"
        }
      },
      "2.7.0": {
        "depends": [],
        "description": "Parsing Expression Grammar Template Library",
        "git": {
          "auto-lib": "tao/pegtl",
          "ref": "2.7.0",
          "transform": [
            {
              "remove": {
                "only-matching": [],
                "path": "src/"
              }
            }
          ],
          "url": "https://github.com/taocpp/PEGTL.git"
        }
      },
      "2.7.1": {
        "depends": [],
        "description": "Parsing Expression Grammar Template Library",
        "git": {
          "auto-lib": "tao/pegtl",
          "ref": "2.7.1",
          "transform": [
            {
              "remove": {
                "only-matching": [],
                "path": "src/"
              }
            }
          ],
          "url": "https://github.com/taocpp/PEGTL.git"
        }
      },
      "2.8.0": {
        "depends": [],
        "description": "Parsing Expression Grammar Template Library",
        "git": {
          "auto-lib": "tao/pegtl",
          "ref": "2.8.0",
          "transform": [
            {
              "remove": {
                "only-matching": [],
                "path": "src/"
              }
            }
          ],
          "url": "https://github.com/taocpp/PEGTL.git"
        }
      },
      "2.8.1": {
        "depends": [],
        "description": "Parsing Expression Grammar Template Library",
        "git": {
          "auto-lib": "tao/pegtl",
          "ref": "2.8.1",
          "transform": [
            {
              "remove": {
                "only-matching": [],
                "path": "src/"
              }
            }
          ],
          "url": "https://github.com/taocpp/PEGTL.git"
        }
      },
      "2.8.2": {
        "depends": [],
        "description": "Parsing Expression Grammar Template Library",
        "git": {
          "auto-lib": "tao/pegtl",
          "ref": "2.8.2",
          "transform": [
            {
              "remove": {
                "only-matching": [],
                "path": "src/"
              }
            }
          ],
          "url": "https://github.com/taocpp/PEGTL.git"
        }
      },
      "2.8.3": {
        "depends": [],
        "description": "Parsing Expression Grammar Template Library",
        "git": {
          "auto-lib": "tao/pegtl",
          "ref": "2.8.3",
          "transform": [
            {
              "remove": {
                "only-matching": [],
                "path": "src/"
              }
            }
          ],
          "url": "https://github.com/taocpp/PEGTL.git"
        }
      }
    },
    "pubgrub": {
      "0.1.2": {
        "depends": [],
        "description": "A C++ implementation of the Pubgrub version solving algorithm",
        "git": {
          "ref": "0.1.2",
          "transform": [],
          "url": "https://github.com/vector-of-bool/pubgrub.git"
        }
      },
      "0.2.0": {
        "depends": [],
        "description": "A C++ implementation of the Pubgrub version solving algorithm",
        "git": {
          "ref": "0.2.0",
          "transform": [],
          "url": "https://github.com/vector-of-bool/pubgrub.git"
        }
      },
      "0.2.1": {
        "depends": [],
        "description": "A C++ implementation of the Pubgrub version solving algorithm",
        "git": {
          "ref": "0.2.1",
          "transform": [],
          "url": "https://github.com/vector-of-bool/pubgrub.git"
        }
      }
    },
    "pybind11": {
      "2.0.0": {
        "depends": [],
        "description": "Seamless operability between C++11 and Python",
        "git": {
          "auto-lib": "pybind/pybind11",
          "ref": "v2.0.0",
          "transform": [],
          "url": "https://github.com/pybind/pybind11.git"
        }
      },
      "2.0.1": {
        "depends": [],
        "description": "Seamless operability between C++11 and Python",
        "git": {
          "auto-lib": "pybind/pybind11",
          "ref": "v2.0.1",
          "transform": [],
          "url": "https://github.com/pybind/pybind11.git"
        }
      },
      "2.1.0": {
        "depends": [],
        "description": "Seamless operability between C++11 and Python",
        "git": {
          "auto-lib": "pybind/pybind11",
          "ref": "v2.1.0",
          "transform": [],
          "url": "https://github.com/pybind/pybind11.git"
        }
      },
      "2.1.1": {
        "depends": [],
        "description": "Seamless operability between C++11 and Python",
        "git": {
          "auto-lib": "pybind/pybind11",
          "ref": "v2.1.1",
          "transform": [],
          "url": "https://github.com/pybind/pybind11.git"
        }
      },
      "2.2.0": {
        "depends": [],
        "description": "Seamless operability between C++11 and Python",
        "git": {
          "auto-lib": "pybind/pybind11",
          "ref": "v2.2.0",
          "transform": [],
          "url": "https://github.com/pybind/pybind11.git"
        }
      },
      "2.2.1": {
        "depends": [],
        "description": "Seamless operability between C++11 and Python",
        "git": {
          "auto-lib": "pybind/pybind11",
          "ref": "v2.2.1",
          "transform": [],
          "url": "https://github.com/pybind/pybind11.git"
        }
      },
      "2.2.2": {
        "depends": [],
        "description": "Seamless operability between C++11 and Python",
        "git": {
          "auto-lib": "pybind/pybind11",
          "ref": "v2.2.2",
          "transform": [],
          "url": "https://github.com/pybind/pybind11.git"
        }
      },
      "2.2.3": {
        "depends": [],
        "description": "Seamless operability between C++11 and Python",
        "git": {
          "auto-lib": "pybind/pybind11",
          "ref": "v2.2.3",
          "transform": [],
          "url": "https://github.com/pybind/pybind11.git"
        }
      },
      "2.2.4": {
        "depends": [],
        "description": "Seamless operability between C++11 and Python",
        "git": {
          "auto-lib": "pybind/pybind11",
          "ref": "v2.2.4",
          "transform": [],
          "url": "https://github.com/pybind/pybind11.git"
        }
      },
      "2.3.0": {
        "depends": [],
        "description": "Seamless operability between C++11 and Python",
        "git": {
          "auto-lib": "pybind/pybind11",
          "ref": "v2.3.0",
          "transform": [],
          "url": "https://github.com/pybind/pybind11.git"
        }
      },
      "2.4.0": {
        "depends": [],
        "description": "Seamless operability between C++11 and Python",
        "git": {
          "auto-lib": "pybind/pybind11",
          "ref": "v2.4.0",
          "transform": [],
          "url": "https://github.com/pybind/pybind11.git"
        }
      },
      "2.4.1": {
        "depends": [],
        "description": "Seamless operability between C++11 and Python",
        "git": {
          "auto-lib": "pybind/pybind11",
          "ref": "v2.4.1",
          "transform": [],
          "url": "https://github.com/pybind/pybind11.git"
        }
      },
      "2.4.2": {
        "depends": [],
        "description": "Seamless operability between C++11 and Python",
        "git": {
          "auto-lib": "pybind/pybind11",
          "ref": "v2.4.2",
          "transform": [],
          "url": "https://github.com/pybind/pybind11.git"
        }
      },
      "2.4.3": {
        "depends": [],
        "description": "Seamless operability between C++11 and Python",
        "git": {
          "auto-lib": "pybind/pybind11",
          "ref": "v2.4.3",
          "transform": [],
          "url": "https://github.com/pybind/pybind11.git"
        }
      },
      "2.5.0": {
        "depends": [],
        "description": "Seamless operability between C++11 and Python",
        "git": {
          "auto-lib": "pybind/pybind11",
          "ref": "v2.5.0",
          "transform": [],
          "url": "https://github.com/pybind/pybind11.git"
        }
      }
    },
    "range-v3": {
      "0.10.0": {
        "depends": [],
        "description": "Range library for C++14/17/20, basis for C++20's std::ranges",
        "git": {
          "auto-lib": "range-v3/range-v3",
          "ref": "0.10.0",
          "transform": [],
          "url": "https://github.com/ericniebler/range-v3.git"
        }
      },
      "0.5.0": {
        "depends": [],
        "description": "Range library for C++14/17/20, basis for C++20's std::ranges",
        "git": {
          "auto-lib": "range-v3/range-v3",
          "ref": "0.5.0",
          "transform": [],
          "url": "https://github.com/ericniebler/range-v3.git"
        }
      },
      "0.9.0": {
        "depends": [],
        "description": "Range library for C++14/17/20, basis for C++20's std::ranges",
        "git": {
          "auto-lib": "range-v3/range-v3",
          "ref": "0.9.0",
          "transform": [],
          "url": "https://github.com/ericniebler/range-v3.git"
        }
      },
      "0.9.1": {
        "depends": [],
        "description": "Range library for C++14/17/20, basis for C++20's std::ranges",
        "git": {
          "auto-lib": "range-v3/range-v3",
          "ref": "0.9.1",
          "transform": [],
          "url": "https://github.com/ericniebler/range-v3.git"
        }
      }
    },
    "semver": {
      "0.2.1": {
        "depends": [],
        "description": "A C++ library that implements Semantic Versioning parsing, emitting, types, ordering, and operations. See https://semver.org/",
        "git": {
          "ref": "0.2.1",
          "transform": [],
          "url": "https://github.com/vector-of-bool/semver.git"
        }
      },
      "0.2.2": {
        "depends": [],
        "description": "A C++ library that implements Semantic Versioning parsing, emitting, types, ordering, and operations. See https://semver.org/",
        "git": {
          "ref": "0.2.2",
          "transform": [],
          "url": "https://github.com/vector-of-bool/semver.git"
        }
      }
    },
    "sol2": {
      "2.20.0": {
        "depends": [
          "lua+0.0.0"
        ],
        "description": "A C++ <-> Lua API wrapper with advanced features and top notch performance",
        "git": {
          "ref": "v2.20.0",
          "transform": [
            {
              "move": {
                "exclude": [],
                "from": "sol",
                "include": [],
                "strip-components": 0,
                "to": "src/sol"
              },
              "write": {
                "content": "{\n  \"name\": \"sol2\",\n  \"namespace\": \"sol2\",\n  \"version\": \"2.20.0\",\n  \"depends\": [\n    \"lua+0.0.0\"\n  ]\n}",
                "path": "package.json"
              }
            },
            {
              "write": {
                "content": "{\n  \"name\": \"sol2\",\n  \"uses\": [\n    \"lua/lua\"\n  ]\n}",
                "path": "library.json"
              }
            }
          ],
          "url": "https://github.com/ThePhD/sol2.git"
        }
      },
      "2.20.1": {
        "depends": [
          "lua+0.0.0"
        ],
        "description": "A C++ <-> Lua API wrapper with advanced features and top notch performance",
        "git": {
          "ref": "v2.20.1",
          "transform": [
            {
              "move": {
                "exclude": [],
                "from": "sol",
                "include": [],
                "strip-components": 0,
                "to": "src/sol"
              },
              "write": {
                "content": "{\n  \"name\": \"sol2\",\n  \"namespace\": \"sol2\",\n  \"version\": \"2.20.1\",\n  \"depends\": [\n    \"lua+0.0.0\"\n  ]\n}",
                "path": "package.json"
              }
            },
            {
              "write": {
                "content": "{\n  \"name\": \"sol2\",\n  \"uses\": [\n    \"lua/lua\"\n  ]\n}",
                "path": "library.json"
              }
            }
          ],
          "url": "https://github.com/ThePhD/sol2.git"
        }
      },
      "2.20.2": {
        "depends": [
          "lua+0.0.0"
        ],
        "description": "A C++ <-> Lua API wrapper with advanced features and top notch performance",
        "git": {
          "ref": "v2.20.2",
          "transform": [
            {
              "move": {
                "exclude": [],
                "from": "sol",
                "include": [],
                "strip-components": 0,
                "to": "src/sol"
              },
              "write": {
                "content": "{\n  \"name\": \"sol2\",\n  \"namespace\": \"sol2\",\n  \"version\": \"2.20.2\",\n  \"depends\": [\n    \"lua+0.0.0\"\n  ]\n}",
                "path": "package.json"
              }
            },
            {
              "write": {
                "content": "{\n  \"name\": \"sol2\",\n  \"uses\": [\n    \"lua/lua\"\n  ]\n}",
                "path": "library.json"
              }
            }
          ],
          "url": "https://github.com/ThePhD/sol2.git"
        }
      },
      "2.20.3": {
        "depends": [
          "lua+0.0.0"
        ],
        "description": "A C++ <-> Lua API wrapper with advanced features and top notch performance",
        "git": {
          "ref": "v2.20.3",
          "transform": [
            {
              "move": {
                "exclude": [],
                "from": "sol",
                "include": [],
                "strip-components": 0,
                "to": "src/sol"
              },
              "write": {
                "content": "{\n  \"name\": \"sol2\",\n  \"namespace\": \"sol2\",\n  \"version\": \"2.20.3\",\n  \"depends\": [\n    \"lua+0.0.0\"\n  ]\n}",
                "path": "package.json"
              }
            },
            {
              "write": {
                "content": "{\n  \"name\": \"sol2\",\n  \"uses\": [\n    \"lua/lua\"\n  ]\n}",
                "path": "library.json"
              }
            }
          ],
          "url": "https://github.com/ThePhD/sol2.git"
        }
      },
      "2.20.4": {
        "depends": [
          "lua+0.0.0"
        ],
        "description": "A C++ <-> Lua API wrapper with advanced features and top notch performance",
        "git": {
          "ref": "v2.20.4",
          "transform": [
            {
              "move": {
                "exclude": [],
                "from": "sol",
                "include": [],
                "strip-components": 0,
                "to": "src/sol"
              },
              "write": {
                "content": "{\n  \"name\": \"sol2\",\n  \"namespace\": \"sol2\",\n  \"version\": \"2.20.4\",\n  \"depends\": [\n    \"lua+0.0.0\"\n  ]\n}",
                "path": "package.json"
              }
            },
            {
              "write": {
                "content": "{\n  \"name\": \"sol2\",\n  \"uses\": [\n    \"lua/lua\"\n  ]\n}",
                "path": "library.json"
              }
            }
          ],
          "url": "https://github.com/ThePhD/sol2.git"
        }
      },
      "2.20.5": {
        "depends": [
          "lua+0.0.0"
        ],
        "description": "A C++ <-> Lua API wrapper with advanced features and top notch performance",
        "git": {
          "ref": "v2.20.5",
          "transform": [
            {
              "move": {
                "exclude": [],
                "from": "sol",
                "include": [],
                "strip-components": 0,
                "to": "src/sol"
              },
              "write": {
                "content": "{\n  \"name\": \"sol2\",\n  \"namespace\": \"sol2\",\n  \"version\": \"2.20.5\",\n  \"depends\": [\n    \"lua+0.0.0\"\n  ]\n}",
                "path": "package.json"
              }
            },
            {
              "write": {
                "content": "{\n  \"name\": \"sol2\",\n  \"uses\": [\n    \"lua/lua\"\n  ]\n}",
                "path": "library.json"
              }
            }
          ],
          "url": "https://github.com/ThePhD/sol2.git"
        }
      },
      "2.20.6": {
        "depends": [
          "lua+0.0.0"
        ],
        "description": "A C++ <-> Lua API wrapper with advanced features and top notch performance",
        "git": {
          "ref": "v2.20.6",
          "transform": [
            {
              "move": {
                "exclude": [],
                "from": "sol",
                "include": [],
                "strip-components": 0,
                "to": "src/sol"
              },
              "write": {
                "content": "{\n  \"name\": \"sol2\",\n  \"namespace\": \"sol2\",\n  \"version\": \"2.20.6\",\n  \"depends\": [\n    \"lua+0.0.0\"\n  ]\n}",
                "path": "package.json"
              }
            },
            {
              "write": {
                "content": "{\n  \"name\": \"sol2\",\n  \"uses\": [\n    \"lua/lua\"\n  ]\n}",
                "path": "library.json"
              }
            }
          ],
          "url": "https://github.com/ThePhD/sol2.git"
        }
      },
      "3.0.2": {
        "depends": [
          "lua+0.0.0"
        ],
        "description": "A C++ <-> Lua API wrapper with advanced features and top notch performance",
        "git": {
          "ref": "v3.0.2",
          "transform": [
            {
              "write": {
                "content": "{\n  \"name\": \"sol2\",\n  \"namespace\": \"sol2\",\n  \"version\": \"3.0.2\",\n  \"depends\": [\n    \"lua+0.0.0\"\n  ]\n}",
                "path": "package.json"
              }
            },
            {
              "write": {
                "content": "{\n  \"name\": \"sol2\",\n  \"uses\": [\n    \"lua/lua\"\n  ]\n}",
                "path": "library.json"
              }
            }
          ],
          "url": "https://github.com/ThePhD/sol2.git"
        }
      },
      "3.0.3": {
        "depends": [
          "lua+0.0.0"
        ],
        "description": "A C++ <-> Lua API wrapper with advanced features and top notch performance",
        "git": {
          "ref": "v3.0.3",
          "transform": [
            {
              "write": {
                "content": "{\n  \"name\": \"sol2\",\n  \"namespace\": \"sol2\",\n  \"version\": \"3.0.3\",\n  \"depends\": [\n    \"lua+0.0.0\"\n  ]\n}",
                "path": "package.json"
              }
            },
            {
              "write": {
                "content": "{\n  \"name\": \"sol2\",\n  \"uses\": [\n    \"lua/lua\"\n  ]\n}",
                "path": "library.json"
              }
            }
          ],
          "url": "https://github.com/ThePhD/sol2.git"
        }
      },
      "3.2.0": {
        "depends": [
          "lua+0.0.0"
        ],
        "description": "A C++ <-> Lua API wrapper with advanced features and top notch performance",
        "git": {
          "ref": "v3.2.0",
          "transform": [
            {
              "write": {
                "content": "{\n  \"name\": \"sol2\",\n  \"namespace\": \"sol2\",\n  \"version\": \"3.2.0\",\n  \"depends\": [\n    \"lua+0.0.0\"\n  ]\n}",
                "path": "package.json"
              }
            },
            {
              "write": {
                "content": "{\n  \"name\": \"sol2\",\n  \"uses\": [\n    \"lua/lua\"\n  ]\n}",
                "path": "library.json"
              }
            }
          ],
          "url": "https://github.com/ThePhD/sol2.git"
        }
      },
      "3.2.1": {
        "depends": [
          "lua+0.0.0"
        ],
        "description": "A C++ <-> Lua API wrapper with advanced features and top notch performance",
        "git": {
          "ref": "v3.2.1",
          "transform": [
            {
              "write": {
                "content": "{\n  \"name\": \"sol2\",\n  \"namespace\": \"sol2\",\n  \"version\": \"3.2.1\",\n  \"depends\": [\n    \"lua+0.0.0\"\n  ]\n}",
                "path": "package.json"
              }
            },
            {
              "write": {
                "content": "{\n  \"name\": \"sol2\",\n  \"uses\": [\n    \"lua/lua\"\n  ]\n}",
                "path": "library.json"
              }
            }
          ],
          "url": "https://github.com/ThePhD/sol2.git"
        }
      }
    },
    "spdlog": {
      "1.0.0": {
        "depends": [],
        "description": "Fast C++ logging library",
        "git": {
          "auto-lib": "spdlog/spdlog",
          "ref": "v1.0.0",
          "transform": [],
          "url": "https://github.com/gabime/spdlog.git"
        }
      },
      "1.1.0": {
        "depends": [],
        "description": "Fast C++ logging library",
        "git": {
          "auto-lib": "spdlog/spdlog",
          "ref": "v1.1.0",
          "transform": [],
          "url": "https://github.com/gabime/spdlog.git"
        }
      },
      "1.2.0": {
        "depends": [],
        "description": "Fast C++ logging library",
        "git": {
          "auto-lib": "spdlog/spdlog",
          "ref": "v1.2.0",
          "transform": [],
          "url": "https://github.com/gabime/spdlog.git"
        }
      },
      "1.2.1": {
        "depends": [],
        "description": "Fast C++ logging library",
        "git": {
          "auto-lib": "spdlog/spdlog",
          "ref": "v1.2.1",
          "transform": [],
          "url": "https://github.com/gabime/spdlog.git"
        }
      },
      "1.3.0": {
        "depends": [],
        "description": "Fast C++ logging library",
        "git": {
          "auto-lib": "spdlog/spdlog",
          "ref": "v1.3.0",
          "transform": [],
          "url": "https://github.com/gabime/spdlog.git"
        }
      },
      "1.3.1": {
        "depends": [],
        "description": "Fast C++ logging library",
        "git": {
          "auto-lib": "spdlog/spdlog",
          "ref": "v1.3.1",
          "transform": [],
          "url": "https://github.com/gabime/spdlog.git"
        }
      },
      "1.4.0": {
        "depends": [],
        "description": "Fast C++ logging library",
        "git": {
          "auto-lib": "spdlog/spdlog",
          "ref": "v1.4.0",
          "transform": [],
          "url": "https://github.com/gabime/spdlog.git"
        }
      },
      "1.4.1": {
        "depends": [],
        "description": "Fast C++ logging library",
        "git": {
          "auto-lib": "spdlog/spdlog",
          "ref": "v1.4.1",
          "transform": [],
          "url": "https://github.com/gabime/spdlog.git"
        }
      },
      "1.4.2": {
        "depends": [],
        "description": "Fast C++ logging library",
        "git": {
          "auto-lib": "spdlog/spdlog",
          "ref": "v1.4.2",
          "transform": [],
          "url": "https://github.com/gabime/spdlog.git"
        }
      }
    },
    "tomlpp": {
      "1.0.0": {
        "depends": [],
        "description": "Header-only TOML config file parser and serializer for modern C++",
        "git": {
          "auto-lib": "tomlpp/tomlpp",
          "ref": "v1.0.0",
          "transform": [],
          "url": "https://github.com/marzer/tomlplusplus.git"
        }
      },
      "1.1.0": {
        "depends": [],
        "description": "Header-only TOML config file parser and serializer for modern C++",
        "git": {
          "auto-lib": "tomlpp/tomlpp",
          "ref": "v1.1.0",
          "transform": [],
          "url": "https://github.com/marzer/tomlplusplus.git"
        }
      },
      "1.2.0": {
        "depends": [],
        "description": "Header-only TOML config file parser and serializer for modern C++",
        "git": {
          "auto-lib": "tomlpp/tomlpp",
          "ref": "v1.2.0",
          "transform": [],
          "url": "https://github.com/marzer/tomlplusplus.git"
        }
      },
      "1.2.3": {
        "depends": [],
        "description": "Header-only TOML config file parser and serializer for modern C++",
        "git": {
          "auto-lib": "tomlpp/tomlpp",
          "ref": "v1.2.3",
          "transform": [],
          "url": "https://github.com/marzer/tomlplusplus.git"
        }
      },
      "1.2.4": {
        "depends": [],
        "description": "Header-only TOML config file parser and serializer for modern C++",
        "git": {
          "auto-lib": "tomlpp/tomlpp",
          "ref": "v1.2.4",
          "transform": [],
          "url": "https://github.com/marzer/tomlplusplus.git"
        }
      },
      "1.2.5": {
        "depends": [],
        "description": "Header-only TOML config file parser and serializer for modern C++",
        "git": {
          "auto-lib": "tomlpp/tomlpp",
          "ref": "v1.2.5",
          "transform": [],
          "url": "https://github.com/marzer/tomlplusplus.git"
        }
      },
      "1.3.0": {
        "depends": [],
        "description": "Header-only TOML config file parser and serializer for modern C++",
        "git": {
          "auto-lib": "tomlpp/tomlpp",
          "ref": "v1.3.0",
          "transform": [],
          "url": "https://github.com/marzer/tomlplusplus.git"
        }
      },
      "1.3.3": {
        "depends": [],
        "description": "Header-only TOML config file parser and serializer for modern C++",
        "git": {
          "auto-lib": "tomlpp/tomlpp",
          "ref": "v1.3.3",
          "transform": [],
          "url": "https://github.com/marzer/tomlplusplus.git"
        }
      }
    },
    "vob-json5": {
      "0.1.5": {
        "depends": [],
        "description": "A C++ implementation of a JSON5 parser",
        "git": {
          "ref": "0.1.5",
          "transform": [],
          "url": "https://github.com/vector-of-bool/json5.git"
        }
      }
    },
    "vob-semester": {
      "0.1.0": {
        "depends": [
          "neo-fun^0.1.0",
          "neo-concepts^0.2.1"
        ],
        "description": "A C++ library to process recursive dynamic data",
        "git": {
          "ref": "0.1.0",
          "transform": [],
          "url": "https://github.com/vector-of-bool/semester.git"
        }
      },
      "0.1.1": {
        "depends": [
          "neo-fun^0.1.1",
          "neo-concepts^0.2.2"
        ],
        "description": "A C++ library to process recursive dynamic data",
        "git": {
          "ref": "0.1.1",
          "transform": [],
          "url": "https://github.com/vector-of-bool/semester.git"
        }
      },
      "0.2.0": {
        "depends": [
          "neo-fun^0.3.2",
          "neo-concepts^0.3.2"
        ],
        "description": "A C++ library to process recursive dynamic data",
        "git": {
          "ref": "0.2.0",
          "transform": [],
          "url": "https://github.com/vector-of-bool/semester.git"
        }
      },
      "0.2.1": {
        "depends": [
          "neo-fun^0.3.2",
          "neo-concepts^0.3.2"
        ],
        "description": "A C++ library to process recursive dynamic data",
        "git": {
          "ref": "0.2.1",
          "transform": [],
          "url": "https://github.com/vector-of-bool/semester.git"
        }
      }
    },
    "zlib": {
      "1.0.1": {
        "depends": [],
        "description": "A massively spiffy yet delicately unobtrusive compression library",
        "git": {
          "auto-lib": "zlib/zlib",
          "ref": "v1.0.1",
          "transform": [
            {
              "move": {
                "exclude": [],
                "from": ".",
                "include": [
                  "*.c",
                  "*.h"
                ],
                "strip-components": 0,
                "to": "src/"
              }
            },
            {
              "move": {
                "exclude": [],
                "from": "src/",
                "include": [
                  "zlib.h",
                  "zconf.h"
                ],
                "strip-components": 0,
                "to": "include/"
              }
            }
          ],
          "url": "https://github.com/madler/zlib.git"
        }
      },
      "1.0.2": {
        "depends": [],
        "description": "A massively spiffy yet delicately unobtrusive compression library",
        "git": {
          "auto-lib": "zlib/zlib",
          "ref": "v1.0.2",
          "transform": [
            {
              "move": {
                "exclude": [],
                "from": ".",
                "include": [
                  "*.c",
                  "*.h"
                ],
                "strip-components": 0,
                "to": "src/"
              }
            },
            {
              "move": {
                "exclude": [],
                "from": "src/",
                "include": [
                  "zlib.h",
                  "zconf.h"
                ],
                "strip-components": 0,
                "to": "include/"
              }
            }
          ],
          "url": "https://github.com/madler/zlib.git"
        }
      },
      "1.0.4": {
        "depends": [],
        "description": "A massively spiffy yet delicately unobtrusive compression library",
        "git": {
          "auto-lib": "zlib/zlib",
          "ref": "v1.0.4",
          "transform": [
            {
              "move": {
                "exclude": [],
                "from": ".",
                "include": [
                  "*.c",
                  "*.h"
                ],
                "strip-components": 0,
                "to": "src/"
              }
            },
            {
              "move": {
                "exclude": [],
                "from": "src/",
                "include": [
                  "zlib.h",
                  "zconf.h"
                ],
                "strip-components": 0,
                "to": "include/"
              }
            }
          ],
          "url": "https://github.com/madler/zlib.git"
        }
      },
      "1.0.5": {
        "depends": [],
        "description": "A massively spiffy yet delicately unobtrusive compression library",
        "git": {
          "auto-lib": "zlib/zlib",
          "ref": "v1.0.5",
          "transform": [
            {
              "move": {
                "exclude": [],
                "from": ".",
                "include": [
                  "*.c",
                  "*.h"
                ],
                "strip-components": 0,
                "to": "src/"
              }
            },
            {
              "move": {
                "exclude": [],
                "from": "src/",
                "include": [
                  "zlib.h",
                  "zconf.h"
                ],
                "strip-components": 0,
                "to": "include/"
              }
            }
          ],
          "url": "https://github.com/madler/zlib.git"
        }
      },
      "1.0.7": {
        "depends": [],
        "description": "A massively spiffy yet delicately unobtrusive compression library",
        "git": {
          "auto-lib": "zlib/zlib",
          "ref": "v1.0.7",
          "transform": [
            {
              "move": {
                "exclude": [],
                "from": ".",
                "include": [
                  "*.c",
                  "*.h"
                ],
                "strip-components": 0,
                "to": "src/"
              }
            },
            {
              "move": {
                "exclude": [],
                "from": "src/",
                "include": [
                  "zlib.h",
                  "zconf.h"
                ],
                "strip-components": 0,
                "to": "include/"
              }
            }
          ],
          "url": "https://github.com/madler/zlib.git"
        }
      },
      "1.0.8": {
        "depends": [],
        "description": "A massively spiffy yet delicately unobtrusive compression library",
        "git": {
          "auto-lib": "zlib/zlib",
          "ref": "v1.0.8",
          "transform": [
            {
              "move": {
                "exclude": [],
                "from": ".",
                "include": [
                  "*.c",
                  "*.h"
                ],
                "strip-components": 0,
                "to": "src/"
              }
            },
            {
              "move": {
                "exclude": [],
                "from": "src/",
                "include": [
                  "zlib.h",
                  "zconf.h"
                ],
                "strip-components": 0,
                "to": "include/"
              }
            }
          ],
          "url": "https://github.com/madler/zlib.git"
        }
      },
      "1.0.9": {
        "depends": [],
        "description": "A massively spiffy yet delicately unobtrusive compression library",
        "git": {
          "auto-lib": "zlib/zlib",
          "ref": "v1.0.9",
          "transform": [
            {
              "move": {
                "exclude": [],
                "from": ".",
                "include": [
                  "*.c",
                  "*.h"
                ],
                "strip-components": 0,
                "to": "src/"
              }
            },
            {
              "move": {
                "exclude": [],
                "from": "src/",
                "include": [
                  "zlib.h",
                  "zconf.h"
                ],
                "strip-components": 0,
                "to": "include/"
              }
            }
          ],
          "url": "https://github.com/madler/zlib.git"
        }
      },
      "1.1.0": {
        "depends": [],
        "description": "A massively spiffy yet delicately unobtrusive compression library",
        "git": {
          "auto-lib": "zlib/zlib",
          "ref": "v1.1.0",
          "transform": [
            {
              "move": {
                "exclude": [],
                "from": ".",
                "include": [
                  "*.c",
                  "*.h"
                ],
                "strip-components": 0,
                "to": "src/"
              }
            },
            {
              "move": {
                "exclude": [],
                "from": "src/",
                "include": [
                  "zlib.h",
                  "zconf.h"
                ],
                "strip-components": 0,
                "to": "include/"
              }
            }
          ],
          "url": "https://github.com/madler/zlib.git"
        }
      },
      "1.1.1": {
        "depends": [],
        "description": "A massively spiffy yet delicately unobtrusive compression library",
        "git": {
          "auto-lib": "zlib/zlib",
          "ref": "v1.1.1",
          "transform": [
            {
              "move": {
                "exclude": [],
                "from": ".",
                "include": [
                  "*.c",
                  "*.h"
                ],
                "strip-components": 0,
                "to": "src/"
              }
            },
            {
              "move": {
                "exclude": [],
                "from": "src/",
                "include": [
                  "zlib.h",
                  "zconf.h"
                ],
                "strip-components": 0,
                "to": "include/"
              }
            }
          ],
          "url": "https://github.com/madler/zlib.git"
        }
      },
      "1.1.2": {
        "depends": [],
        "description": "A massively spiffy yet delicately unobtrusive compression library",
        "git": {
          "auto-lib": "zlib/zlib",
          "ref": "v1.1.2",
          "transform": [
            {
              "move": {
                "exclude": [],
                "from": ".",
                "include": [
                  "*.c",
                  "*.h"
                ],
                "strip-components": 0,
                "to": "src/"
              }
            },
            {
              "move": {
                "exclude": [],
                "from": "src/",
                "include": [
                  "zlib.h",
                  "zconf.h"
                ],
                "strip-components": 0,
                "to": "include/"
              }
            }
          ],
          "url": "https://github.com/madler/zlib.git"
        }
      },
      "1.1.3": {
        "depends": [],
        "description": "A massively spiffy yet delicately unobtrusive compression library",
        "git": {
          "auto-lib": "zlib/zlib",
          "ref": "v1.1.3",
          "transform": [
            {
              "move": {
                "exclude": [],
                "from": ".",
                "include": [
                  "*.c",
                  "*.h"
                ],
                "strip-components": 0,
                "to": "src/"
              }
            },
            {
              "move": {
                "exclude": [],
                "from": "src/",
                "include": [
                  "zlib.h",
                  "zconf.h"
                ],
                "strip-components": 0,
                "to": "include/"
              }
            }
          ],
          "url": "https://github.com/madler/zlib.git"
        }
      },
      "1.1.4": {
        "depends": [],
        "description": "A massively spiffy yet delicately unobtrusive compression library",
        "git": {
          "auto-lib": "zlib/zlib",
          "ref": "v1.1.4",
          "transform": [
            {
              "move": {
                "exclude": [],
                "from": ".",
                "include": [
                  "*.c",
                  "*.h"
                ],
                "strip-components": 0,
                "to": "src/"
              }
            },
            {
              "move": {
                "exclude": [],
                "from": "src/",
                "include": [
                  "zlib.h",
                  "zconf.h"
                ],
                "strip-components": 0,
                "to": "include/"
              }
            }
          ],
          "url": "https://github.com/madler/zlib.git"
        }
      },
      "1.2.0": {
        "depends": [],
        "description": "A massively spiffy yet delicately unobtrusive compression library",
        "git": {
          "auto-lib": "zlib/zlib",
          "ref": "v1.2.0.8",
          "transform": [
            {
              "move": {
                "exclude": [],
                "from": ".",
                "include": [
                  "*.c",
                  "*.h"
                ],
                "strip-components": 0,
                "to": "src/"
              }
            },
            {
              "move": {
                "exclude": [],
                "from": "src/",
                "include": [
                  "zlib.h",
                  "zconf.h"
                ],
                "strip-components": 0,
                "to": "include/"
              }
            }
          ],
          "url": "https://github.com/madler/zlib.git"
        }
      },
      "1.2.1": {
        "depends": [],
        "description": "A massively spiffy yet delicately unobtrusive compression library",
        "git": {
          "auto-lib": "zlib/zlib",
          "ref": "v1.2.1.2",
          "transform": [
            {
              "move": {
                "exclude": [],
                "from": ".",
                "include": [
                  "*.c",
                  "*.h"
                ],
                "strip-components": 0,
                "to": "src/"
              }
            },
            {
              "move": {
                "exclude": [],
                "from": "src/",
                "include": [
                  "zlib.h",
                  "zconf.h"
                ],
                "strip-components": 0,
                "to": "include/"
              }
            }
          ],
          "url": "https://github.com/madler/zlib.git"
        }
      },
      "1.2.10": {
        "depends": [],
        "description": "A massively spiffy yet delicately unobtrusive compression library",
        "git": {
          "auto-lib": "zlib/zlib",
          "ref": "v1.2.10",
          "transform": [
            {
              "move": {
                "exclude": [],
                "from": ".",
                "include": [
                  "*.c",
                  "*.h"
                ],
                "strip-components": 0,
                "to": "src/"
              }
            },
            {
              "move": {
                "exclude": [],
                "from": "src/",
                "include": [
                  "zlib.h",
                  "zconf.h"
                ],
                "strip-components": 0,
                "to": "include/"
              }
            }
          ],
          "url": "https://github.com/madler/zlib.git"
        }
      },
      "1.2.11": {
        "depends": [],
        "description": "A massively spiffy yet delicately unobtrusive compression library",
        "git": {
          "auto-lib": "zlib/zlib",
          "ref": "v1.2.11",
          "transform": [
            {
              "move": {
                "exclude": [],
                "from": ".",
                "include": [
                  "*.c",
                  "*.h"
                ],
                "strip-components": 0,
                "to": "src/"
              }
            },
            {
              "move": {
                "exclude": [],
                "from": "src/",
                "include": [
                  "zlib.h",
                  "zconf.h"
                ],
                "strip-components": 0,
                "to": "include/"
              }
            }
          ],
          "url": "https://github.com/madler/zlib.git"
        }
      },
      "1.2.2": {
        "depends": [],
        "description": "A massively spiffy yet delicately unobtrusive compression library",
        "git": {
          "auto-lib": "zlib/zlib",
          "ref": "v1.2.2.4",
          "transform": [
            {
              "move": {
                "exclude": [],
                "from": ".",
                "include": [
                  "*.c",
                  "*.h"
                ],
                "strip-components": 0,
                "to": "src/"
              }
            },
            {
              "move": {
                "exclude": [],
                "from": "src/",
                "include": [
                  "zlib.h",
                  "zconf.h"
                ],
                "strip-components": 0,
                "to": "include/"
              }
            }
          ],
          "url": "https://github.com/madler/zlib.git"
        }
      },
      "1.2.3": {
        "depends": [],
        "description": "A massively spiffy yet delicately unobtrusive compression library",
        "git": {
          "auto-lib": "zlib/zlib",
          "ref": "v1.2.3.8",
          "transform": [
            {
              "move": {
                "exclude": [],
                "from": ".",
                "include": [
                  "*.c",
                  "*.h"
                ],
                "strip-components": 0,
                "to": "src/"
              }
            },
            {
              "move": {
                "exclude": [],
                "from": "src/",
                "include": [
                  "zlib.h",
                  "zconf.h"
                ],
                "strip-components": 0,
                "to": "include/"
              }
            }
          ],
          "url": "https://github.com/madler/zlib.git"
        }
      },
      "1.2.4": {
        "depends": [],
        "description": "A massively spiffy yet delicately unobtrusive compression library",
        "git": {
          "auto-lib": "zlib/zlib",
          "ref": "v1.2.4.5",
          "transform": [
            {
              "move": {
                "exclude": [],
                "from": ".",
                "include": [
                  "*.c",
                  "*.h"
                ],
                "strip-components": 0,
                "to": "src/"
              }
            },
            {
              "move": {
                "exclude": [],
                "from": "src/",
                "include": [
                  "zlib.h",
                  "zconf.h"
                ],
                "strip-components": 0,
                "to": "include/"
              }
            }
          ],
          "url": "https://github.com/madler/zlib.git"
        }
      },
      "1.2.5": {
        "depends": [],
        "description": "A massively spiffy yet delicately unobtrusive compression library",
        "git": {
          "auto-lib": "zlib/zlib",
          "ref": "v1.2.5.3",
          "transform": [
            {
              "move": {
                "exclude": [],
                "from": ".",
                "include": [
                  "*.c",
                  "*.h"
                ],
                "strip-components": 0,
                "to": "src/"
              }
            },
            {
              "move": {
                "exclude": [],
                "from": "src/",
                "include": [
                  "zlib.h",
                  "zconf.h"
                ],
                "strip-components": 0,
                "to": "include/"
              }
            }
          ],
          "url": "https://github.com/madler/zlib.git"
        }
      },
      "1.2.6": {
        "depends": [],
        "description": "A massively spiffy yet delicately unobtrusive compression library",
        "git": {
          "auto-lib": "zlib/zlib",
          "ref": "v1.2.6.1",
          "transform": [
            {
              "move": {
                "exclude": [],
                "from": ".",
                "include": [
                  "*.c",
                  "*.h"
                ],
                "strip-components": 0,
                "to": "src/"
              }
            },
            {
              "move": {
                "exclude": [],
                "from": "src/",
                "include": [
                  "zlib.h",
                  "zconf.h"
                ],
                "strip-components": 0,
                "to": "include/"
              }
            }
          ],
          "url": "https://github.com/madler/zlib.git"
        }
      },
      "1.2.7": {
        "depends": [],
        "description": "A massively spiffy yet delicately unobtrusive compression library",
        "git": {
          "auto-lib": "zlib/zlib",
          "ref": "v1.2.7.3",
          "transform": [
            {
              "move": {
                "exclude": [],
                "from": ".",
                "include": [
                  "*.c",
                  "*.h"
                ],
                "strip-components": 0,
                "to": "src/"
              }
            },
            {
              "move": {
                "exclude": [],
                "from": "src/",
                "include": [
                  "zlib.h",
                  "zconf.h"
                ],
                "strip-components": 0,
                "to": "include/"
              }
            }
          ],
          "url": "https://github.com/madler/zlib.git"
        }
      },
      "1.2.8": {
        "depends": [],
        "description": "A massively spiffy yet delicately unobtrusive compression library",
        "git": {
          "auto-lib": "zlib/zlib",
          "ref": "v1.2.8",
          "transform": [
            {
              "move": {
                "exclude": [],
                "from": ".",
                "include": [
                  "*.c",
                  "*.h"
                ],
                "strip-components": 0,
                "to": "src/"
              }
            },
            {
              "move": {
                "exclude": [],
                "from": "src/",
                "include": [
                  "zlib.h",
                  "zconf.h"
                ],
                "strip-components": 0,
                "to": "include/"
              }
            }
          ],
          "url": "https://github.com/madler/zlib.git"
        }
      },
      "1.2.9": {
        "depends": [],
        "description": "A massively spiffy yet delicately unobtrusive compression library",
        "git": {
          "auto-lib": "zlib/zlib",
          "ref": "v1.2.9",
          "transform": [
            {
              "move": {
                "exclude": [],
                "from": ".",
                "include": [
                  "*.c",
                  "*.h"
                ],
                "strip-components": 0,
                "to": "src/"
              }
            },
            {
              "move": {
                "exclude": [],
                "from": "src/",
                "include": [
                  "zlib.h",
                  "zconf.h"
                ],
                "strip-components": 0,
                "to": "include/"
              }
            }
          ],
          "url": "https://github.com/madler/zlib.git"
        }
      }
    }
  },
  "version": 1
})json";

const std::vector<dds::package_info>&
dds::init_catalog_packages() noexcept {
    using std::nullopt;
    static auto pkgs = dds::parse_packages_json(INIT_PACKAGES_CONTENT);
    return pkgs;
}
