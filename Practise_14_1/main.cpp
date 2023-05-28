#include <iostream>
#include "division.h"

int main()
{
    float numerator, denominator, result;
    numerator = 12.5;
    denominator = 0;

    try
    {
        result = Division::Divide(numerator, denominator);
        std::cout << "quotient = " << result << std::endl;
    }
    catch (std::runtime_error& e)
    {
        std::cout << "exception: " << e.what();
    }

    return 0;
}