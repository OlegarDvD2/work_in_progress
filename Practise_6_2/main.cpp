#include <iostream>
#include "subcone.h"

using namespace std;

int main()
{
	int size;
	cout << "kolvo: "; cin >> size; cout << endl;

	subcone* C = new subcone[size];

	cout << "Fructusm_Example:{x y z R H subH}\n";

	for (int i = 0; i < size; i++)
	{
		cout << "Fructusm number" << i + 1 << ": ";
		cin >> C[i];
	}
	for (int i = 0; i < size; i++)
	{
		cout << "\n";
		cout << "Cone numer" << i + 1 << ": \n";
		cout << C[i] << endl;
		cout << "S = " << C[i].area() << endl;
		cout << "V = " << C[i].volume() << endl;
	}

	return 0;
}