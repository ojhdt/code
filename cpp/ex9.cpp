/*位运算符
|：取或
&：取与
^：异1同0
~：二进制取反
>>：向右位移，就是把尾数去掉位数
<<：就是尾数加位数0
*/

/*不用任何循环语句，不用if，来实现1+2+3+...+10的值*/
#include <iostream>
using namespace std;

int add(int c)
{
    int a=0;
    c&&(a=add(c-1));//递归循环，直到传入c的值为0则结束循环
    cout<<c+a<<endl;
    return c+a;
}
int main()
{ 
    add(10);
    return 0;
}

/*其他拓展符号
-->：相当于(x--) > y，在 x 的进行自减运算前，会先使用比较符号 > 与右边表达式 y 进行比较
*/