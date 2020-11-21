/*
cin.getline()实际上有三个参数：
cin.getline(接收字符串的变量,接收字符个数,结束字符)
当第三个参数省略时，系统默认为'\0' 

getline(cin,str);
接收一个字符串，可以接收空格并输出，需包含“#include<string>”
注意：若str不为空，则须使用“str="\n";”重置，否则getline()默认将之前的变量作为输入，而不弹出输入框
*/

#include <iostream>
using namespace std;

int main()
{
    char m[20];
    cin.getline(m,5);
    cout<<m<<endl;

    string str;
    getline(cin,str);
    cout<<str<<endl;
}