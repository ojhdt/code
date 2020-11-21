#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    vector<int>obj;
    int a, i, j;
    while(cin >> a)
    {
        switch (a)
        {
        case 1:
            if(!obj.empty())
            {
                obj.pop_back();
            }
            break;
        case 2:
            cin >> i;
            obj.push_back(i);
            break;
        case 3:
            cout << obj.size() <<endl;
            break;
        case 4:
            cin >> i;
            cin >> j;
            if(obj.size() >= i)
            {
                obj[i-1] = j;
            }
            break;
        case 5:
            if(obj.empty())
            {
                cout << -1 << endl;
            }
            else
            {
                cout << obj[obj.size()-1] << endl;
            }
            break;
        case 6:
            obj.clear();
            break;
        default:
            break;
        }
    }
    return 0;
}