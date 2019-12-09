#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a;

    b = a;

    p = (int *)malloc(sizeof(int));//memory allocation内存分配的函数
    //分配一个整数大小的内存 返回它的指针

    *p=1;//把1存进去

    //程序退出的时候也不会释放这块内存

    free(p);//现在释放了
    

    return 0;
}