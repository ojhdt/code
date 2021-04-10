#include <bits/stdc++.h>
using namespace std;
int division(int a, int b);
double division(double a, double b);
int main()
{
    int m, n;
    double x, y;
    cin >> m >> n;
    cout << division(m, n) << endl;
    cin >> x >> y;
    cout << division(x, y) << endl;
    return 0;
}

int division(int a, int b)
{
    return a / b;
}

double division(double a, double b)
{
    return a / b;
}