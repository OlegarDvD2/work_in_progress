#include "set.h"

void Set::add(int value)
{
    data.insert(value);
}

bool Set::contains(int value) const
{
    if (data.empty())
    {
        throw SetException();
    }

    return data.count(value) > 0;
}