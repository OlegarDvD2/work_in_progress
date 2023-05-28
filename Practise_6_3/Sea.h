#include <iostream>
#include <string>
#include "Bay.h"

using namespace std;

class Sea : private Bay
{
private:
	string name;
	float depth;
	float size;

	int bays_count = 0;

	string NamesSea[12] = {
	"Mediterranean ",
	"Caribbean ",
	"South China ",
	"Arabian ",
	"Red ",
	"Black ",
	"Caspian ",
	"Adriatic ",
	"Baltic ",
	"Andaman ",
	"Coral ",
	"Tasman "
	};

public:
	Bay* bays = new Bay[bays_count];

	Sea()
	{
		name = NamesSea[rand() % 12];
		depth = rand() % 8500 + 3500;
		size = (rand() % 100000 + 20000) / 10.0;
	}
	Sea(string N, float D, float S)
	{
		name = N;
		depth = D;
		size = S;
	}

	void addBay();

	void setName(string N);
	void setDepth(float D);
	void setSize(float S);

	friend ostream& operator<<(ostream& stream, const Sea obj);
	friend istream& operator>>(istream& stream, Sea& obj);
};