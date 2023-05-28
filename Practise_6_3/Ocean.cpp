#include "Ocean.h"
#include <Windows.h>

void Ocean::setName(string N)
{
	name = N;
}
void Ocean::setDepth(float D)
{
	depth = D;
}
void Ocean::setSize(float S)
{
	size = S;
}

ostream& operator<<(ostream& stream, const Ocean obj)
{
	stream << obj.name;
	stream << " depth - " << obj.depth;
	stream << " size - " << obj.size;

	if (obj.seas_count == 0) stream << "\n there is no sea\n ";

	for (int i = 0; i < obj.seas_count; i++)
	{
		stream << "\n  " << obj.seas[i];
	}

	return stream;
}
istream& operator>>(istream& stream, Ocean& obj)
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	stream >> obj.name >> obj.depth >> obj.size;
	return stream;
}