#include<stdio.h>

// int a[10];//全局变量 储存在静态区 和静态变量一起
//初始值全为0？
//main函数内这样定义就是随机的，必须定义一个0

int main()
{
    int a[10]={0};
    char c = getchar();
    for ( ; c <='9'&& c>='0'; c=getchar())
    {
        a[c-'0']++;
    }
    for (int i = 0; i <= 9; ++i)
    {
        printf("%d",a[i]);
    }
    putchar('\n');
    return 0;

}