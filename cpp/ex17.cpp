/*
pair：强制两元素的数组

类模板：template<class T1,class T2> struct pair
参数：T1是第一个值的数据类型，T2是第二个值的数据类型。
功能：pair将一对值(T1和T2)组合成一个值，

eg：
pair<int, double> p1;
pair<string, int> name_age("Tom", 18);
pair<int, double> p3(1, 1.2);
p1 = p3;

读取：p1.first  p1.second
*/

#include <bits/stdc++.h>
#include <utility>
using namespace std;
int main(void)
{
    priority_queue<pair<int, int> > a;
    //pair的比较，先比较第一个元素，第一个相等比较第二个
    pair<int, int> b(1, 2);
    pair<int, int> c(1, 3);
    pair<int, int> d(2, 5);
    a.push(d);
    a.push(c);
    a.push(b);
    while (!a.empty()) 
    {
        cout << a.top().first << ' ' << a.top().second << '\n';
        a.pop();
    }

    return 0;
}