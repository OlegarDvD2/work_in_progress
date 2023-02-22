#include <iostream>
#include <cmath>

using namespace std;

class Circle {
private:
    float radius;
    float x_center;
    float y_center;

public:
    void set_circle(float r2, float x2, float y2)
    { 
        r = r2;
        x = x2;
        y = y2;
    }
    /*
    float square
    {
        float p = (3.14 * (a * a));
    }
    */
    bool triangle_around(float a, float b, float c)
    {
        if ()
        {
            return true;
        }   
        else return false;
    }
    bool triangle_in(float a, float b, float c)
    {
        if ()
        {
            return true;
        }
        else return false;
    }

};

class Triangle {
private:
    double a, b, c;

public:
    bool exst_tr() {
        return ((a + b > c) && (b + c > a) && (a + c > b));
    }
    void set(double a1, double b1, double c1) {
        a = a1;
        b = b1;
        c = c1;
    }
    void show() {
        cout << "1 сторона: " << a << endl;
        cout << "2 сторона: " << b << endl;
        cout << "3 сторона: " << c << endl;
    }
    double perimetr() {
        double p = a + b + c;
        return p;
    }
    double square() {
        double p = (a + b + c) / 2;
        double s = sqrt(p * (p - a) * (p - b) * (p - c));
        return s;
    }
};

int main()
{
    Triangle mas[3];
    double a, b, c;
    for (int i = 0; i < 3; i++) {
        cout << "Введите a, b и c для треугольника № " << i + 1 << " через пробел: " << endl;
        cin >> a >> b >> c;
        mas[i].set(a, b, c);
        if (!(mas[i].exst_tr())) {
            mas[i].show();
            cout << "Треугольника с такими сторонами не существует, попробуйте ещё раз" << endl;
            i--;
        }
    }
    for (int i = 0; i < 3; i++) {
        mas[i].show();
        cout << "Площадь треугольника: " << mas[i].square() << endl;
    }
    return 0;
 
    Circle mass[1];
    float x, r, y;
    cin >> x >> r >> y;
    for (int i = 0; i < 1; i++) 
    {
        cout << i + 1 << " через пробел: " << endl;
        cin >> x >> r >> y;
        mas[i].set(x, r, y);
    }
    return 0;
}