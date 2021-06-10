#include <iostream>
using namespace std;

void assign(int *&p1, int *&p2, int *p3) //assign中p1与main中p1完全相等
{
    int a = 1, b = 5;
    // cout << "a" << &a << endl;
    p1 = &a;//修改了引用的地址，而非引用指向值的地址
    cout << *p1 << endl;
    p2 = new int[1];
    *p2 = b; //p2为引用的指针,*p2或p2[0]为引用
    p3 = new int[1];
    p3[0] = 3;
}

int main()
{
    int *p1, *p2, *p3 = NULL;
    assign(p1, p2, p3);
    if (p1 != NULL)
        cout << "p1 :" << *p1 << endl; //p1是个野指针
    else
        cout << "p1指针为空" << endl;
    if (p2 != NULL)
        cout << "p2 :" << p2[0] << endl; //使用了指针的引用，p2非空，
    else
        cout << "p2指针为空" << endl;
    if (p3 != NULL)
        cout << "p3 :" << p3[0] << endl; //p3还是空指针
    else
        cout << "p3指针为空" << endl;
}