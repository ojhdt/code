#include <bits/stdc++.h>
#include "student.h"
using namespace std;

int main()
{
    student a;
    student b(50, 1);
    a.show();
    b.show();
    if (compare(a, b))
    {
        cout << "a is heavier than b." << endl;
    }
    else
    {
        cout << "b is heavier than a." << endl;
    }
    return 0;
}