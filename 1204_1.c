#include <stdio.h>
#include <stdlib.h>

typedef void (*FUNPTR)(int); //指针类型 指向 不返回 一个整形参数的 函数

FUNPTR fp;

// int f(int i){return 0;}

// void g(int i){return 0;}//此时指向g 不能指向f 因为类型不符合

typedef struct node
{
    int data;
    struct node *next;
} NODE, *NODEPTR;

void print(int y)
{
    printf("%d\n", y);
}

void printX3(int y)
{
    printf("%d\n", y * 3);
}

void traverse(NODEPTR head, FUNPTR callback) // 逗号后 回调 是个指针类型 是 回调函数
{
    NODEPTR p = head;
    while (p != NULL)
    {
        // printf("%d\n", p->data);
        callback(p->data); //函数的名字就是指向函数的指针
        p = p->next;
    }
}

int main()
{
    NODE a = {1, NULL}, b = {2, NULL}, c = {3, NULL}, d={4, NULL};

    a.next = &b; //a的指针成员指向b
    b.next = &c; //b的指针成员指向c 这是个 链表
    c.next = &d;
    NODEPTR head, p;

    p = (NODEPTR)malloc(sizeof(NODE));
    p->data = 5;
    p->next = NULL;
    d.next = p;

    head = &a; //头指针 指向链表的头
    traverse(head, print);
    
    // traverse(head, printX3);

    free(p);
    return 0;
}