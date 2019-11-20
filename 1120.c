#include<stdio.h>

size_t strlen(char *s)
{
    size_t i=0;
    // while(*s /*!= '\0'*/)//当指针没有指向0（字符串的尾部）
    // {
    //     ++i;
    //     ++s;
    // }
    // return i;
    while (*s++) ++i;
    return i;
}

void strcpy(char *dest,const char *src)
{
    while (*src)
    {
        *dest=*src;
        ++src;
        ++dest;
    }
    *dest = '\0';//给字符串一个结尾
    
}

int main()
{
    char a[]={'a','b','c','\0'};//这个0要有，不然会出乱码

    char b[]="abc";

    char *p="abc";//字符串放在常量内存，这样赋值相当于指针指向第一个东西

    a[0]=b[0]='A';//b是一个变量

    // *p='A';//直接改不行的，会吐核，因为尝试修改常量内存

    char *q;

    q=b;
    
    // gets(q);编译器不喜欢这样
    // fgets(q,1023,stdin);三个参数分别是 缓冲区 长度 文件
    //输出也一样 输出到文件
    // printf("%s\n",p);
    printf("%ld",strlen(a));

    char *d="abd";
    char *c;
    char buf[1024];//需要
    c=buf;
    strcpy(c,d);
    printf("%s",c);

    return 0;
}