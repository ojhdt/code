#include <bits/stdc++.h>
using namespace std;
int res = 0;

bool check(int a, int b, int c)
{
    if (a + b > c && a + c > b && b + c > a)
        return true;
    else
        return false;
};

int main()
{
    int n, P;
    cin >> n >> P;
    int num[n];
    for (int i = 0; i < n; i++)
    {
        cin >> num[i];
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (check(P, num[i], num[j]))
                res++;
        }
    }
    cout << res << endl;
}