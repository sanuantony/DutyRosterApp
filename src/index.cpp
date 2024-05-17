#include <iostream>
#include "BaseMain.h"
#include "Child.h"

template <typename T>
typename std::enable_if<std::is_base_of<BaseMain, T>::value>::type
swap(T &a, T &b)
{
    auto temp = a;
    a = b;
    b = temp;

    //std::swap(a,b);
}

int main()
{
    Child x;
    Child y;
    x.Name = "Sanu";

    y.Name = "Anupama";

    x.Print();
    y.Print();

    swap(x, y);
    x.Print();
    y.Print();

    return 0;
}