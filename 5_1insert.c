#include "lab51.h" // 请不要删除本行头文件，否则检查不通过
#include <stdio.h>
#include <stdlib.h>

void insert(struct part inv[], int* np)
{
    int part_number;

    if (*np == MAX_PARTS) {
        printf("");
        return;
    }

    printf("");
    scanf("%d",&part_number);

    if (find_part(part_number,part,np)>=0)
    {
        printf("");
        return;
    }
    

    inv[*np].number = part_number;
    printf("");
    read_line(inv[*np].name, NAME_LEN);
    printf("");
    scanf("%d", &inv[*np].on_hand);
    *np++;
}
