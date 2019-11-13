#include<stdio.h>
int main()
{
    #define M 3
    #define K 3
    #define N 5
    int a[M][N]={       //also
        {1,2,3,4,5},    //1,2,3,4,5,     
        {2,3,4,5,6},    //2,3,4,5,6,
        {3,4,5,6,7},    //3,4,5,6,7,不用括号也行 没有初始化的部分编译器补零！
    };
    int b[N][K]={
        3,4,5,
        4,5,6,
        7,8,9,
        5,6,7,
        6,7,8,
    };
    int c[M][K];
    /*二维数组初始化*/
    int i,j,k;
    for ( i = 0; i <= M; ++i)
    {
        for ( j = 0; j <= K; ++j)
        {
            int sum=0;
            for ( k = 0; k < N; ++k)
            {
                sum+=a[i][j]*b[k][j];
            }
            c[i][j]=sum;
        }
        
    }
    for ( i = 0; i < M; ++i)
    {
        for ( j = 0; j < K; ++j)
        {
            printf("%6d ",c[i][j]);
        }
        putchar('\n');//换行
        
    }
    

    return 0;
}