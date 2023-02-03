// Problems on Recursion.
// Accept String from user and Display count the character of string.

// Input = Vikas                    Output =    5
// Input = Bade Vikas Vasudeo       Output =    18 (Space Count)

#include<stdio.h>

int strlenR(char *str)
{
    static int iCnt = 0;

    if(*str != '\0')
    {
        iCnt++;
        str++;
        strlenR(str);
    }
    return iCnt;
}

int main()
{
    char Arr[20];
    int iRet = 0;

    printf("Enter String : \n");
    scanf("%[^'\n]s",Arr);

    iRet = strlenR(Arr);
    printf("String Length is : %d\n",iRet);

    return 0;
}