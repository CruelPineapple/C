<<<<<<< HEAD
#include<stdio.h>
int main()
{
    int a,b,c,d,i;
    for ( i = 100; i < 1000; ++i)
    {
        a=i/100;
        d=i%100;
        b=d/10;
        c=d%10;
        if (i==a*a*a+b*b*b+c*c*c)
        {
             printf("%d\n",i);
        }
        
    }
    return 0;
=======
#include<stdio.h>
int main()
{
    int a,b,c,d,i;
    for ( i = 100; i < 1000; ++i)
    {
        a=i/100;
        d=i%100;
        b=d/10;
        c=d%10;
        if (i==a*a*a+b*b*b+c*c*c)
        {
             printf("%d\n",i);
        }
        
    }
    return 0;
>>>>>>> be9b868b94dda100b8f009499d4b3e27b5f14da9
}