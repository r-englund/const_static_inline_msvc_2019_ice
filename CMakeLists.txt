cmake_minimum_required(VERSION 3.14)
project(static_inline)

add_library(interface SHARED interface.cpp interface.h)

target_compile_definitions(interface PRIVATE BUILD_DLL)

target_compile_options(interface PUBLIC /std:c++17)


add_executable(main main.cpp)
target_link_libraries(main interface)