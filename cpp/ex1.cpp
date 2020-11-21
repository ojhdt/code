/*c语言命令在c++完全兼容*/
#include <iostream>
#include <bits/stdc++.h>//万能头文件
using namespace std;//引入才能使用  cin()/cout()

int main()
{
    //ios::sync_with_stdio(false);关闭同步文件流——c语言输入\出失效——可提升效率
    /*失效包括
    gets()
    puts()
    getchar()
    putchar()
    scanf()
    printf()等*/

    int a;
    cin >> a;//输入
    cout << a << endl;//输出，endl为换行
    cout << "hello" << endl;//=printf("\n")

    double b;
    cin >> b;
    cout << fixed << setprecision(10);//设定小数位数
    cout << b << endl;

    return 0;
}