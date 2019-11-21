#include<stdio.h>

int main()
{
    char input[1000];
    
    fgets(input,999,stdin);
    for (int i = 0; i < 999; ++i)
    {
        switch (input[i])
        {
        case 65:
            
        case 66:
            
        case 67:
            input[i]=50;
            break;
        case 68:
            
        case 69:
            
        case 70:
            input[i]=51;
            break;
        case 71:
            
        case 72:
            
        case 73:
            input[i]=52;
            break;
        case 74:
            
        case 75:
            
        case 76:
            input[i]=53;
            break;
        case 77:
            
        case 78:
            
        case 79:
            input[i]=54;
            break;
        case 80:
            
        case 81:
            
        case 82:
            
        case 83:
            input[i]=55;
            break;
        case 84:
            
        case 85:
            
        case 86:
            input[i]=56;
            break;
        case 87:
            
        case 88:
            
        case 89:
            
        case 90:
            input[i]=57;
            break;
        
        
        default:
            break;
        }
        
    }
    printf("%s",input);
    return 0;
}