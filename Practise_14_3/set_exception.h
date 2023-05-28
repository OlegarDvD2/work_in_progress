#ifndef SET_EXCEPTION_H
#define SET_EXCEPTION_H
using namespace std;

#include <stdexcept>

class SetException : public exception
{
public:
    const char* what() const noexcept override;
};

#endif