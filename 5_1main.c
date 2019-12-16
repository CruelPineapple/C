#include "lab51.h" // 请不要删除本行头文件，否则检查不通过
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    char code;
    struct part iGentory[MAX_PARTS];
    int num_parts = 0;

    for (;;) {
        printf("Enter operation code: ");
        scanf(" %c", &code);
        while (getchar() != '\n')
            ;
        switch (code) {
        case 'i':
            insert(iGentory, &num_parts);
            break;
        case 's':
            search(iGentory, num_parts);
            break;
        case 'u':
            update(iGentory, num_parts);
            break;
        case 'p':
            print(iGentory, num_parts);
            break;
        case 'q':
            return 0;
        default:
            printf("Illegal code\n");
        }
        printf("\n");
    }
}