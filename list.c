//disable warning for VC++ compiler
// #define _CRT_SECURE_NO_WARNINGS 

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

//type declarations
typedef int value_type;
typedef value_type* value_pointer;

typedef struct _node
{
    value_type data;//技巧 用typedef定义一个别名 更改别名的基类型即可更改data的存储类型
    struct _node *next;
} node, *nodeptr;//节点结构

typedef struct 
{
    nodeptr head;
    size_t size;//链表的结点数
} list, *listptr;//链表结构

typedef void (*callback)(value_pointer);
typedef void (*compare)(value_pointer, value_pointer);

//operation prototype declarations
void list_init(listptr l);
bool list_push_front(listptr l, value_pointer vp);
bool list_push_back(listptr l, value_pointer vp);
bool list_insert(listptr l, size_t pos, value_pointer vp);
size_t list_create(listptr l, value_pointer a,size_t len);
size_t list_size(listptr l);
bool list_empty(listptr l);
void list_clear(listptr l);
void list_traverse(listptr l, callback cb);
void list_sort(listptr l, compare comp_f);

//operation definitions
void list_init(listptr l)
{
    l->size=0;
    l->head=NULL;
}

bool list_push_front(listptr l, value_pointer vp)
{
    nodeptr p=(nodeptr)malloc(sizeof(node));
    p->data=*vp;
    p->next=NULL;

    if (!list_empty(l))
    {
        p->next=l->head;
    }
    l->head=p;
    ++l->size;//理解这个函数
    return true;
}

bool list_push_back(listptr l, value_pointer vp)
{
    nodeptr p=(nodeptr)malloc(sizeof(node));
    p->data=*vp;
    p->next=NULL;

    if (list_empty(l))
    {
        l->head=p;
        return true;
    }
    
    nodeptr q =l->head;//工作指针q
    while (q->next != NULL)
    {
        q=q->next;
    }
    q->next=p;//
    return true;
}

bool list_insert(listptr l, size_t pos, value_pointer vp)
{
    return true;
}

size_t list_create(listptr l, value_pointer a,size_t len)  //a is an array
{
    size_t i;
    for ( i = 0; i < len; ++i)
    {
        list_push_front(l,&a[i]);
    }
    
    return len;
}

size_t list_size(listptr l)
{
    return l->size;
}

bool list_empty(listptr l)
{
    return l->head==NULL;
}

void list_clear(listptr l)
{

}

void list_traverse(listptr l, callback cb)
{
    nodeptr p = l->head;
    while (p != NULL)
    {
        
        cb(p->data); 
        p = p->next;
    }
}

void list_sort(listptr l, compare comp_f)
{
    
}

void print(int v)
{
    printf("%6d",v);
}
int main()
{
    int a[] = {54, 77, 23, 36, 19, 97, 41, 21, 33, 69};
    list l;

    list_init(&l);

    list_create(&l,a,10);

    list_traverse(&l,print);

    putchar('\n');

    return 0;
}

