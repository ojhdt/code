#include <bits/stdc++.h>
using namespace std;
int X[4] = {0, -1, 1, 0};
int Y[4] = {-1, 0, 0, 1};
int P[4] = {'D', 'L', 'R', 'U'};
int mp[6][4];
stack<char> path;
int num = 0;
int layer = 0;

void dfs(int x, int y)
{
    if (x == 6 && y == 4)
    {
        num++;
    }
    for (int i = 0; i < 4; i++)
    {
        cout << layer << endl;
        x += X[i];
        y += Y[i];
        // cout << x << "," << y << endl;
        path.push(P[i]);
        layer++;
        if (x != -1 && x != 7 && y != -1 && y != 7 && mp[x][y] == 0)
        {
            mp[x][y] = 1;
            dfs(x, y);
            mp[x][y] = 0;
        }
        x -= X[i];
        y -= Y[i];
        path.pop();
        layer--;
    }
}

int main()
{
    for (int i = 0; i < 6; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cin >> mp[i][j];
        }
    }

    mp[0][0] = 1;
    dfs(0, 0);
    cout << num << endl;
}