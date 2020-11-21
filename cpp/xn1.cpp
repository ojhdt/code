#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    int n, i, j;
    cin >> n;
    for(i = 0; i < n; i++)
    {
        string str;
        cin >> str;
        cout << str << endl;
        if(str == (string)"lr580orz" || str == (string)"dayuanxorz")
        {
            cout << "YE5" << endl;
        }
        else
        {
            cout << "N0" << endl;
        }
        cout << str.length() << endl;
        string str2 = str;
        reverse(str2.begin(), str2.end());
        if(str == str2)
        {
            cout << "YE5" << endl;
        }
        else
        {
            cout << "N0" << endl;
        }
        int a = 0;
        for(j = 0; j < str.length(); j++)
        {
            if(str[j] == 'a') a++;
        }
        cout << a << endl;
    }
    return 0;
}