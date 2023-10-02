#include "division.h"
#include <stdexcept>

float Division::Divide(float num, float den)
{
    if (den == 0)
    {
        throw std::runtime_error("Math error: attempted to divide by zero\n");
    }
    return (num / den);
}