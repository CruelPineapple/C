#include<stdio.h>
#include<stdlib.h>
#include<time.h>

#define N 10

int main()
{
    int i,j;
    char a[N][N];

    for ( i = 0; i < N; ++i)
    {
        for ( j = 0; i < N; ++j)
        {
            a[i][j]='.';
        }
        
    }

    a[0][0]='A';
    
    srand((unsigned)time(NULL));
    int way;

    i=0;
    j=0;

    for (int w = 0; w < 25; )
    {
        way=rand() % 4;

        if (way==0)
        {
            if (i-1<0 || a[i-1][j] !='.')
            {
                continue;
            }
            else if(a[i-1][j] == '.')
            {
                a[i-1][j]='B' + w;
                w++;
                i--;
                continue;
            }
        }

        if (way==1)
        {
            if (i+1>9 || a[i+1][j] != '.')
            {
                continue;
            }
            else if(a[i+1][j] == '.')
            {
                a[i+1][j]='B'+w;
                w++;
                i++;
                continue;
            }
            
        }
        
        if (way==2)
        {
            if (j-1<0 || a[i][j-1] != '.')
            {
                continue;
            }
            else if(a[i][j-1] == '.')
            {
                a[i][j-1]='B'+w;
                w++;
                j++;
                continue;
            }
            
        }
        
        if (way==3)
        {
            if (j+1>9 || a[i][j+1] != '.')
            {
                continue;
            }
            else if(a[i][j+1] == '.')
            {
                a[i][j-1]='B'+w;
                w++;
                j++;
                continue;
            }
            
        }
        
        
    }

    for ( i = 0; i < N; i++)
    {
        for ( j = 0; j < N; j++)
        {
            printf("%c",a[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}