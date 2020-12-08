/*
为什么要使用 using namespace std; ?
有些名字容易冲突，所以会使用命名空间的方式进行区分，具体来说就是加个前缀。比如 C++ 标准库里面定义了 vector 容器，你自己也写了个 vector 类，这样名字就冲突了。于是标准库里的名字都加上 std:: 的前缀，你必须用 std::vector 来引用。同理，你自己的类也可以加个自定义的前缀。
但是经常写全名会很繁琐，所以在没有冲突的情况下你可以偷懒，写一句 using namespace std;，接下去的代码就可以不用写前缀直接写 vector 了。
*/
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    cout << "出现意外手机坏了，随便签个到"
    //调试用注释
    #if 0
        cout << "Here are some code." << endl;
    #endif
}
