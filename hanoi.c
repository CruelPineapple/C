#include<stdio.h>
void hanoi(int n,char src, char dest, char  aux)
{
    if (n==1)//河内塔 函数递归
    {
        printf("%c-->%c\n",src,dest);
        return;
    }
    
    hanoi(n-1,src,aux,dest);
    printf("%c-->%c\n",src,dest);
    hanoi(n-1,aux,dest,src);
}
int main()
{
    int n=3;
    hanoi(n,'a','b','c');
    return 0;
}