#include <bits/stdc++.h>
using namespace std;
int isVisited[15][15];
char m[15][15];
int ans = 0;
void check(int i, int j)
{
    if (i < 0 || i > 9 || j < 0 || j > 9)
    {
        ans++;
        return;
    }
    else
    {
        if(isVisited[i][j]){
            cout << "return" << endl;
            return;
        }
        isVisited[i][j] = 1;
        if (m[i][j] == 'L')
        {
            check(i, j - 1);
        }
        if (m[i][j] == 'R')
        {
            check(i, j + 1);
        }
        if (m[i][j] == 'U')
        {
            check(i - 1, j);
        }
        if (m[i][j] == 'D')
        {
            check(i + 1, j);
        }
    }
}

int main()
{
    int i,j;
    for (i = 0; i < 10; i++)
    {
        for (j = 0; j < 10; j++)
        {
            cin >> m[i][j];
        }
    }
    for(i = 0; i < 10; i++){
        for(j = 0; j < 10; j++){
            memset(isVisited, 0, sizeof(isVisited));
            check(i, j);
        }
    }
    cout << ans << endl;
    return 0;
}
