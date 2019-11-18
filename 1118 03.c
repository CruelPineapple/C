#include<stdio.h>
#include<stdlib.h>

#define DEPTH   128

int stack[DEPTH];
int top;

void init()
{
    top=0;
}

void push(int v)
{
    if(top==DEPTH-1)
    {
        printf("stack overflow\n");
        exit(-1);
    }
    stack[++top]=v;
    
}

int pop()
{
    
    if (top==0)
    {
        printf("stack underflow\n");
        exit(-2);
    }
    
    
    
    return stack[top--];//
}

int main()
{
    int i;
    for ( i = 0; i < 127; ++i)
    {
        push(i);    
    }
    for ( i = 0; i < 127; ++i)
    {
        printf("%d\n",pop());
    }
    
    return 0;
}