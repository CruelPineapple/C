#include <stdio.h>
#include <string.h>

int main()
{
    char smallest_word[21], largest_word[21], input[21];
    printf("Enter word: ");
    scanf("%s", input);
    strcpy(smallest_word, input);
    strcpy(largest_word, input);
    do {
        printf("Enter word: ");
        scanf("%s", input);
        if (strcmp(smallest_word, input) > 0)
            strcpy(smallest_word, input);
        if (strcmp(largest_word, input) < 0)
            strcpy(largest_word, input);
    } while (strlen(input) != 4);
    printf("Smallest word: %s\n", smallest_word);
    printf("Largest word: %s\n", largest_word);
    return 0;
}