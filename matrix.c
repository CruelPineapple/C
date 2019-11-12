<<<<<<< HEAD
#include<stdio.h>
int main()
{
    #define N 9
    int a[N][N];
    int i,j;
    for ( i = 1; i <= N; ++i)
    {
        for ( j = 1; j <= N; ++j)
        {
            a[i-1][j-1]=i*j;
        }
        
    }
    for ( i = 0; i < N; ++i)
    {
        for ( j = 0; j < N; ++j)
        {
            printf("%6d ",a[i][j]);
        
        }
        putchar('\n');
        
    }
    

    return 0;
=======
#include<stdio.h>
int main()
{
    #define N 9
    int a[N][N];
    int i,j;
    for ( i = 1; i <= N; ++i)
    {
        for ( j = 1; j <= N; ++j)
        {
            a[i-1][j-1]=i*j;
        }
        
    }
    for ( i = 0; i < N; ++i)
    {
        for ( j = 0; j < N; ++j)
        {
            printf("%6d ",a[i][j]);
        
        }
        putchar('\n');
        
    }
    

    return 0;
>>>>>>> be9b868b94dda100b8f009499d4b3e27b5f14da9
}