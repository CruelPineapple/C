<<<<<<< HEAD
#include<stdio.h>
int main()
{
    int score[5];
    int i;
    float sum=0;

    for ( i = 0; i < 5; ++i)
    {
        scanf("%d",&score[i]);
    }
    for ( i = 0; i < 5; ++i)
    {
        sum=sum+score[i];
    }
    printf("数组平均值%.2f",sum/5);
    
    return 0;
=======
#include<stdio.h>
int main()
{
    int score[5];
    int i;
    float sum=0;

    for ( i = 0; i < 5; ++i)
    {
        scanf("%d",&score[i]);
    }
    for ( i = 0; i < 5; ++i)
    {
        sum=sum+score[i];
    }
    printf("数组平均值%.2f",sum/5);
    
    return 0;
>>>>>>> be9b868b94dda100b8f009499d4b3e27b5f14da9
}