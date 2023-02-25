#ifndef tip_c
#define tip_c


class Circle 
{
public:
    float radius, x_center, y_center;
    Circle(float r, float x, float y);
    void set_circle(float r, float x, float y);
    float S();
    bool triangle_around(float a, float b, float c);
    bool triangle_in(float a, float b, float c);
    bool check_circle(float r, float x_cntr, float y_cntr);
};


#endif