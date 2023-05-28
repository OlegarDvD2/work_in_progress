#pragma once
#include "cone.h"
class subcone :
	public cone
{
private:
	const double PI = 3.14;
	double x, y, z;
	double R;
	double H;
	double subH;
public:
	subcone()
	{
		x = 0;
		y = 0;
		z = 0;
		R = 0;
		H = 0;
		subH = 0;
	}
	subcone(double r, double h, double subh)
	{
		x = 0;
		y = 0;
		z = 0;
		R = r;
		H = h;
		subH = subh;
	}
	subcone(double X, double Y, double Z, double r, double h, double subh)
	{
		x = X;
		y = Y;
		z = Z;
		R = r;
		H = h;
		subH = subh;
	}

	void setCoordinate(double X, double Y, double Z);
	void setRadius(double r);
	void setHeight(double h, double subh);
	void getCoordinate(double& X, double& Y, double& Z);

	double getRadius();
	double getHeight(double& H, double& subH);

	double area();
	double volume();

	friend ostream& operator<< (ostream& stream, const subcone& obj);
	friend istream& operator>> (istream& stream, subcone& obj);
};