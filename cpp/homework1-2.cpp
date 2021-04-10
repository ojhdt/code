#include <bits/stdc++.h>
using namespace std;
int fab(int x, int counter);
void fab();
int main()
{
    //递归
    for (int i = 0;; i++)
    {
        int counter = 1;
        if (fab(i, counter) == 10)
        {
            cout << "result=" << i << endl;
            break;
        };
    }
    //非递归
    fab();
    return 0;
}

int fab(int x, int counter)
{
    counter++;
    cout << counter << endl;
    if (x % 2 == 1)
    {
        return 0;
    }
    else
    {
        x = (x / 2) - 1;
        if (x > 0)
        {
            cout << "x=" << x << endl;
            return fab(x, counter);
        }
        else if (x == 0)
        {
            return counter;
            cout << "break" << endl;
        }
        else
        {
            return 0;
        }
    }
}

void fab(){
    int num = 0;
    for(int i = 0; i < 10; i++){
        num = (num+1)*2;
    }
    cout << "result=" << num << endl;
}