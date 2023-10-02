#include "Sea.h"
#include <Windows.h>

void Sea::addBay()
{
	Bay* subarray = new Bay[bays_count + 1];
	for (int i = 0; i < bays_count; i++)
	{
		subarray[i] = bays[i];
	}
	bays_count++;
	bays = subarray;
}

void Sea::setName(string N)
{
	name = N;
}
void Sea::setDepth(float D)
{
	
	depth = D;
}
void Sea::setSize(float S)
{
	size = S;
}

ostream& operator<<(ostream& stream, Sea obj)
{
	stream << obj.name;
	stream << " depth - " << obj.depth;
	stream << " size - " << obj.size;

	if (obj.bays_count == 0) stream << "\n there is no bays\n";

	for (int i = 0; i < obj.bays_count; i++)
	{
		stream << "\n    " << obj.bays[i];
	}

	return stream;
}
istream& operator>>(istream& stream, Sea& obj)
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	stream >> obj.name >> obj.depth >> obj.size;
	return stream;
}