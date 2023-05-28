#include <iostream>
#include <ctime>
#include "Ocean.h"

using namespace std;

int main()
{
	srand(time(NULL));

	Ocean f1, f2, f3, f4;
	f1.addSea();
	f1.addSea();
	f1.seas[0].addBay();
	f1.seas[0].addBay();
	f1.seas[1].addBay();
	f1.seas[1].addBay();
	f1.seas[1].addBay();
	f3.addSea();

	cout << f1 << endl;
	cout << f2 << endl;
	cout << f3 << endl;

	f4.addSea();
	f4.seas[0].addBay();

	cout << "\n|Ocean| Name, depth, size:";
	cin >> f4;
	cout << "|Sea| Name, depth, size:";
	cin >> f4.seas[0];
	cout << "|Bay| Name, depth, size:";
	cin >> f4.seas[0].bays[0];

	cout << endl;

	cout << f4;

	cout << endl;

	return 0;
}