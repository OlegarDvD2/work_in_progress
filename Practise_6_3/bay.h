#include <iostream>
#include <string>

using namespace std;

class Bay
{
private:
	string name;
	float depth;
	float size;

	string NamesBay[12] = {
	"Ha Long Bay ",
	"Bay of Fundy ",
	"San Francisco Bay ",
	"Bay of Kotor ",
	"Bay of Islands ",
	"Hauraki Gulf ",
	"Bay of Bengal ",
	"Tokyo Bay ",
	"Guanabara Bay ",
	"Bay of Plenty ",
	"Bay of Biscay ",
	"Gulf of Naples "
	};

public:
	Bay()
	{
		name = NamesBay[rand() % 12];
		depth = rand() % 8500 + 3500;
		size = (rand() % 10000 + 2000) / 10.0;
	}
	Bay(string N, float D, float S)
	{
		name = N;
		depth = D;
		size = S;
	}

	void setName(string N);
	void setDepth(float D);
	void setSize(float S);

	friend ostream& operator<<(ostream& stream, const Bay obj);
	friend istream& operator>>(istream& stream, Bay& obj);
};