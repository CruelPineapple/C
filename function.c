#include<stdio.h>

double average(double x,double z)//返回值类型return type，函数名称，括号内是参数(可以不用形式参数名字，带数据类型)
{                                //不返回的时候类型为void
    return(x+y)/2.0;//返回值
}
int main()//main函数是average函数的主调函数
{
    double a,b,c;
    a=2.3,b=4.6;
    c=average(a,b);//x,y是形式参数，a,b是实际参数,没有圆括号函数不会调用！
    //main函数停止等待average函数执行

}