#include <iostream>
#include <string>
#include "Sea.h"

using namespace std;

class Ocean : private Sea
{
private:
	string name;
	float depth;
	float size;

	string NamesOcean[5] = {
"Atlantic ",
"Pacific ",
"Indian ",
"Arctic ",
"Antarctic "
	};

public:
	int seas_count = 0;
	Sea* seas = new Sea[seas_count];

	void addSea()
	{
		Sea* subarray = new Sea[seas_count + 1];
		for (int i = 0; i < seas_count; i++)
		{
			subarray[i] = seas[i];
		}
		seas_count++;
		seas = subarray;
	}

	Ocean()
	{
		name = NamesOcean[rand() % 5];
		depth = rand() % 8500 + 3500;
		size = (rand() % 1000000 + 200000) / 10.0;
	}
	Ocean(string N, float D, float S)
	{
		name = N;
		depth = D;
		size = S;
	}

	void setName(string N);
	void setDepth(float D);
	void setSize(float S);

	friend ostream& operator<<(ostream& stream, const Ocean obj);
	friend istream& operator>>(istream& stream, Ocean& obj);
};