#include<stdio.h>
long fibo(long n,long a, long b)
{
    return n==1? a:fibo(n-1,b,a+b);
}