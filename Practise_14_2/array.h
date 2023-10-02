#ifndef ARRAY_H
#define ARRAY_H

class Array
{
private:
    int* data;
    int size;

public:
    Array(int size);
    ~Array();

    int getSize() const;
    int getElement(int index) const;
    void setElement(int index, int value);
};

#endif