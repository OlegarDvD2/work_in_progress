#include <iostream>
#include "set.h"
using namespace std;

int main()
{
    Set set;
    int value = 10;

    try
    {
        bool containsValue = set.contains(value);
        cout << "Contains value " << value << ": " << containsValue << endl;
    }
    catch (const SetException& e)
    {
        cout << "Exception: " << e.what() << endl;
    }

    return 0;
}