#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    string str;
    char x;
    int num = 0;
    cin >> str;
    cin >> x;
    int i;
    for(i = 0; i < str.length(); i++)
    {
        if(str[i] == x)
        {
            num++;
        }
    }
    cout << num << endl;
    return 0;
}
