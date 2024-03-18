/*
 * Copyright (C) 2022 Nikolas Koesling <nikolas@koesling.info>.
 * This program is free software. You can redistribute it and/or modify it under the terms of the MIT License.
 */

#include "template.hpp"
#include "CMAKE_Template_Lib_version_info.hpp"

#include <iostream>

int lib_main() {
    std::cout << "Hello from CMake Lib!!!\n";

    std::cout << "PROJECT_VERSION: " << PROJECT_VERSION << '\n';
    std::cout << "PROJECT_VERSION_MAJOR: " << PROJECT_VERSION_MAJOR << '\n';
    std::cout << "PROJECT_VERSION_MINOR: " << PROJECT_VERSION_MINOR << '\n';
    std::cout << "PROJECT_VERSION_PATCH: " << PROJECT_VERSION_PATCH << '\n';
    std::cout << "PROJECT_NAME: " << PROJECT_NAME << '\n';
    std::cout << "COMPILER_INFO: " << COMPILER_INFO << '\n';
    std::cout << "SYSTEM_INFO: " << SYSTEM_INFO << '\n';
    std::cout << "CPU_WORD_BYTES: " << CPU_WORD_BYTES << '\n';
    std::cout << CMAKE_Template_Lib_version_info::NAME << ' ' << CMAKE_Template_Lib_version_info::VERSION_STR << ' '
              << "Hello CMake!!!\n";
    std::cout << "git commit: " << CMAKE_Template_Lib_version_info::GIT_HASH << '\n';

    return 0;
}
