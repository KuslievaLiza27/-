#pragma once
#include "radian.h"

class grad
{
public:
    grad(int);
    grad(int, int, int);
    grad(class radian rad);
    operator class radian() const;
    operator double() const;
    void printGrad() const;
    double toDegrees() const;
private:
    int grSec;
    int grMin;
    int gr;
};