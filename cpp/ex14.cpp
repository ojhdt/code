/*string类提供了一系列针对字符串的操作，比如：
 1. append() -- 在字符串的末尾添加字符
 2. find() -- 在字符串中查找字符串
 4. insert() -- 插入字符
 5. length() -- 返回字符串的长度
 6. replace() -- 替换字符串
 7. substr() -- 返回某个子字符串
 */

#include <iostream>
#include <string>
using namespace std;

int main()
{
    //定义一个string类对象
    string http = "www.runoob.com";

   //打印字符串长度
   cout<<http.length()<<endl;

    //拼接
    http.append("/C++");
    cout<<http<<endl; //打印结果为：www.runoob.com/C++

    //删除
    int pos = http.find("/C++"); //查找"C++"在字符串中的位置（返回首个字符地址值）
    cout<<pos<<endl;
        //string.replace(起始地址，替换字符数量，替换内容)
    http.replace(pos, 4, "");   //从位置pos开始，之后的4个字符替换为空，即删除
    cout<<http<<endl;

    //找子串runoob
    int first = http.find_first_of("."); //从头开始寻找字符'.'的位置
    int last = http.find_last_of(".");   //从尾开始寻找字符'.'的位置
    cout<<http.substr(first+1, last-first-1)<<endl; //提取"runoob"子串并打印

    return 0;
}