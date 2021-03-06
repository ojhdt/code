#include <iostream>
using namespace std;

// 全局变量声明
int g = 99;

// 函数声明
int func();

int main()
{
    static int b = 50;//虽然全局，退出后无法引用
    // 局部变量声明
    int g = 10;
    //cout << g;
    int kk = func();
    cout << kk << endl;
    cout << ::g << endl << g << endl;//全局变量和和局部变量同名时，可通过域名在函数中引用到全局变量，不加域名解析则引用局部变量
    return 0;
}

// 函数定义
int func()
{
    return g;
}

/*
1.在一个函数体内可以存在重名的变量，前提是它们的作用域不同。
2.上述代码中，全局变量定义了一个int g=99，局部变量定义了一个int g=10，由于这两个g所在的作用域不同，所以各自独立。
3.如果作为 static 局部变量在函数内定义，它的生存期为整个源程序，但是其作用域仍与自动变量相同，只能在定义该变量的函数内使用该变量。退出该函数后， 尽管该变量还继续存在，但不能使用它。
4.static 修饰符也可以应用于全局变量。当 static 修饰全局变量时，会使变量的作用域限制在声明它的文件内。
*/