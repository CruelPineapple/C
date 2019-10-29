#include<stdio.h>
#include<stdbool.h>
int main()
{
    int r,n;
    bool a,b;
    scanf("%d",&n);
    r=n%2;
    if (r)
    a=true;
    else
    a=false;
    printf(a?"true":"fause");
    return 0;
    
}