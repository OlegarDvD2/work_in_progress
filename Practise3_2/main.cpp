#include "iostream"
#include "rational.h"

using namespace std;

int main() 
{
    int n;
    cout << "kolvo: ";
    cin >> n;

    auto* fractions = new rational[n];

    for (int i = 0; i < n; i++) 
    {
        int a, b;
        cout << "Enter numerator and denominator" << i + 1 << ": ";
        cin >> a >> b;
        try 
        {
            fractions[i].set(a, b);
        }
        catch (const invalid_argument& e) 
        {
            cerr << "Eexception: " << e.what() << "\n";
            i--;
        }
    }


    cout << "All fractions:" << "\n";
    for (int i = 0; i < n; i++) 
    {
        fractions[i].show();
    }

    cout << "Example operations:" << endl;
    rational f1(1, 2); rational f2(2, 3); rational f3 = f1 + f2;
    cout << "f1 + f2 = ";
    f3.reduce(); f3.show();
    rational f4 = f2 - f1;
    cout << "f2 - f1 = ";
    f4.reduce(); f4.show();
    ++f1;
    cout << "++f1 = ";
    f1.reduce(); f1.show();
    bool equal = f1 == f2;
    cout << "f1 == f2 is " << boolalpha << equal << "\n";
    bool greater = f2 > f1;
    cout << "f2 > f1 is " << boolalpha << greater << "\n";
    f1 = f2;
    cout << "f1 = f2, f1 = ";
    f1.reduce(); f1.show();

    delete[] fractions;

    return 0;
}