#include <bits/stdc++.h>
using namespace std;
priority_queue <int,vector<int>,greater<int> >box;
int main(void)
{
    int i, n, action;
    cin >> n;
    for(i = 0; i < n; i++)
    {
        cin >> action;
        switch (action)
        {
        case 1:
            int num;
            cin >> num;
            box.push(num);
            break;

        case 2:
            if(box.empty())
            {
                break;
            }
            else
            {
                box.pop();
                break;
            }


        case 3:
            if(box.empty())
            {
                cout << "no" << endl;
            }
            else
            {
                cout << box.top() << endl;
            }
            break;
            
        default:
            break;
        }
    }
    return 0;
}