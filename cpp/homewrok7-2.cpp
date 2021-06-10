#include <bits/stdc++.h>
using namespace std;

class Base
{
public:
    virtual ~Base()
    {
        cout << "Base destructor" << endl;
    };
};

class Derived : public Base
{
public:
    Derived()
    {
        p = new int(0);
    };
    ~Derived()
    {
        cout << "Derived destructor" << endl;
        delete p;
    };

private:
    int *p;
};

void fun(Base *b)
{
    delete b;
};

int main()
{
    Base *b = new Derived();
    fun(b);
    return 0;
}

//将基类指针指向派生类对象，进行删除对象操作时。基类析构函数定义为虚析构函数后，程序会优先调用派生类的析构函数。