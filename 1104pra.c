#include<stdio.h>

int f()
{
    static int i=0;//静态变量只被初始化一次，函数退出也会保留 再次调用的时候保留原来的值 活到main函数死亡
    ++i;
    return i;
}

int g()
{
    int i=0;
    ++i;
    return i;
}
int main()
{
    printf("%d %d",f(),g());
    f(),g();
    putchar('\n');
    printf("%d %d",f(),g());
    return 0;
}