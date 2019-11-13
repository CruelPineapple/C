<<<<<<< HEAD
#include<stdio.h>
int main()
{
    #define N 10
    int yh[N][N]={0};//补零规则全初始化为0
    int i,j;

    for ( i = 0; i < N; ++i)
    {
        yh[i][0]=1;
        for ( j = 1; j <= i; ++j)
        {
            yh[i][j]=yh[i-1][j-1]+yh[i-1][j];
        }
        
    }
    
    for ( i = 0; i < N; ++i)
    {
        for ( j = 0; j <= i; ++j)
        {
            printf("%6d",yh[i][j]);
        }
        putchar('\n');
    }
    return 0;
=======
#include<stdio.h>
int main()
{
    #define N 10
    int yh[N][N]={0};//补零规则全初始化为0
    int i,j;

    for ( i = 0; i < N; ++i)
    {
        yh[i][0]=1;
        for ( j = 1; j <= i; ++j)
        {
            yh[i][j]=yh[i-1][j-1]+yh[i-1][j];
        }
        
    }
    
    for ( i = 0; i < N; ++i)
    {
        for ( j = 0; j <= i; ++j)
        {
            printf("%6d",yh[i][j]);
        }
        putchar('\n');
    }
    return 0;
>>>>>>> be9b868b94dda100b8f009499d4b3e27b5f14da9
}