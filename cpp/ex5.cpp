#include <iostream>
using namespace std;

int main()
{
    enum color_set1 {RED, BLUE, WHITE = 999, BLACK};
    color_set1 color1, color2, color3;
    //以上两句等于 enum color_set1 {RED, BLUE, WHITE, BLACK} color1;
    //定义一个枚举类型，类型名为color_set1;将该类型赋给变量color1，color1的取值只能为枚举常量中的一个
    color1 = BLUE;//储存的值为枚举常量的指定整数值
    color2 = BLACK;//未指定时默认从0开始排，然后递增1；有指定值时，后一个数继续按递增规则递增
    //color3 = GREEN;//不能指定不在枚举常量里的值
    color3 = color2;
    cout<< color1 << endl << color2 << endl << color3 << endl;

    //为了方便枚举的使用，应该和 typedef 结合使用，例如：

    typedef enum BAYER_PATTERN
    {
        BAYER_RG=0,
        BAYER_BG,
        BAYER_GR,
        BAYER_GB
    }BAYER_PATTERN;
    //使用的时候就不用再 enum BAYER_PATTERN color = BAYER_RG; 了，而可以直接用:
    BAYER_PATTERN color = BAYER_RG;
    return 0;
}
/*重要提示：枚举变量可以直接输出，但不能直接输入。如：cout >> color3;   //非法
不能直接将常量赋给枚举变量。如：  color1=1; //非法
不同类型的枚举变量之间不能相互赋值。如： color1=color3;  //非法
枚举变量的输入输出一般都采用switch语句将其转换为字符或字符串；枚举类型数据的其他处理也往往应用switch语句，以保证程序的合法性和可读性。
枚举类型不一定要在 main 中定义，定义后可以在main中使用*/