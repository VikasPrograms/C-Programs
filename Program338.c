// Problems on Recursion.
// Accept String from user and Display Small Character.

// Input = Vikas                    Output =    4
// Input = Bade Vikas Vasudeo       Output =    13

#include<stdio.h>

int SumSmallCharR(char *str)
{
    static int iCnt = 0;

    if(*str != '\0')
    {
        if((*str >= 'a') && (*str <= 'z'))
        {
            iCnt++;
        }
        str++;
        SumSmallCharR(str);
    }
    return iCnt;
}

int main()
{
    char Arr[20];
    int iRet = 0;

    printf("Enter String : \n");
    scanf("%[^'\n]s",Arr);

    iRet = SumSmallCharR(Arr);
    printf("String Length is : %d\n",iRet);

    return 0;
}