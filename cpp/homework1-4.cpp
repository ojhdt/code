#include <bits/stdc++.h>
using namespace std;
int gcd(int a, int b);
int lcm(int a, int b);
int main()
{
    int a, b;
    cin >> a;
    cin >> b;
    cout << gcd(a, b) << endl;
    cout << lcm(a, b) << endl;
}

int gcd(int a, int b)
{
    int temp = a;
    a > b ? a : b;
    b < temp ? b : temp;
    if (a % b == 0)
    {
        return b;
    }
    else
    {
        return gcd(b, a % b);
    }
}

int lcm(int a, int b){
    return a * b / gcd(a, b);
}