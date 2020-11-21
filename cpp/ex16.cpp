/*
定义：priority_queue<Type, Container, Functional>
Type 就是数据类型，Container 就是容器类型（Container必须是用数组实现的容器，比如vector,deque等等，
但不能用 list。STL里面默认用的是vector），
Functional 就是比较的方式，当需要用自定义的数据类型时才需要传入这三个参数，使用基本数据类型时，只需要传入数据类型，默认是大顶堆（降序序列）
*/

#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    //升序队列（小顶堆）
    priority_queue <int,vector<int>,greater<int> > a;
    //降序队列（大顶堆、默认）
    priority_queue <int,vector<int>,less<int> > c;
    
    for (int i = 0; i < 5; i++) 
    {
        a.push(i);
        c.push(i);
    }//向序列添加数据
    while (!a.empty()) //一直循环直到序列为空
    {
        cout << a.top() << ' ';
        a.pop();//每输出一个踢掉一个
    } 
    cout << endl;

    while (!c.empty()) 
    {
        cout << c.top() << ' ';
        c.pop();
    }
    cout << endl;;


}