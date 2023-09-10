#include "ExPoint.h"
#include <iostream>

ExPoint::ExPoint(int _x, int _y) : x(_x), y(_y) {}

ExPoint::~ExPoint() {}

void ExPoint::Print() const
{
    std::cout << x << ", " << y << std::endl;
}
