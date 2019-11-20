#include <stdio.h>

int main()
{
    int score;
    // printf("Enter numerical grade:\n");
    // scanf("%d", &score);

    for ( score = 0; score <= 100; ++score)
    {
        if (score >= 0 && score <= 100)
    {
        switch (score / 10) //
        {
        case 0:
        case 1:

        case 2:

        case 3:

        case 4:

        case 5:
            printf("Letter grade:F\n");
            break;
        case 6:
            printf("Letter grade:D\n");
            break;
        case 7:
            printf("Letter grade:C\n");
            break;
        case 8:
            printf("Letter grade:B\n");
            break;
        case 9:
            printf("Letter grade:A\n");
            break;
        case 10:
            printf("Letter grade:A\n");
            break;

        
        }
    }
    else
        printf("grade must be between 0 and 100");
    }
    
    // if (score >= 0 && score <= 100)
    // {
    //     switch (score / 10) //
    //     {
    //     case 0:
    //     case 1:

    //     case 2:

    //     case 3:

    //     case 4:

    //     case 5:
    //         printf("Letter grade:F");
    //         break;
    //     case 6:
    //         printf("Letter grade:D");
    //         break;
    //     case 7:
    //         printf("Letter grade:C");
    //         break;
    //     case 8:
    //         printf("Letter grade:B");
    //         break;
    //     case 9:
    //         printf("Letter grade:A");
    //         break;
    //     case 10:
    //         printf("Letter grade:A");
    //         break;

        
    //     }
    // }
    // else
    //     printf("grade must be between 0 and 100");

    return 0;
}