// Accept String from user and cheak input first character then break loop and Display is present or not present.


#include<stdio.h>
#include<stdbool.h>

bool Check(char *str,char ch)
{

    while(*str != '\0')
    {
        if(*str == ch)
        {
            break;
        }
        str++;
    }
    if(*str == '\0')
    {
        return false;
    }
    else
    {
        return true;
    }
}

int main()
{
    char Arr[20];
    char cValue = '\0';
    bool bRet = false;

    printf("Please enter string\n");
    scanf("%[^'\n']s",Arr);

    printf("Please Enter the Character : \n");
    scanf("  %c",&cValue);                   // Space before %c. then solve the problem

    bRet = Check(Arr, cValue);
    if(bRet == true)
    {
        printf("Character is present in the string \n");
    }
    else
    {
        printf("Character is not present in the string \n");
    }

    return 0;
}