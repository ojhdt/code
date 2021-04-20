#include <bits/stdc++.h>
using namespace std;

void encode(char c)
{
    if (c >= 65 && c <= 86)
    {
        cout << static_cast<char>(c + 4);
    }
    else if (c >= 87 && c <= 90)
    {
        cout << static_cast<char>(c - 22);
    }
    else if (c >= 97 && c <= 118)
    {
        cout << static_cast<char>(c + 4);
    }
    else if (c >= 119 && c <= 122)
    {
        cout << static_cast<char>(c - 22);
    }
    else
    {
        cout << c;
    }
}

int main()
{
    string str;
    cin >> str;
    for(int i = 0; i < str.length(); i++){
        encode(str[i]);
    }
    return 0;
}