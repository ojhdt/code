#include <bits/stdc++.h>
using namespace std;

class Complex
{
public:
    Complex();
    Complex(float ireal, float iimaginary);
    Complex(Complex &p);
    void show();
    Complex add(Complex c);
    bool isEqual(Complex c);

private:
    float real, imaginary;
};

Complex::Complex()
{
    real = 0;
    imaginary = 0;
};

Complex::Complex(float ireal, float iimaginary){
    real = ireal;
    imaginary = iimaginary;
};

Complex::Complex(Complex &p){
    real = p.real;
    imaginary = p.imaginary;
};

void Complex::show(){
    cout << real << "+" << imaginary << "i" << endl;
};

Complex Complex::add(Complex c){
    Complex temp;
    temp.real = real + c.real;
    temp.imaginary = imaginary + c.imaginary;
    return temp;
};

bool Complex::isEqual(Complex c){
    if(real == c.real && imaginary == c.imaginary){
        return true;
    } else {
        return false;
    }
};

int main(){
    Complex a(2,3);
    Complex b(2,3);
    a.show();
    cout << a.isEqual(b) << endl;
    a.add(b).show();
    return 0;
};

//思考题 不能通过运行 a+b 不可取