/*
 * 完成人　：李尚哲(2019091601021)
 * 完成时间：2019-11-26, Tue, 09:14:04
 * 最高分数：100
 */


#include <stdio.h>
#include <string.h>
#define N 100
int main()
{
    char passwd[N];
    int i, j, k, t, move;
    gets(passwd);
    scanf("%d", &move);
    for (i = 0; i < strlen(passwd); i++) {
        if (passwd[i] >= 'A' && passwd[i] <= 'Z') {
            passwd[i] = ((passwd[i] - 'A') + move) % 26 + 'A';
        } else if (passwd[i] >= 'a' && passwd[i] <= 'z') {
            passwd[i] = ((passwd[i] - 'a') + move) % 26 + 'a';
        }
    }
    printf("%s", passwd);
    return 0;
}       