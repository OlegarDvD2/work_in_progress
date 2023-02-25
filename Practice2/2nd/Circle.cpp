#include "circle.h"
#include "cmath"

Circle::Circle(float r, float x, float y) 
{
    radius = r;
    x_center = x;
    y_center = y;
}

void Circle::set_circle(float r, float x, float y) 
{
    radius = r;
    x_center = x;
    y_center = y;
}

float Circle::S() {
    return pow(radius, 2);
}

bool Circle::triangle_around(float a, float b, float c) 
{
    if (a / sin(a) == b / sin(b) == c / sin(c) == 2 * radius)
    {
        return true;
    }
    else {
        return false;
    }
}

bool Circle::triangle_in(float a, float b, float c) 
{
    if (radius==((a*sqrt(3))/3)) 
    {
        return true;
    }
    else 
    {
        return false;
    }
}

bool Circle::check_circle(float r, float x_cntr, float y_cntr) 
{
    if ((r == radius && x_cntr==x_center && y_cntr==y_center) || (r+radius)>(sqrt(pow(x_cntr-x_center,2)+pow(y_cntr-y_center,2))))
    {
        return true;
    }
    else
    {
        return false;
    }
}