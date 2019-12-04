#include <stdio.h>
#include <stdlib.h>

#define STACK_SIZE 100
char contents[STACK_SIZE];
int top = 0;

int main(void)
{
    char input;

    while ((input = getchar()) != '\n') {
        contents[top++] = input;
    }
    printf("Reversal is:");
    while (top != 0) {
        printf("%c", contents[--top]);
    }
    putchar('\n');

    return 0;
}
