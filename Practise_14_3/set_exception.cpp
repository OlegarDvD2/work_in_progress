#include "set_exception.h"

const char* SetException::what() const noexcept
{
    return "just happned";
}