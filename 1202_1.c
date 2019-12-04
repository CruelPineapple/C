#include<stdio.h>

typedef struct
{
    int a;
    char *c;//这时候是 指针成员 指向字符串的
}foo, *fooPTR;//逗号后面定义了一个指针类型指向foo结构  这时候fooPTR等价于 foo *

int main()
{
    foo x={1,"ABC"};

    fooPTR p= &x;//指向结构变量的指针 这时候fooPTR p 等价于 foo *p

    printf("%d,%s\n",p->a,p->c);//箭头指向结构中的a和c 另一种用法好像是.

    //结构作为函数的参数

    // void boo(foo y)
    // {
    //     y.a =2;
    //     y.c='B';
    // }

    // boo(x);
    // printf("%d,%c\n",p->a,p->c); 这样当然是不会变得 因为传值调用

    void goo(fooPTR y)//传递了指针参数
    {
        y->a =2;
        y->c="AAAA";
    }
    goo(&x);
    printf("%d,%s\n",p->a,p->c);

    return 0;
}