
#include <iostream>
#include "cone.h"

using namespace std;

int main()
{

	cone c1(3, 7);
	cone c2(1, 2, 3, 5, 10);

	cout << "1stCone S= " << c1.area() << endl << "1stCone V= " << c1.volume() << endl;
	cout << "2ndCone S= " << c2.area() << endl << "2ndCone V= " << c2.volume() << endl << endl;

	int size; double x, y, z, r, h;
	cout << "kolvo = ";
	cin >> size;
	cone* cones = new cone[size];
	cout << endl << "example: {x,y,z,r,h} \n";
	for (int i = 0; i < size; i++)
	{
		cout << "Cone number " << i + 1 << " : ";
		cin >> x >> y >> z >> r >> h;
		cones[i].setCoordinate(x, y, z);
		cones[i].setRadius(r);
		cones[i].setHeight(h);
	}

	cout << "\n";
	for (int i = 0; i < size; i++)
	{
		cout << "Cone number " << i + 1 << " : \n";
		cout << cones[i] << "\n";
		cout << "	S = " << cones[i].area() << endl;
		cout << "	V = " << cones[i].volume() << endl;
	}

	cone cones2[5];
	cones2[0].setCoordinate(0, 0, 0); cones2[0].setRadius(18); cones2[0].setHeight(20);
	cones2[1].setCoordinate(0, 0, 1); cones2[1].setRadius(2); cones2[1].setHeight(5);
	cones2[2].setCoordinate(0, 1, 0); cones2[2].setRadius(0.0059); cones2[2].setHeight(10);
	cones2[3].setCoordinate(0, 1, 1); cones2[3].setRadius(1000); cones2[3].setHeight(150);
	cones2[4].setCoordinate(1, 0, 0); cones2[4].setRadius(2.71); cones2[4].setHeight(3.14);

	cout << endl << "array: " << endl;
	for (int i = 0; i < 5; i++)
	{
		cout << "Cone number " << i + 1 << " : \n";
		cout << cones[i] << endl;
		cout << "	S = " << cones2[i].area() << endl;
		cout << "	V = " << cones2[i].volume() << endl;
	}

	return 0;
}
