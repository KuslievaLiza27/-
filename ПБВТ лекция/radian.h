#pragma once
#include "grad.h"

class radian
{
public:
    radian(double);
    operator class grad() const;
    operator double() const;
private:
    double rad;
};