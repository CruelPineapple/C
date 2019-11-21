#include<stdio.h>

int main()
{
    int m,i;

    scanf("%d",&m);

    for ( i = 2; i*i <= m ; i+=2)
    {
        printf("%5d",i*i);
    }
    
}