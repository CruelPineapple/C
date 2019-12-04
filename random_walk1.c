#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

#define N 10

int main()
{
    int i, j;
    char a[N][N];

    for (i = 0; i < N; ++i)
    {
        for (j = 0; j < N; ++j)
        {
            a[i][j] = '.';
        }
    }

    a[0][0] = 'A';

    srand((int)time(0));
    int way;

    i = 0;
    j = 0;

    char pre = 'A';

    while (pre != 'Z')
    {
        way = rand() % 4;
        if (way == 0 && i - 1 >= 0 && a[i - 1][j] == '.')
        {
            a[i - 1][j] = ++pre;
            i -= 1;
        }
        else if (way == 1 && i + 1 < 10 && a[i + 1][j] == '.')
        {
            a[i + 1][j] = ++pre;
            i += 1;
        }
        else if (way == 2 && j - 1 >= 0 && a[i][j - 1] == '.')
        {
            a[i][j - 1] = ++pre;
            j -= 1;
        }
        else if (way == 3 && j + 1 < 10 && a[i][j + 1] == '.')
        {
            a[i][j + 1] = ++pre;
            j += 1;
        }
        else if (a[i - 1][j] != '.' && a[i][j + 1] != '.' && a[i + 1][j] != '.' && a[i][j - 1] != '.')
        {
            break;
        }
    }

    for (i = 0; i < N; i++)
    {
        for (j = 0; j < N; j++)
        {
            printf("%c", a[i][j]);
        }
        printf("\n");
    }

    return 0;
}