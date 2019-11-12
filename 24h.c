<<<<<<< HEAD
#include<stdio.h>
int main()
{
    int h,m;
    printf("Enter a 24-h time\n");
    scanf("%d:%d",&h,&m);
    
    if (h==0)
    {
        h=12;
    }
    
    if (h<12)
    {
        printf("Equivalent 12-hour time: %d:%02dAM",h,m);
        //%02d 似乎是会用0补齐到2位
    }
    else
    {
        printf("Equivalent 12-hour time: %d:%02dPM",h-12,m);
        
    }
    return 0;
    
=======
#include<stdio.h>
int main()
{
    int h,m;
    printf("Enter a 24-h time\n");
    scanf("%d:%d",&h,&m);
    
    if (h==0)
    {
        h=12;
    }
    
    if (h<12)
    {
        printf("Equivalent 12-hour time: %d:%02dAM",h,m);
        //%02d 似乎是会用0补齐到2位
    }
    else
    {
        printf("Equivalent 12-hour time: %d:%02dPM",h-12,m);
        
    }
    return 0;
    
>>>>>>> be9b868b94dda100b8f009499d4b3e27b5f14da9
}