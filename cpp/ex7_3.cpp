#include <bits/stdc++.h>
using namespace std;

class Base1
{
public:
    void display() const
    {
        cout << "B1" << endl;
    }
};

class Base2 : public Base1
{
public:
    void display() const
    {
        cout << "B2" << endl;
    }
};

class Base3 : public Base2
{
public:
    void display() const
    {
        cout << "B3" << endl;
    }
};

void fun(Base1 *ptr){
    ptr -> display();
};

int main(void){
    Base1 base1;
    Base2 base2;
    Base3 base3;
    base1.display();
    base2.display();
    base3.display();
    (&base1)->display();
    fun(&base3);
}