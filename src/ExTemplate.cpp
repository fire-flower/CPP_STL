#include "ExTemplate.h"
#include "stdio.h"
#include <iostream>
#include "ExPoint.h"

template<typename T>
void Print(T a, T b)
{
    std::cout << a << ", " << b << std::endl;
}

template<typename T>
void Print(T a)
{
    std::cout << a << std::endl;
}

template <>
void Print(ExPoint ex)
{
    ex.Print();
}

ExTemplate::ExTemplate() {}
ExTemplate::~ExTemplate() {}

void ExTemplate::test()
{
# if 0
    Print(10, 20);
    Print(0.123, 1.123);
    Print("ABC", "abc");
#elif 1
    int n = 10;
    double d = 2.5;
    ExPoint pt(2,3);
    Print(n);
    Print(d);
    Print(pt);
#endif
}