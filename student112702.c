#include<stdio.h>

typedef char GENDER;
const GENDER MALE ='M';
const GENDER FEMALE ='F';


typedef struct
{
    unsigned year, month, day;
} date;


typedef struct
{
    unsigned sid;
    char name[32];
    GENDER gender;
    date dob;//结构可以嵌套定义
} student;



int main()
{
    student s={1000,"name",FEMALE,{2001,3,6}};

    //定义结构数组
    // student m[3];//数组有三个元素 基类型是叫student的结构

    student m[3]={
        {1001,"aaaa",MALE,{2002,1,1}},
        {1002,"bbbb",FEMALE,{2003,2,2}},
        {1003,"cccc",MALE,{2004,3,3}}
    };

    // scanf("%u%s %c",&s.sid,s.name,&s.gender);//name不用&因为字符串的名字就是个指针,防止%c吃掉空格 加一个
    
    printf("%u,%s,%c,%u\n\n",s.sid,s.name,s.gender,s.dob.year);

    for (int i = 0; i < 3; ++i)
    {
        printf("%u,%s,%c,%u\n\n",m[i].sid,m[i].name,m[i].gender,m[i].dob.year);
    }
    

    return 0;
}