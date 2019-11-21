#include<stdio.h>

int main()
{
    int m,day,i;
    scanf("%d %d",&m,&day);
    printf("一 二 三 四 五 六 日\n");

    for ( i = 1; i <= (day-1)*3; i++)
        putchar(' ');
    for ( i = day; i <= m+day-1; i++)
    {
        printf("%d",i-day+1);
        putchar(' ');
        if (i-day+1<10)
        {
            putchar(' ');
            
        }
        if (i%7==0)
        {
            putchar('\n');
        }
        
    }
    
    

    return 0;
}