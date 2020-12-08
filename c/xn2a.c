#include <bits/stdc++.h>
using namespace std;

struct Person
{
    string name;
    int id;
    int cnt;
    // 请补全
} p[110];

bool cmp(Person one, Person two)
{
    if (one.cnt != two.cnt)
    {
        return one.cnt > two.cnt;
    }
    else
    {
        // 请补全
    }
}

int main()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> p[i].name >> p[i].id >> p[i].cnt;
    }
    sort(p, p + n, cmp);
    for (int i = 0; i < n; i++)
    {
        // 请补全
    }
}