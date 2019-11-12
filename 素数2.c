<<<<<<< HEAD
#include<stdio.h>
#include<math.h>
int main()
{
    int input,i;
    float a;
    printf("输入一个数字\n");
    scanf("%d",&input);
    for ( i = 2; i <= sqrt(input); ++i)
    {
        a=input%i;
        if(a==0)
        {
            printf("它不是素数");
            return 0;
        }
    }
    printf("它是素数");
    return 0;
    
=======
#include<stdio.h>
#include<math.h>
int main()
{
    int input,i;
    float a;
    printf("输入一个数字\n");
    scanf("%d",&input);
    for ( i = 2; i <= sqrt(input); ++i)
    {
        a=input%i;
        if(a==0)
        {
            printf("它不是素数");
            return 0;
        }
    }
    printf("它是素数");
    return 0;
    
>>>>>>> be9b868b94dda100b8f009499d4b3e27b5f14da9
}