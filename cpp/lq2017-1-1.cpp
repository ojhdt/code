#include<iostream>
#include<queue>
#include<algorithm>
#include<set>
#include<string.h>
using namespace std;
char a[15][15];
int vis[15][15];
int ans = 0;
void dfs(int i, int j)
{
    if (i < 0 || i>9 || j < 0 || j>9) //迷宫的出口
    {
        ans++;
        return;
    }
    else
    {
        if (vis[i][j])   return; //如果已经搜过，直接返回

        vis[i][j] = 1;   //标记已搜索

        if (a[i][j] == 'L')
            dfs(i, j - 1); 
        if (a[i][j] == 'R') 
            dfs(i, j + 1); 
        if (a[i][j] == 'U') 
            dfs(i - 1, j); 
        if (a[i][j] == 'D') 
            dfs(i + 1, j); 
    }
}
int main()
{
    int i, j;
    for (i = 0; i < 10; i++)
        for (j = 0; j < 10; j++)
            cin >> a[i][j];
            
    for (i = 0; i < 10; i++)
        for (j = 0; j < 10; j++)
        {
            memset(vis, 0, sizeof(vis)); //搜索每一个房间时，初始化搜搜数组
            dfs(i, j);
        }
    cout << ans << endl;
    return 0;
}