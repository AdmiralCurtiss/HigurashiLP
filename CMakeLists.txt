﻿cmake_minimum_required (VERSION 3.8)

project ("HigurashiLP")

add_compile_options("$<$<C_COMPILER_ID:MSVC>:/utf-8>")
add_compile_options("$<$<CXX_COMPILER_ID:MSVC>:/utf-8>")

add_executable(HigurashiLP "functions.cpp" "functions.h" "main.cpp")
