#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    int i;
    string input;
    cin >> input;
    for(i = 0; i < input.length(); i++)
    {
        input[i] = toupper(input[i]);
    }
    cout << input << endl;
}