#include <bits/stdc++.h>
using namespace std;

class Complex
{
public:
    Complex(double r = 0.0, double i = 0.0) : real(r), imag(i){};
    double getR()
    {
        return real;
    }
    double getI()
    {
        return imag;
    }
    friend Complex operator+(Complex &a, Complex &b);
    friend Complex operator-(Complex &a, Complex &b);

private:
    double real;
    double imag;
};

Complex operator+(Complex &a, Complex &b)
{
    return Complex(a.getR() + b.getR(), a.getI() + b.getI());
};
Complex operator-(Complex &a, Complex &b)
{
    return Complex(a.getR() - b.getR(), a.getI() - b.getI());
};

int main()
{
    Complex a(7.2,9.4);
    Complex b(3.4,5.8);
    cout << (a+b).getR() << endl;
    return 0;
};