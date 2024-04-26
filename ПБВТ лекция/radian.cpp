#include "radian.h"

radian::radian(double angle) : rad(angle)
{
}

radian::operator class grad() const
{
    return grad(*this);
}

radian::operator double() const
{
    return this->rad;
}