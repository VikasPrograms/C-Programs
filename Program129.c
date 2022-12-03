// Accept one character from user and display it is a Digit or not.


#include<stdio.h>
#include<stdbool.h>

bool CheckDigit(char ch)
{
    if((ch >= '0') && (ch <= '9'))       // Change in ASCII character.
//    if((ch >= 48) && (ch <= 57))       // Change in ASCII Decimal numbers.
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    char cValue = '\0';
    bool bRet = false;

    printf("Please enter one character : \n");
    scanf("%c",&cValue);

    bRet = CheckDigit(cValue);
    if(bRet == true)
    {
        printf("%c is a Digit \n",cValue);
    }
    else
    {
        printf("%c is not a Digit \n",cValue);
    }
    
    return 0;
}