#include<stdio.h>

char ToUpperX(char ch)
{

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