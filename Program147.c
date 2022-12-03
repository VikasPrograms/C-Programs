// Accept string from users Upper toggle to convert Lower toggle.
// ASCII value upper character or lower character difference is 32 (122 - 90).

// Input : V        Output : v
// Input : p        Output : p
// Input : B        Output : b

#include<stdio.h>

char ToLowerX(char ch)
{
    if((ch >= 'A') && (ch <= 'Z'))
    {
        return ch + 32;
    }
    else
    {
        return ch;
    }
}

int main()
{
    char cValue = '\0';
    char cRet = '\0';

    printf("Enter the character \n");
    scanf("%c",&cValue);

    cRet = ToLowerX(cValue);
    printf(" Character in the Upper case is : %c\n",cRet);

    return 0;
}