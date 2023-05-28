#include "array.h"
#include <stdexcept>

Array::Array(int size)
{
    if (size <= 0)
    {
        throw std::invalid_argument("size <= 0");
    }

    this->size = size;
    this->data = new int[size];
}

Array::~Array()
{
    delete[] data;
}

int Array::getSize() const
{
    return size;
}

int Array::getElement(int index) const
{
    if (index < 0 || index >= size)
    {
        throw std::out_of_range("out of range");
    }

    return data[index];
}

void Array::setElement(int index, int value)
{
    if (index < 0 || index >= size)
    {
        throw std::out_of_range("out of range");
    }

    data[index] = value;
}