#include <bits/stdc++.h>

using namespace std;

int main()
{
    vector<int> a;//数组

    cout << a.size() << endl;

    a.push_back(7);//在数组末尾添加
    a.pop_back();//从数组末尾删除
    a.clear();//清空全部，内存占用不变

    return 0;
}