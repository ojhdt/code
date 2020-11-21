#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    string str;
    int i;
    cin >> str;
    int is_x = 0;
    for(i = 0; i < str.length(); i++)
    {
        if(str[i] != '*') is_x = 1;
        if(is_x == 1 && str[i] == '*')
        {
            str.replace(i, 1, "");
        }
    }
    cout << str << endl;
    return 0;
}