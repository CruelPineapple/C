#include <stdio.h>
#include<stdlib.h>
#include<time.h>

#define Pi 3.1415926535897932//后面没有分号
//const double Pi=3.14  一样的效果

// double x[5], y[5];
// double r[5];

struct _circle//定义了一个类型,tag name一般加个下划线
{
    double x,y;
    double r;//定义的时候 不会占据内存
};//注意这里有个分号！！！

// typedef struct
// {
//     double x,y;
//     double r;
// } Circle;  这里就是定义和换别名一起干了

// double area(double r)
// {
//     return r*r*Pi;
// }
typedef struct _circle Circle;//给原有类型一个别名

double area(Circle c)//这时候函数的参数就是结构了
{
    return c.r*c.r*Pi;
}

double area(Circle *c)//指针指向结构中的第一个成员
{
    return c->r*c->r*Pi;//这样的箭头左边只能是个指针，等效 
}

Circle make_circle()
{
    Circle t;
    t.x=rand()%100;
    t.y=rand()%100;
    t.r=rand()%10;
    return t;
}
int main()
{
    double i=3;
    // printf("%lf\n",area(i));

    // struct circle c; 让一个变量获得类型
    //现在这样写
    Circle c; //此时在内存中分配空间给每个结构成员
    c.x=1.0;//.是成员选择运算符哈哈哈 开始和js像了
    c.y=2.0;
    c.r=1.0;

    // printf("%lf\n",area(c.r));

    //结构变量作为函数的参数(在上面改了)
    printf("%lf\n",area(c));

    int m;

    srand(time(NULL));

    for ( m = 0; m < 5; ++m)//随机生成五个圆
    {
        c=make_circle();
        printf("%.2lf,%.2lf,%.2lf\n",c.x,c.y,area(c));
    }
    //然而 传值调用会让函数调用结构的时候每次都复制一下
    //用指针解决
    
    return 0;
}