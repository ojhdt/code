#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    map<string, int> box;
    int n, i, action, a;
    string str;
    cin >> n;
    for(i = 0; i < n; i++)
    {
        cin >> action;
        switch (action)
        {
        case 1:
            cin >> str;
            cin >> a;
            if(box.find(str) == box.end())
            {
                box[str] = a;
            }
            break;
        
        case 2:
            cin >> str;
            if(box.find(str) != box.end())
            {
                box.erase(str);
            }
            break;

        case 3:
            cin >> str;
            if(box.find(str) != box.end())
            {
                cout << box[str] << endl;
            }
            else
            {
                cout << "no" << endl;
            }
            break;

        default:
            break;
        }
    }
    return 0;
}