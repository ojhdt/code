#include <bits/stdc++.h>
using namespace std;

int main()
{
    map<int, int> mp;
    int n;
    cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    for (int i = 0; i < n; i++)
    {
        if (mp.count(arr[i]) == 0)
        {
            mp.insert(pair<int, int>(arr[i], 0));
        }
        else
        {
            mp[arr[i]] += 1;
        }
    }
    cout << mp.size() << endl;
    map<int, int>::const_iterator iteMap = mp.begin();
    for(; iteMap != mp.end(); ++ iteMap)
    {
        cout << iteMap->first << " " << iteMap->second << endl;
    }
    return 0;
}