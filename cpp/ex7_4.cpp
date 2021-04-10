#include <bits/stdc++.h>
using namespace std;
class Base1
{
public:
    Base1(int i) { cout << i << endl; }
};
class Base2
{
public:
    Base2(int j) { cout << j << endl; }
};

class Son: public Base1, public Base2{
    public:
    Son(int i, int j):Base1(i),Base2(j){};
};

Son::Son(int i, int j):Base1(i),Base2(j){};