#include <bits/stdc++.h>

using namespace std;

//string s;//定义字符串

int main()
{
    string s;//定义字符串，原理同数组
    cin >> s;
    cout << s << endl;
    cout << s[0] << endl;//同数组读取单字符

    //字符串连接
    string a = "HelloWorld";//可赋值任意地址
    string b = "Bye";
    cout << a << b << endl;
    cout << a + b << endl;

    //子串
    cout << a.substr(3);//第四个字符后面全部
    cout << a.substr(3,4);//第四个字符后面选四个
    return 0;
}