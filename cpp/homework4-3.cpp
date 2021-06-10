#include <bits/stdc++.h>
using namespace std;

int main()
{
    int num = 1;
    int row, column;
    cin >> row >> column;
    int arr[row][column];
    for(int i = 0; i < column; i++){
        for(int j = 0; j < row; j++){
            arr[j][i] = num;
            num++;
        }
    }
    for (int i = row - 1; i >= 0; i--)
    {
        int j = i, k = 0;
        while (j <= row - 1 && k <= column - 1)
        {
            cout << arr[j][k];
            j++;
            k++;
        }
        cout << endl;
    }
    for (int i = 1; i <= column - 1; i++)
    {
        int j = i, k = 0;
        while (j <= column- 1 && k <= row - 1)
        {
            cout << arr[k][j];
            j++;
            k++;
        }
        cout << endl;
    }
    return 0;
}