#include <bits/stdc++.h>
using namespace std;

class Complex
{
public:
    void setNum(float ireal, float iimaginary);
    void show();
    void operator+(Complex c2);
    void add(Complex c2);
    int isEqual(Complex c2);

private:
    float real;
    float imaginary;
};

void Complex::setNum(float ireal, float iimaginary)
{
    real = ireal;
    imaginary = iimaginary;
};

void Complex::show()
{
    cout << real << "+" << imaginary << "i" << endl;
}

void Complex::add(Complex c2)
{
    real += c2.real;
    imaginary += c2.imaginary;
}

int Complex::isEqual(Complex c2)
{
    if (real == c2.real && imaginary == c2.imaginary)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

void Complex::operator+(Complex c2)
{
    real += c2.real;
    imaginary += c2.imaginary;
}

int main(){
    Complex a, b, c;
    a.setNum(10,8);
    b.setNum(10,8);
    c.setNum(11,8);
    a.show();
    b.show();
    cout << a.isEqual(b) << endl;
    cout << a.isEqual(c) << endl;
    a + b;
    Complex d = a;
    d.show();
    return 0;
}