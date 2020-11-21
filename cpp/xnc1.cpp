#include <bits/stdc++.h>

using namespace std;

void add(int &a)//引用，相当于高级指针
{
    a += 1;
    cout << "here:" << a << endl;
}

int main()
{
    int a;
    cin >> a;
    cout << a << endl;
    add(a);
    cout << a << endl;
    return 0;
}