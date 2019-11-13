<<<<<<< HEAD
#include<stdio.h>
int main()
{
    int x,y,z;
    for ( x = 0; x <= 20; ++x)
    {
        for ( y = 0; y <= 33; ++y)
        {
            z=100-x-y;
            if (15*x+9*y+z==300 && x+y+z==100)
            {
                printf("%d,%d,%d\n",x,y,z);
            }
            
        }
        
    }
    return 0;//线性规划穷举法
=======
#include<stdio.h>
int main()
{
    int x,y,z;
    for ( x = 0; x <= 20; ++x)
    {
        for ( y = 0; y <= 33; ++y)
        {
            z=100-x-y;
            if (15*x+9*y+z==300 && x+y+z==100)
            {
                printf("%d,%d,%d\n",x,y,z);
            }
            
        }
        
    }
    return 0;//线性规划穷举法
>>>>>>> be9b868b94dda100b8f009499d4b3e27b5f14da9
}