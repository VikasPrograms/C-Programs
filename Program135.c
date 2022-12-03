// Accept String from user and display number of character count.

#include<stdio.h>

int strlenX(char *str)
{
    int iCnt = 0, i = 0;

    for(i = 0; str[i] != '\0'; i++)     // Using while loop
    {
        iCnt++;
    }
    return iCnt;
}

int main()
{
    char Arr[20];
    int iRet = 0;

    printf("Please Enter String : \n");
    scanf("%[^'\n']s",Arr);

    iRet = strlenX(Arr);    // strlenX(100);

    printf("Number of characters are %d \n",iRet);

    return 0;
}