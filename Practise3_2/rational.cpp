#include "rational.h"
#include "iostream"
#include "stdexcept"

using namespace std;

int gcd(int a, int b) 
{
    while (b != 0) 
    {
        int r = a % b;
        a = b;
        b = r;
    }
    return a;
}

rational::rational(int a1, int b1) 
{
    if (b1 == 0) 
    {
        throw invalid_argument("NO ZERO");
    }
    numerator = a1;
    denominator = b1;
    reduce();
}

void rational::set(int a1, int b1) 
{
    if (b1 == 0) 
    {
        throw invalid_argument("NO ZERO");
    }
    numerator = a1;
    denominator = b1;
    reduce();
}

void rational::show() const 
{
    cout << numerator << "/" << denominator << endl;
}

rational rational::operator+(const rational& other) const 
{
    int new_denominator = denominator * other.denominator;
    int new_numerator = numerator * other.denominator + other.numerator * denominator;
    return rational(new_numerator, new_denominator);
}

rational operator-(const rational& f1, const rational& f2) 
{
    int new_denominator = f1.denominator * f2.denominator;
    int new_numerator = f1.numerator * f2.denominator - f2.numerator * f1.denominator;
    return rational(new_numerator, new_denominator);
}

void rational::operator++() 
{
    numerator += denominator;
    reduce();
}

bool rational::operator==(const rational& other) const 
{
    return numerator == other.numerator && denominator == other.denominator;
}

bool rational::operator>(const rational& other) const 
{
    int common_denominator = denominator * other.denominator;
    int numerator1 = numerator * other.denominator;
    int numerator2 = other.numerator * denominator;
    return numerator1 > numerator2;
}

rational& rational::operator=(const rational& other) 
{
    numerator = other.numerator;
    denominator = other.denominator;
    return *this;
}

void rational::reduce() 
{
    int gcd_ab = gcd(abs(numerator), abs(denominator));
    numerator /= gcd_ab;
    denominator /= gcd_ab;
}