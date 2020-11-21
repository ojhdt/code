/*
1.const 定义常量之后，是不能够改变的
2.宏定义是可以取消的
*/
#define N 21
#undef N

//const限定符定以后是不可以改变的，所以在定义时必须赋初始值
const int c =10;

/*修饰指针
1、const 修饰 *p，指向的对象只读，指针的指向可变;
2、const 修饰 p，指向的对象可变，指针的指向不可变;
3、指针不可改变指向，指向的内容也不可变;
诀窍：从右往左读
*/
int a = 10, b = 9;
const int *p = &a;//p is a pointer point to const int
int * const q = &a;//q is a const pointer point to int
const int * const r = &a;//r is a const pointer point to const int