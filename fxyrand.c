/*
 * 完成人　：冯新越(2019091602014)
 * 完成时间：2019-11-26, Tue, 09:13:07
 * 最高分数：100
 */


#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#define N 10
int main()
{
    char str[N][N];
    char point = 'A';
    int i, j, k, t;
    int rand1;
    for (i = 0; i < N; i++) {
        for (j = 0; j < N; j++) {
            str[i][j] = '.';
        }
    }
    srand((int)time(0));
    i = 0;
    j = 0;
    str[i][j] = 'A';
    while (point != 'Z') {
        rand1 = rand() % 4;
        if (rand1 == 0 && i - 1 >= 0 && str[i - 1][j] == '.') {
            str[i - 1][j] = ++point;
            i -= 1;
        } else if (rand1 == 1 && j + 1 < 10 && str[i][j + 1] == '.') {
            str[i][j + 1] = ++point;
            j += 1;
        } else if (rand1 == 2 && i + 1 < 10 && str[i + 1][j] == '.') {
            str[i + 1][j] = ++point;
            i += 1;
        } else if (rand1 == 3 && j - 1 >= 0 && str[i][j - 1] == '.') {
            str[i][j - 1] = ++point;
            j -= 1;
        } else if (str[i - 1][j] != '.' && str[i][j + 1] != '.' && str[i + 1][j] != '.' && str[i][j - 1] != '.') {
            break;
        }
    }

    for (i = 0; i < N; i++) {
        for (j = 0; j < N; j++) {
            printf("%c", str[i][j]);
        }
        printf("\n");
    }
    return 0;
}
