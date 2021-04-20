#include <bits/stdc++.h>
using namespace std;
struct node;
queue<node> q;
struct node
{
    node() {}
    node(string ss, int tt)
    {
        s = ss;
        t = tt;
    }
    // node(node &b)
    // {
    //     b.s = s;
    //     b.t = t;
    // }
    string s;
    int t;
};
map<string, bool> mp;

void solve()
{
    while (!q.empty())
    {
        node now = q.front();
        cout << now.s << "," << now.t << "," << mp[now.s] << endl;
        q.pop();
        if (now.s == "876543210")
        {
            cout << now.t << endl;
            return;
        }
        int i;
        for (i = 0; i < 9; i++)
        {
            if (now.s[i] == '0')
            {
                break;
            }
        }
        for (int j = i - 2; j <= i + 2; j++)
        {
            int k = (j + 9) % 9;
            node newn = now;
            char temp;
            temp = newn.s[i];
            newn.s[i] = newn.s[k];
            newn.s[k] = temp;
            newn.t++;
            if (mp[newn.s])
            {
                cout << newn.s << "查过了" << endl;
            }
            else if (!mp[newn.s])
            {
                cout << newn.s << "没查过" << endl;
            }
            if (!mp[newn.s])
            {
                cout << newn.s << "压入" << endl;
                q.push(newn);
                mp[newn.s] = true;
            }
        }
    }
};

int main()
{
    node begin("123456780", 0);
    q.push(begin);
    mp[begin.s] = true;
    solve();
    return 0;
}
