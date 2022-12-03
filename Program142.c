// Accept String from user and display all Small letters count.
// Program141 : solution of before Code.


#include<stdio.h>

int CountFrequency(char *str,char ch)
{
    int iCnt = 0;

    while(*str != '\0')
    {
        if(*str == ch)
        {
            iCnt++;
        }
        str++;
    }
    return iCnt;
}

int main()
{
    char Arr[20];
    char cValue = '\0';
    int iRet = 0;

    printf("Please enter string\n");
    scanf("%[^'\n']s",Arr);

    printf("Please Enter the Character : \n");
    scanf(" %c",&cValue);                   // Space before %c. then solve the problem

    iRet = CountFrequency(Arr, cValue);
    printf("Frequency of a letter is : %d\n",iRet);

    return 0;
}