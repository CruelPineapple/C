#include<stdio.h>

int main()
{
    int a[]={1,2,3,4,5};//变量a的类型是int[5]
    int *p;//p的类型的int *
    p=&a[0];//p指向a的第一个元素
    // p=&a[5];//获得一个不存在元素的地址没有问题
    //*p=6;//但是使用这个地址，如赋值，不行
    // p;//使用这个指针也没有问题
    //在编译器的眼里，数组的名字是一个指针!
    //规定 数组的名字就是首元素的地址
    //所以 a+i就是第i个元素的地址
    p=a;
    int i;
    for ( i = 0; i < 5; ++i)
    {
        printf("%4d",a[i]);//输出的就是a矩阵
    }
    putchar('\n');
    for ( i = 0; i < 5; ++i)
    {
        printf("%4d",p[i]);//输出的还是a矩阵
    }
    putchar('\n');
    for ( i = 0; i < 5; ++i)
    {
        printf("%4d",*(a+i));//还是
    }
    putchar('\n');
    for ( i = 0; i < 5; ++i)
    {
        printf("%4d",*(p+i));//还是
    }
    putchar('\n');
    for ( i = 0; i < 5; ++i)
    {
        printf("%4d",i[a]);//emm a[b]==>*(a+b)==>*(b+a)==>b[a]
    }
    putchar('\n');
    for ( p=&a[3]; p < &a[5]; ++p)//使用了哨兵元素
    {
        printf("%4d",*p);
    }
    putchar('\n');
    for ( p = a+4; p >= a; --p)//指针从数组尾部向头部移动
    {
        printf("%4d",*p);//反向输出数组
    }
    putchar('\n');
    for ( p=a+4; p > a; --p)
    {
        *p=*(p-1);
        printf("%4d",*p);
    }
    *p=0;
    return 0;
}