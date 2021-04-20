#include <bits/stdc++.h>
using namespace std;

bool prime(int m)
{
    if (m == 2)
    {
        return true;
    }
    else
    {
        bool isPrime = true;
        for (int i = 2; i < m; i++)
        {
            if (m % i == 0)
            {
                isPrime = false;
                return false;
                break;
            }
        }
        if (isPrime)
        {
            return true;
        }
    }
}

void gotbaba(int o)
{
    for (int i = 2; i < o; i++)
    {
        if (prime(i) && prime(o - i))
        {
            cout << o << '=' << i << '+' << o - i << endl;
            break;
        }
    }
}

int main()
{
    int n;
    cin >> n;
    if (n >= 6 && n % 2 == 0)
    {
        gotbaba(n);
    }
    return 0;
}
