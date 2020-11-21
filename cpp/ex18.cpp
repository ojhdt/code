/*
map的功能
自动建立key － value的对应。key 和 value可以是任意你需要的类型，包括自定义类型。

map的使用
#include <map>  //注意，STL头文件没有扩展名.h
map对象是模板类，需要关键字和存储对象两个模板参数：
std:map<int, string> personnel;

map的基本操作函数：
     begin()         返回指向map头部的迭代器
     clear()        删除所有元素
     count()         返回指定元素出现的次数
     empty()         如果map为空则返回true
     end()           返回指向map末尾的迭代器
     equal_range()   返回特殊条目的迭代器对
     erase()         删除一个元素
     find()          查找一个元素
     get_allocator() 返回map的配置器
     insert()        插入元素
     key_comp()      返回比较元素key的函数
     lower_bound()   返回键值>=给定元素的第一个位置
     max_size()      返回可以容纳的最大元素个数
     rbegin()        返回一个指向map尾部的逆向迭代器
     rend()          返回一个指向map头部的逆向迭代器
     size()          返回map中元素的个数
     swap()          交换两个map,Map 中的 swap 不是一个容器中的元素交换，而是两个容器交换；
     upper_bound()   返回键值>给定元素的第一个位置
     value_comp()    返回比较元素value的函数

     Map 中的元素是自动按 key 升序排序,所以不能对 map 用 sort 函数：
*/

#include <iostream>
#include <map>
using namespace std;

int main(void)
{
    // 定义一个map对象
    map<int, string> mapStudent;
 
    // 第一种 用insert函數插入pair
    mapStudent.insert(pair<int, string>(000, "student_zero"));
 
    // 第二种 用insert函数插入value_type数据
    mapStudent.insert(map<int, string>::value_type(001, "student_one"));
 
    // 第三种 用"array"方式插入
    mapStudent[123] = "student_first";
    mapStudent[456] = "student_second";

    return 0;
}