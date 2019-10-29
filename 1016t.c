#include<stdio.h>
#include<stdbool.h>
#include<math.h>
int main()
{
   int n=0;
    int i=2,r=0;
    bool isPrime=true,t=true;

    printf("请输入一个整数：");
    scanf("%d",&n);
    printf("\n");
    r=n % 2;
    if (r) t=false; else t=true;
    // printf("%d",t);
    if (n==2) t=false; 
    if (t==true) {
        for (i=3;i<=(int)sqrt((double)n);i=i+2){
            r=n % i;
            if (r) { 
                isPrime=false;
                break;
            }
        }
    }
    printf(isPrime?"这是素数":"这不是素数");

    return 0;
}
