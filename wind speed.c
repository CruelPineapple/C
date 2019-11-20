#include<stdio.h>
// #include<stdlib.h>

int main()
{
    int input;

    scanf("%d",&input);

    if (input<1)
    {
        printf("Calm");
    }
    else if (input<=3 && input>=1)
    {
        printf("Light air");
    }
    else if (input<=27 && input>=4)
    {
        printf("Breeze");
    }
    else if (input<=47 && input>=28)
    {
        printf("Gale");
    }
    else if (input<=63 && input>=48)
    {
        printf("Storm");
    }
    else
    {
        printf("Hurricane");
    }
    return 0;
    
    
}