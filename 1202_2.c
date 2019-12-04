#include <stdio.h>

typedef struct node
{
    int data;
    struct node *next; //定义我自己??
} NODE, *NODEPTR;      //此时NODE 是 未完成类型 即 编译器不能确定它的内存大小
//若内部 struct node *p; 就不是未完成类型了，因为 指针大小是固定的
//这时候此结构包含两个成员 一个整形和一个指针

void traverse(NODEPTR head)//遍历链表
{
    NODEPTR p = head;
    while (p != NULL)
    {
        printf("%d\n", p->data);
        p = p->next;
    }
    // for (  ; p!=NULL;p=p->next)
    // {
    //     printf("%d\n",p->data);
    // }for循环也一样的效果
    
}

int main()
{
    NODE a = {1, NULL}, b = {2, NULL}, c = {3, NULL};

    a.next = &b; //a的指针成员指向b
    b.next = &c; //b的指针成员指向c 这是个 链表
    NODEPTR head, p;

    head = &a; //头指针 指向链表的头
    traverse(head);


    return 0;
}