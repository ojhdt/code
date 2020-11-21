#include<bits/stdc++.h>
using namespace std;
int main(void)
{
    //配合setfill和setw可以快速填充间隔。setfill默认一个空格
    cout<<setfill('*')<<setw(5)<<'a'<<endl;

    /*vector
    1.push_back 在数组的最后添加一个数据
    2.pop_back 去掉数组的最后一个数据
    3.at 得到编号位置的数据
    4.begin 得到数组头的指针
    5.end 得到数组的最后一个单元+1的指针
    6.front 得到数组头的引用     a.front() == *a.begin()
    7.back 得到数组的最后一个单元的引用
    8.max_size 得到vector最大可以是多大
    9.capacity 当前vector分配的大小
    10.size 当前使用数据的大小
    11.resize 改变当前使用数据的大小，如果它比当前使用的大，者填充默认值
    12.reserve 改变当前vecotr所分配空间的大小
    13.erase 删除指针指向的数据项
    14.clear 清空当前的vector
    15.rbegin 将vector反转后的开始指针返回(其实就是原来的end-1)
    16.rend 将vector反转构的结束指针返回(其实就是原来的begin-1)
    17.empty 判断vector是否为空
    18.swap 与另一个vector交换数据*/

    //标准格式  vector<类型>标识符(最大容量,初始所有值)
    vector<int>obj;
 
    obj.push_back(1);
    obj.push_back(3);
    obj.push_back(0);

    //Sort函数有三个参数：（第三个参数可不写）
    //（1）第一个是要排序的数组的起始地址。
    //（2）第二个是结束的地址（最后一位要排序的地址）
    //（3）第三个参数是排序的方法，可以是从大到小也可是从小到大，还可以不写第三个参数，此时默认的排序方法是从小到大排序。
    //从大到小（降序）：sort(begin, end, greater<Type>());  <type>填数据类型，！！！！！与priority_queue相反！！！！
    sort(obj.begin(),obj.end());//从小到大
 
    cout<<"从小到大:"<<endl;
    for(int i=0;i<obj.size();i++)
    {
        cout<<obj[i]<<",";  //直接利用数组访问
    } 
 
    cout<<"\n"<<endl;
 
    cout<<"从大到小:"<<endl;
    //reverse函数用于反转在[first,last)范围内的顺序（包括first指向的元素，不包括last指向的元素）
    //reverse函数没有返回值
    reverse(obj.begin(),obj.end());//从大到小 
    for(int i=0;i<obj.size();i++)
    {
        cout<<obj[i]<<",";
    }
    return 0;
}
