#pragma omce
#include<iostream>
#include "BaseMain.h"

class Child : public BaseMain
{
public:
    int xyz{};
    void Print() override;
};