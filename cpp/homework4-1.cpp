#include <iostream>
using namespace std;

int main()
{
    int *p1, a = 0, b = 2, c = 3;
    p1 = &a;
    int *&p3 = p1;
    cout << "指针中的地址是:" << p1 << "   " << p3 << endl;
    cout << "指针中的地址取出的内容是:" << *p1 << "   " << *p3 << endl;
    cout << "保存该指针的地址是:" << &p1 << "   " << &p3 << endl;
    p3 = &c;
    cout << "指针中的地址是:" << p1 << "   " << p3 << endl;
    cout << "指针中的地址取出的内容是:" << *p1 << "   " << *p3 << endl;
    cout << "保存该指针的地址是:" << &p1 << "   " << &p3 << endl;
}