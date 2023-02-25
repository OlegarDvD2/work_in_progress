#include "iostream"
#include "circle.h"

using namespace std;

int main() 
{
    setlocale(LC_ALL, "Russian");
    float r, x, y;
    cout << "r, x, y   Первого Круга: ";
    cin >> r >> x >> y;
    Circle circle1(r, x, y);
    cout << "r, x, y   Второго Круга: ";
    cin >> r >> x >> y;
    Circle circle2(r, x, y);
    cout << "r, x, y   Третьего Круга: ";
    cin >> r >> x >> y;
    cout << endl;
    Circle circle3(r, x, y);

    cout << "Круг #1:" << endl;
    cout << "Радиус: " << circle1.radius << endl;
    cout << "{X;Y} " << circle1.x_center << ";" << circle1.y_center << endl;
    cout << "Площадь тругольника: " << circle1.S() << " * Pi" << endl;
    if (circle1.triangle_around(3, 4, 5) == 1)
    {
        cout << "Можно ли описать тругольник: Yes" << endl;
    }
    else
    {
        cout << "Можно ли описать тругольник: No" << endl;
    }
    if (circle1.triangle_in(3, 4, 5) == 1)
    {
        cout << "Можно ли вписать тругольник: Yes" << endl;
    }
    else
    {
        cout << "Можно ли вписать тругольник: No" << endl;
    }
    if (circle1.check_circle(5, 10, 15) == 1)
    {
        cout << "Пересикаются ли окружности:  Yes" << endl;
    }
    else
    {
        cout << "Пересикаются ли окружности:  No" << endl;
    }

    cout << endl << "Круг #2:" << endl;
    cout << "Радиус: " << circle2.radius << endl;
    cout << "{X;Y} " << circle2.x_center << ";" << circle2.y_center << endl;
    cout << "Площадь тругольника: " << circle2.S() << " * Pi" << endl;
    if (circle2.triangle_around(3, 4, 5) == 1)
    {
        cout << "Можно ли описать тругольник: Yes" << endl;
    }
    else
    {
        cout << "Можно ли описать тругольник: No" << endl;
    }
    if (circle2.triangle_in(3, 4, 5) == 1)
    {
        cout << "Можно ли вписать тругольник: Yes" << endl;
    }
    else
    {
        cout << "Можно ли вписать тругольник: No" << endl;
    }
    if (circle2.check_circle(5, 10, 15) == 1)
    {
        cout << "Пересикаются ли окружности:  Yes" << endl;
    }
    else
    {
        cout << "Пересикаются ли окружности:  No" << endl;
    }

    cout << endl << "Круг #3:" << endl;
    cout << "Радиус: " << circle3.radius << endl;
    cout << "{X;Y} " << circle3.x_center << ";" << circle3.y_center << endl;
    cout << "Площадь тругольника: " << circle3.S() << " * Pi" << endl;
    if (circle3.triangle_around(3, 4, 5) == 1)
    {
        cout << "Можно ли описать тругольник: Yes" << endl;
    }
    else
    {
        cout << "Можно ли описать тругольник: No" << endl;
    }
    if (circle3.triangle_in(3, 4, 5) == 1)
    {
        cout << "Можно ли вписать тругольник: Yes" << endl;
    }
    else
    {
        cout << "Можно ли вписать тругольник: No" << endl;
    }
    if (circle3.check_circle(5, 10, 15) == 1)
    {
        cout << "Пересикаются ли окружности:  Yes" << endl;
    }
    else
    {
        cout << "Пересикаются ли окружности:  No" << endl;
    }

    return 0;
}
