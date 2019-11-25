#include<stdio.h>

typedef char GENDER;
const GENDER MALE ='M';
const GENDER FEMALE ='F';

typedef struct
{
    unsigned sid;
    char name[32];
    GENDER gender;
} student;

int main()
{
    student s;

    scanf("%u%s %c",&s.sid,s.name,&s.gender);//name不用&因为字符串的名字就是个指针
    printf("%u,%s,%c\n",s.sid,s.name,s.gender);

    return 0;
}