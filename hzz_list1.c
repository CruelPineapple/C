#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include"hzz_list.h"

void list_init(listptr l)
{
    l->size = 0;
    l->head = NULL;
}

//用给定的值生成一个新节点
nodeptr make_node(value_pointer vp)
{
    nodeptr p = (nodeptr)malloc(sizeof(node));
    p->data = *vp;
    p->next = NULL;

    return p;
}

//在链表头部添加一个节点
bool list_push_front(listptr l, value_type value)
{
    nodeptr p = make_node(&value);

    //如果链表为空，那么新节点就是链表中唯一的节点，也是第一个节点
    if (!list_empty(l))
        p->next = l->head;

    l->head = p;
    ++l->size;

    return true;
}

//在链表尾部添加一个节点
bool list_push_back(listptr l, value_type value)
{
    nodeptr p = make_node(&value);

    if (list_empty(l))
        //如果链表为空，那么新节点就是链表中唯一的节点，也是第一个节点
        l->head = p;
    else
    {
        //否则，从头开始找到链表的最后一个节点
        nodeptr q = l->head;
        while (q->next != NULL)
            q = q->next;

        q->next = p;
    }

    ++l->size;

    return true;
}

//在位置pos添加一个节点
//这意味着，新节点将会成为链表的第pos个节点（从1开始计数）
//原来的第pos个节点成为第pos+1个
//pos可能的值是从1到l->size+1
//如果是l->size+1，那意味着新节点将成为链表的最后一个节点
bool list_insert(listptr l, size_t pos, value_type value)
{
    nodeptr p, pre, q;

    //pos可能超出范围
    if (pos < 1 || pos > l->size + 1)
    {
        printf("insert out of range\n");
        return false;
    }

    if (pos == 1)
        return list_push_front(l, value);

    p = make_node(&value);
    //pre指向前一个结点，q指向当前节点
    pre = l->head;
    q = pre->next;
    //向后计数到pos - 1
    for (size_t i = 1; i < pos - 1; ++i)
    {
        pre = pre->next;
        q = q->next;
    }

    //此时，q指向原来的第pos个节点，pre指向它的前一个
    //因此，需要将新节点p链在pre后面，然后q链在p后面
    pre->next = p;
    p->next = q;
    ++l->size;

    return true;
}

//从数组创建一个链表
size_t list_create(listptr l, value_pointer a, size_t len) //a is an array
{
    size_t i;

    for (i = 0; i < len; ++i)
        list_push_back(l, a[i]);

    return len;
}

//获得链表的结点数
size_t list_size(listptr l)
{
    return l->size;
}

//测试链表是否为空
bool list_empty(listptr l)
{
    return l->head == NULL;
}

//清空链表，删除所有节点
void list_clear(listptr l)
{
    nodeptr p = l->head, q;

    while (p != NULL)
    {
        q = p;       //保存当前节点指针
        p = p->next; //工作指针移到下一个
        free(q);     //删除q指向的节点
    }

    l->head = NULL;
    l->size = 0;
}

//遍历链表，用函数cb作为回调，去访问节点存储的数据
void list_traverse(listptr l, callback cb)
{
    nodeptr p = l->head;

    while (p != NULL)
    {
        cb(&p->data);
        p = p->next;
    }
}

/*  链表排序 bubble sort魔改版
    排序肯定会用到两个数据的比较，因此用回调函数comp_f来进行这种比较
    要怎样比较由comp_f指针指向的函数决定
*/

size_t list_create_from_file(listptr l, const char *filename) //第二个参数是文件名
{
    FILE *fp;

    fp = fopen(filename, "rt"); //文件操作之前要先打开，第二个参数表示 read text
    //read only  t表示文本模式打开 b表示二进制文件打开
    //如果文件打不开 fp会为空值

    if (fp == NULL) //(!fp)
    {
        printf("cannot open %s", filename);
        exit(1);
    }
    value_type v;
    size_t cnt;
    while (!feof(fp))//feof()是一个测试是否到达文件尾部
    {
        fscanf(fp, "%d", &v);  //文件读取函数
        list_push_back(l, v); //放到链表里面
        ++cnt;
    }

    fclose(fp); //关闭文件
    return cnt;//返回读取数据个数

} //八股文


