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

    // scanf("%u%s %c",&s.sid,s.name,&s.gender);//name不用&因为字符串的名字就是个指针,防止%c吃掉空格 加一个
    
    printf("%u,%s,%c,%u\n",s.sid,s.name,s.gender,s.dob.year);

    return 0;
}