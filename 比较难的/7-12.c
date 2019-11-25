#include <stdio.h>



int main()
{
    char a;
    double num1,num2;

    scanf("%lf",&num1);
    
    while (1)
    {
        a=getchar();
        if (a=='\n')
        {
            break;
        }
        else
        {
            scanf("%lf",&num2);
            switch (a)
            {
            case '+':
                num1=num1+num2;
                break;
            case '-':
                num1=num1-num2;
                break;
            case '*':
                num1=num1*num2;
                break;
            case '/':
                num1=num1/num2;
                break;
            
            }
        }
        
    }
    
    printf("%.1lf",num1);

    return 0;
}