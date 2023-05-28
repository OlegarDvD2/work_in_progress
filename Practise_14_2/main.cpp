#include <iostream>
#include "array.h"
using namespace std;

int main()
{
    try
    {
        int size = 5;
        Array arr(size);
        arr.setElement(0, 10);
        arr.setElement(1, 20);
        arr.setElement(2, 30);
        arr.setElement(3, 40);
        arr.setElement(4, 50);
        int index1 = -1;
        int index2 = 10;

        cout << "element index " << index1 << ": " << arr.getElement(index1) << endl;
        cout << "element index " << index2 << ": " << arr.getElement(index2) << endl;
    }
    catch (const exception& e)
    {
        cout << "Exception: " << e.what() << endl;
    }

    return 0;
}