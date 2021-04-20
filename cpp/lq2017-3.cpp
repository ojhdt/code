#include <bits/stdc++.h>
using namespace std;

int num = 0;
bool isChecked[6][6] = {0};

void dfs(int i, int j)
{
    if (i == 0 || i == 6 || j == 0 || j == 6)
    {
        num++;
        return;
    }
    else
    {
        // int X[4] = {1,-1,0,0};
        // int Y[4] = {0,0,1,-1};
        // for(int k = 0; k < 4; k++){
        //     if(isChecked[i+X[k]][j+Y[k]] == 0){
        //         isChecked[i+X[k]][j+Y[k]] = 1;
        //         isChecked[6-i-X[k]][6-j-Y[k]] = 1;
        //         dfs(i+X[k], j+Y[k]);
        //         isChecked[i+X[k]][j+Y[k]] = 0;//垃圾扫掉
        //         isChecked[6-i-X[k]][6-j-Y[k]] = 0;
        //     }
        // }

        if (isChecked[i][j + 1] == 0)
        {
            isChecked[i][j + 1] = 1;
            isChecked[6 - i][5 - j] = 1;
            // cout << "ban" << 6 - 1 << "," << 5 - j << endl;
            dfs(i, j + 1);
            isChecked[i][j + 1] = 0;
            isChecked[6 - i][5 - j] = 0;
        }
        if (isChecked[i][j - 1] == 0)
        {
            isChecked[i][j - 1] = 1;
            isChecked[6 - i][7 - j] = 1;
            dfs(i, j - 1);
            isChecked[i][j - 1] = 0;
            isChecked[6 - i][7 - j] = 0;
        }
        if (isChecked[i + 1][j] == 0)
        {
            isChecked[i + 1][j] = 1;
            isChecked[5 - i][6 - j] = 1;
            dfs(i + 1, j);
            isChecked[i + 1][j] = 0;
            isChecked[5 - i][6 - j] = 0;
        }
        if (isChecked[i - 1][j] == 0)
        {
            isChecked[i - 1][j] = 1;
            isChecked[7 - i][6 - j] = 1;
            dfs(i - 1, j);
             isChecked[i - 1][j] = 0;
            isChecked[7 - i][6 - j] = 0;
        }
    }
}

int main()
{
    isChecked[3][3] = 1;
    dfs(3, 3);
    cout << num << endl;
    return 0;
}