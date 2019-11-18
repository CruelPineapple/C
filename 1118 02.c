#include<stdio.h>

void decomp(double d, int *i , double *f)
{
    *i=(int)d;/*通过强制转换获得浮点数的整数部*///反正理解传值调用就理解形式参数（真正参与执行的参数）该参数的值复制自实际参数
    *f=d-*i;
}

int main()
{
    double x=3.14159;
    int a=0;
    double b=0.0;

    decomp(x,&a,&b);//希望从函数里面出来的数得通过指针打破传值调用
    printf("%lf,%d,%f",x,a,b);

    return 0;
}