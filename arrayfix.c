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
    int j=0;
    int max=score[j];
    for ( i = 0; i < 5; ++i)
    {
        if (max<score[i])
            
        {
            max=score[j=i];
        }
        
    }
    printf("最大%d",max);
    
    return 0;
}