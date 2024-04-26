#include "grad.h"
#include <iostream>
#include <cstdlib>
#include <ctime>

double PI = 3.141592;

grad::grad(int val)
{
    gr = val;
    grMin = rand() % 60;
    grSec = rand() % 60;
}

grad::grad(int gr, int grMin, int grSec) : gr(gr), grMin(grMin), grSec(grSec)
{
}

grad::grad(radian rad)
{
    gr = rad * 180 / PI;
    grMin = (rad * 180 / PI - gr) * 60;
    grSec = ((rad * 180 / PI - gr) * 60 - grMin) * 60;
}

grad::operator class radian() const
{
    return (gr + (grMin + grSec / 60.0) / 60.0) * PI / 180.0;
}

grad::operator double() const
{
    return (gr + (grMin + grSec / 60.0) / 60.0);
}

double grad::toDegrees() const
{
    return gr + grMin / 60.0 + grSec / 3600.0;
}

void grad::printGrad() const
{
    std::cout << "Grad gr=" << this->gr << "\t min=" << this->grMin << "\t sec=" << this->grSec << std::endl;
}