

#include<stdio.h>
#include<string.h>

void bubble_sort(int a[][8], int len)
{
    int i, j;
    // char t[8];

    for (i = 0; i < len - 1; ++i)
        for (j = 0; j < len - i - 1; ++j)
            if (strcmp(a[j],a[j+1])>0 )
            { // block
                char *t=a[j];
                a[j]=a[j+1];
                a[j+1]=t;
            }
}

int main()
{
    // char s[]="mars";//用数组表示字符串
    // char *t="mars";//用指针表示字符串
    
    char * planet[8]={
        "Mercury",
        "Venus",
        "Earth",
        "Mars",
        "Jupiter",
        "Saturn",
        "Neptune",
        "Urinas"
    }//一维指针数组 然而是常量字符串

    bubble_sort(planet,8);
    
    int i;
    for ( i = 0; i < 8; ++i)
    {
        printf("%s\n",planet[i]);//每行一个数组 当作一维数组使用
    }
    
    return 0;
}