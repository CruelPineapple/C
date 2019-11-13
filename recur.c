#include<stdio.h>
unsigned long fact(unsigned long n)//unsugned long 无符号的长整形
{
    if (n<=1)
    {
        return 1;
    }
    else 
    {
        return fact(n-1)*n;
    }
    
}
int main()//递归求阶乘
{
    int input;
    scanf("%d",&input);
    printf("%d",fact(input));
    return 0;
}