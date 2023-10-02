#ifndef SET_H
#define SET_H

#include <set>
#include "set_exception.h"

class Set
{
private:
    set<int> data;

public:
    void add(int value);
    bool contains(int value) const;
};

#endif