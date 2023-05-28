#include "Bay.h"
#include <Windows.h>

void Bay::setName(string N)
{
	name = N;
}
void Bay::setDepth(float D)
{
	depth = D;
}
void Bay::setSize(float S)
{
	size = S;
}

ostream& operator<<(ostream& out, Bay obj)
{
	out << obj.name;
	out << " depth - " << obj.depth;
	out << " size - " << obj.size;

	return out;
}
istream& operator>>(istream& stream, Bay& obj)
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	stream >> obj.name >> obj.depth >> obj.size;
	return stream;
}