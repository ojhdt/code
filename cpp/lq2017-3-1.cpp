#include <bits/stdc++.h>
using namespace std;
int X[] = {0, -1, 1, 0, 0};
int Y[] = {0, 0, 0, -1, 1};
bool vis[10][10];
int res = 0;
void dfs(int x, int y)
{
    if (x == 0 || y == 0 || x == 6 || y == 6)
    {
        res++;
        return;
    }
    for (int i = 1; i <= 4; i++)
    { //上下左右四个方向
        x += X[i];
        y += Y[i]; //走一步
        if (!vis[x][y])
        {
            // 若该点未访问则继续深搜
            vis[x][y] = true; //  当前的点标注为已访问
            vis[6 - x][6 - y] = true;
            dfs(x, y); // 继续深搜
            vis[6 - x][6 - y] = false;
            vis[x][y] = false;
        }
        x -= X[i];
        y -= Y[i];
    }
}
int main()
{
    vis[3][3] = true;
    dfs(3, 3);
    cout << res / 4 << endl;
    return 0;
}