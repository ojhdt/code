#include <bits/stdc++.h>
using namespace std;
//在前i个物品里选，总重量不超过j的所有选法中，价值最大的选法的价值
int w[1000];
int v[1000];
int mem[1000][1000];
int times, N, C;

int solve(int i, int j)
{
    cout << "solve" << i << "," << j << endl;
    // cout << i << "," << j << endl;
    if (mem[i][j] != 0)
    {
        // cout << "mem load" << endl;
        return mem[i][j];
    }
    else
    {
        if(i == 0){
            return 0;
        }
        if (w[i] > j)
        {
            int res = solve(i - 1, j);
            cout << "a:" << res << endl;
            mem[i][j] = res;
            return res;
        }
        else
        {
            int res = max(solve(i - 1, j), solve(i - 1, j - w[i]) + v[i]);
            cout << "b:" << res << endl;
            mem[i][j] = res;
            return res;
        }
    }
}

int main()
{
    cin >> times;
    cin >> N >> C;
    for (int i = 0; i < N; i++)
    {
        cin >> v[i];
    }
    for (int i = 0; i < N; i++)
    {
        cin >> w[i];
    }
    cout << solve(N, C) << endl;
}
