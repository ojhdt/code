//每行代码以;间隔

#include <stdio.h>
#include <math.h>  //标准格式，不加;

int main(void)  //main函数（int只能保存整数）
{
    float a, b, c ,s ,area;  ///提前定义所有变量（float初始化类型——浮点数）
    printf("Input a,b,c:");//print输出，f输出到显示器上
    scanf("%f,%f,%F", &a, &b, &c);//%等待输入，&表示变量
    ///scanf("%x,%y",%a,%b);
    s = (float)(a + b + c)/2;  //结果保存在s
    //(float)数据类型强制转换
    area = sqrt(s * (s-a) * (s-b) * (s-c));
    //sqrt() - 开根号
    printf("area = %f\n",area);
    // %f 取 , 后变量值
    //  \n转义
}
