#include <iostream>
#include <cmath>
#include "figure.h"
using namespace std;


int main() 
{
    setlocale(LC_ALL, "Russian");
    float x1, x2, x3, x4, y1, y2, y3, y4;
    cout << "Первый четырехугольник:" << endl;
    cout << "{x,y} of 1st dot "; cin >> x1 >> y1;
    cout << "{x,y} of 2nd dot "; cin >> x2 >> y2;
    cout << "{x,y} of 3rd dot "; cin >> x3 >> y3;
    cout << "{x,y} of 4th dot "; cin >> x4 >> y4;
    
    figure n1(x1, x2, x3, x4, y1, y2, y3, y4);
    n1.show();
    if (n1.is_square())
    {
        cout << "Квадрат ";
    }
    else if (n1.is_romb())
    {
        cout << "Ромб ";
    }
    else if (n1.is_prug())
    {
        cout << "Прямоугольник ";
    }
    else
    {
        cout << "Четырехугольник";
    }
    if (n1.is_in_circle()) {
        cout << "в который может быть вписана окружность, ";
    }
    else {
        cout << "в который окружность вписана быть не может, ";
    }

    if (n1.is_out_circle()) {
        cout << "вокруг которого может быть описана окружность" << endl;
    }
    else {
        cout << "окружность вокруг которого описана быть не может" << endl;
    }

    cout << "Второй четырехугольник:" << endl;
    cout << "{x,y} of 1st dot "; cin >> x1 >> y1;
    cout << "{x,y} of 2nd dot "; cin >> x2 >> y2;
    cout << "{x,y} of 3rd dot "; cin >> x3 >> y3;
    cout << "{x,y} of 4th dot "; cin >> x4 >> y4;

    figure n2(x1, x2, x3, x4, y1, y2, y3, y4);
    n2.show();
    if (n2.is_square())
    {
        cout << "Квадрат ";
    }
    else if (n2.is_romb())
    {
        cout << "Ромб ";
    }
    else if (n2.is_prug())
    {
        cout << "Прямоугольник ";
    }
    else
    {
        cout << "Четырехугольник";
    }
    if (n2.is_in_circle()) {
        cout << "в который может быть вписана окружность, ";
    }
    else {
        cout << "в который окружность вписана быть не может, ";
    }

    if (n2.is_out_circle()) {
        cout << "вокруг которого может быть описана окружность" << endl;
    }
    else {
        cout << "окружность вокруг которого описана быть не может" << endl;
    }

    cout << "Третий четырехугольник:" << endl;
    cout << "{x,y} of 1st dot "; cin >> x1 >> y1;
    cout << "{x,y} of 2nd dot "; cin >> x2 >> y2;
    cout << "{x,y} of 3rd dot "; cin >> x3 >> y3;
    cout << "{x,y} of 4th dot "; cin >> x4 >> y4;

    figure n3(x1, x2, x3, x4, y1, y2, y3, y4);
    n3.show();
    if (n3.is_square())
    {
        cout << "Квадрат ";
    }
    else if (n3.is_romb())
    {
        cout << "Ромб ";
    }
    else if (n3.is_prug())
    {
        cout << "Прямоугольник ";
    }
    else
    {
        cout << "Четырехугольник";
    }
    if (n3.is_in_circle()) {
        cout << "в который может быть вписана окружность, ";
    }
    else {
        cout << "в который окружность вписана быть не может, ";
    }

    if (n3.is_out_circle()) {
        cout << "вокруг которого может быть описана окружность" << endl;
    }
    else {
        cout << "окружность вокруг которого описана быть не может" << endl;
    }
}