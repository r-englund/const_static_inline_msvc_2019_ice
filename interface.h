#pragma once

#if BUILD_DLL
#define API __declspec(dllexport)
#else
#define API __declspec(dllimport)
#endif

class API Foo{
    public:
    Foo();

    void test() {}

    static inline const int number = 3; // Works
    static inline const auto func = &Foo::test; // Generates ICE

};
