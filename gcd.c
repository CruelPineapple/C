#include<stdio.h>

int main()
{
    int a, b;
    scanf("%d %d",&a,&b);

    while (b != 0)
    {
        b=b%a;
        if (b!=0)
        {
            a=b;/* code */
        }
        else break ;
        
    }

    printf("%d\n",a);

    return 0;
    
}