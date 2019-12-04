#include <stdbool.h> /* C99 only */
#include <stdio.h>
#include <stdlib.h>

#define STACK_SIZE 100

/* external variables */
char contents[STACK_SIZE];
int top = 0;
void stack_overflow(void)
{
    printf("Stack overflow\n");
    exit(EXIT_FAILURE);
}
void stack_underflow(void)
{
    printf("Stack underflow\n");
    exit(EXIT_FAILURE);
}
void make_empty(void)
{
    top = 0;
}
bool is_empty(void)
{
    return top == 0;
}
bool is_full(void)
{
    return top == STACK_SIZE;
}
void push(char ch)
{
    if (is_full())
        stack_overflow();
    else
        contents[top++] = ch;
}

char pop(void)
{
    if (is_empty())
        stack_underflow();
    else
        return contents[--top];

    return '\0'; /* prevents compiler warning due to stack_underflow() call */
}

int main(void)
{
    char ch,temp;
	int n = 0;
	printf("Enter parenteses and/or brance:");
	while ((ch = getchar()) != '\n')
	{
		if (ch == '[' || ch == '{')
			push(ch);
		else if (ch == ']' || ch == '}')
		{
			temp = contents[--top];
			if (ch == ']'&& temp != '[')
			{
				n = 1;
				printf("ch:%c   temp:%c\n", ch, temp);
			}
			else if (ch == '}'&& temp != '{')
				n = 1;
		}
	}
	if (n == 1)
		printf("错误\n");
	else
		printf("正确\n");

    return 0;
}
