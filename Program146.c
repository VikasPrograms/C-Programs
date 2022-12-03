// Accept string from users Lower toggle to convert Upper toggle.
// ASCII value upper character or lower character difference is 32 (122 - 90).


// Input : m        Output : M
// Input : k        Output : K
// Input : N        Output : N


#include<stdio.h>

char ToUpperX(char ch)
{
    if((ch >= 'a') && (ch <= 'z'))
    {
        return ch - 32;     
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

    cRet = ToUpperX(cValue);
    printf(" Character in the Upper case is : %c\n",cRet);

    return 0;
}