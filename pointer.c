#include<stdio.h>

int main()
{
    int i=1;
    int *p;
    int a;
    //声明时int约束了指针指向的东西的类型只能说整形
    //*声明了p只能是个指针
    //&就是取地址运算符 如
    p=&i;//现在p就指向i了
    printf("%d,%d,%d,%d,%d,%d,%d,%d\n",i,*p,&i,sizeof(p),sizeof(i),sizeof(long),&p,p);//一个指针的大小和一个长整型一样
    //*p和i完全等价，实现路径不同
    ++*p;
    printf("%d,%d\n",*p,i);
    *p++;
    printf("%d\n",*p);
    *p++;
    printf("%d",*p);
    return 0;

}