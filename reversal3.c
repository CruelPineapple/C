#include <stdio.h>

int main(void)
{
	char input[100], ch;
	int i = 0;
	printf("Enter a message:");
	while ((ch = getchar()) != '\n')
	{
		input[i] = ch;
		i++;
	}
	printf("Reversal is:");
	for (; i >= 0; i--)
	{
		printf("%c", input[i]);
	}
	printf("\n");
	
	return 0;
}