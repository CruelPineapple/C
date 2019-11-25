#include <stdio.h>

int main()
{
    
    char* strcpy(char *dest, const char *src)//返回一个指针//返回值是局部变量很危险
    {
        char *t =dest;
        while((*t++=*src++))
        return dest;
        
        // while (*src)
        // {
        //     *dest = *src;
        //     ++src;
        //     ++dest;
        // }
        // *dest = '\0'; //给字符串一个结尾
    }
    //字符串：指针 指向首个字符 和数组差不多
    if ("abc"=="abc")//如果编译器优化了，两个指针会指向一个地址 那就相等
    //没有优化就不会相等

    //比较字符串是否一样

    strcmp(p,q);//比较字典大小，相同是0
    
    
    
    return 0;
}