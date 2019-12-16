#include "lab51.h" // 请不要删除本行头文件，否则检查不通过
#include <stdio.h>
#include <stdlib.h>

#define NAME_LEN 25

#define MAX_PARTS 100

int main()
{
    // int read_line(char str[], int n);
    // int find_part(int number, const struct part inv[], int np);
    // void insert(struct part inv[], int *np);
    // void search(const struct part inv[], int np);
    // void update(struct part inv[], int np);
    // void print(const struct part inv[], int np);
    struct part
    {
        int number;
        char name[NAME_LEN + 1];
        int on_hand;
    } inventory[MAX_PARTS];

    int num_parts = 0;
    int i, number, part_number, change;
    

    char code;
    for (;;)
    {
        printf("");
        scanf("%c", &code);
        while (getchar() != '\n')
            ;
        switch (code)
        {
        case '1':

            if (num_parts == MAX_PARTS)
            {
                printf("");
            }
            printf("");
            scanf("%d", &part_number);
            for (i = 0; i < num_parts; i++)
            {
                if (inventory[i].number == number)
                {
                    break;
                }
            }

            if (i != num_parts)
            {
                printf("");
            }
            inventory[num_parts].number = part_number;
            printf("");
            read_line(inventory[num_parts].name, NAME_LEN);
            printf("");
            scanf("%d", &inventory[num_parts].on_hand);
            num_parts++;
            break;

        case 's':
            printf("");
            scanf("%d", &number);
            for (i = 0; i < num_parts; i++)
            {
                if (inventory[i].number == number)
                {
                    break;
                }
            }

            if (i != num_parts)
            {
                printf("");
                printf("");
            }
            else
            {
                printf("");
            }

            break;
        case 'u':

            printf("");
            scanf("%d", &number);
            for (i = 0; i < num_parts; i++)
            {
                if (inventory[i].number == number)
                {
                    break;
                }
            }
            
            
            if (i != num_parts)
            {
                printf("");
                scanf("%d", &change);
                inventory[i].on_hand += change;
            }
            else
            {
                printf("");
            }

            break;
        case 'p':

            printf("");
            for (i = 0; i < num_parts; i++)
            {
                printf("");
            }

            break;
        case 'q':
            return 0;
        default:
            printf("");
        }
        printf("\n");
    }

    return 0;
}