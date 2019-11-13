#include<stdio.h>
int main()
{
    int i=1,j;
    int *p=&i,*q=&j;
    p-q;//p-q是两个指针中间的指针
    // p+q没有意义
    //p==q 检验两个指针指向是否相等
    printf("%p,%p",p,p+3);//这里加的三是三个单元（大小等于p的基类型）

    return 0;
}