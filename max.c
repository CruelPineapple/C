<<<<<<< HEAD
#include<stdio.h>
#define N 10
int main()
{
    int a[]={3,5,2,1,4,9,7,6,0,8};
    int i,j;




    for ( i = 0; i < N; ++i)
        for ( j = 0; j < N-i-1; ++j)
            if (a[j]>=a[j+1])
            {
                int t=a[j];
                a[j]=a[j+1];
                a[j+1]=t;
            }
            
    for ( i = 0; i < N; ++i)
    printf("%4d",a[i]);
    putchar('\n');
    return 0;
    //冒泡排列法        
        
        
    
    
=======
#include<stdio.h>
#define N 10
int main()
{
    int a[]={3,5,2,1,4,9,7,6,0,8};
    int i,j;




    for ( i = 0; i < N; ++i)
        for ( j = 0; j < N-i-1; ++j)
            if (a[j]>=a[j+1])
            {
                int t=a[j];
                a[j]=a[j+1];
                a[j+1]=t;
            }
            
    for ( i = 0; i < N; ++i)
    printf("%4d",a[i]);
    putchar('\n');
    return 0;
    //冒泡排列法        
        
        
    
    
>>>>>>> be9b868b94dda100b8f009499d4b3e27b5f14da9
}