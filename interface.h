#pragma once

#if BUILD_DLL
    #ifdef _WIN32
        #define API __declspec(dllexport)
    #else
        #define API __attribute__((visibility("default")))
    #endif
#else
    #ifdef _WIN32
        #define API __declspec(dllimport)
    #else 
        #define API
    #endif
#endif

struct API Foo {
    
    Foo();
    void test();

    static inline const int number = 3; // Works
    static inline const auto func = &Foo::test; // Generates ICE

};
