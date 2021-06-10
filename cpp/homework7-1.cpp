#include <bits/stdc++.h>
using namespace std;

class Base1
{
public:
    // virtual void display() const;
    void display() const;
};

void Base1::display() const
{
    cout << "Base1::display()" << endl;
};
class Base2 : public Base1
{
public:
    void display() const;
};

void Base2::display() const
{
    cout << "Base2::display()" << endl;
};

class Derived : public Base2
{
public:
    void display() const;
};

void Derived::display() const
{
    cout << "Derived::display()" << endl;
};

void fun(Base1 *ptr)
{
    ptr->display();
}

int main()
{
    Base1 base1;
    Base2 base2;
    Derived derived;
    fun(&base1);
    fun(&base2);
    fun(&derived);
    return 0;
}
//用基类类型指针指向派生类对象，当基类中的方法为虚函数时，程序就会优先访问派生类中的同名成员