#include <bits/stdc++.h>

using namespace std;
/*
Lambda函数的语法定义如下：
[capture](parameters) mutable ->return-type{statement}
*/
int main()
{
    //无返回值
    auto basicLambda = [] { cout << "Hello, world!" << endl; };
    basicLambda();
    //有返回值
    auto add = [](int a, int b) -> int { return a + b; };
    //也可省略返回类型
    auto multiply = [](int a, int b) { return a * b; };

    //按值捕获
    int i = 42;
    auto f = [=] { return i; };//默认捕获全部，但可以用[x]仅以值捕获某变量
    i = 0;
    auto x = f(); // x为42

    //引用捕获
    int i = 42;
    auto f = [&] { return i; };//默认捕获全部，但可以用[&x]仅以引用捕获某变量
    i = 0;
    auto x = f(); // x为0
    return 0;
}

/*捕捉列表
[]：默认不捕获任何变量；
[=]：默认以值捕获所有变量；
[&]：默认以引用捕获所有变量；
[x]：仅以值捕获x，其它变量不捕获；
[&x]：仅以引用捕获x，其它变量不捕获；
[=, &x]：默认以值捕获所有变量，但是x是例外，通过引用捕获；
[&, x]：默认以引用捕获所有变量，但是x是例外，通过值捕获；
[this]：通过引用捕获当前对象（其实是复制指针）；
[*this]：通过传值方式捕获当前对象；
*/