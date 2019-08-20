cmake_minimum_required(VERSION 3.13.4)
project(static_inline)

add_library(interface SHARED interface.cpp interface.h)

target_compile_definitions(interface PRIVATE BUILD_DLL)

if(MSVC)
    target_compile_options(interface PUBLIC /std:c++17)
else()
    target_compile_options(interface PUBLIC --std=c++17)
endif()


add_executable(main main.cpp)
target_link_libraries(main interface)