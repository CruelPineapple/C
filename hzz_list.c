//disable warning for VC++ compiler
#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

#include"hzz_list.h"


//用于打印的回调函数
void print(int *v) { printf("%6d", *v);}

//比较
int comp_int(int *v1, int *v2)
{
    return *v1 - *v2;
}

//测试代码
int main()
{
    //int a[] = {54, 77, 23, 36, 19, 97, 41, 21, 33, 69};
    list l;
    ///size_t pos;
    //int v;

    list_init(&l);
    /*size_t c =*/ list_create_from_file(&l,"data1.txt");
    list_save_to_file(&l,"3.txt");
    //list_create(&l, a, 10);

    //printf("please input inserting position and value:");
    //scanf("%lu%d", &pos, &v);
    //list_insert(&l, pos, v);
    list_sort(&l, comp_int); //*提示我自己 多想几次回调
    list_traverse(&l, print);
    putchar('\n');

    list_clear(&l);

    return 0;
}