// Problems on Recursion.
// Accept String from user and Display Capital Character.

// Input = Vikas                    Output =    1
// Input = Bade Vikas Vasudeo       Output =    3

#include<stdio.h>

int SumCapitalCharR(char *str)
{
    static int iCnt = 0;

    if(*str != '\0')
    {
        if((*str >= 'A') && (*str <= 'Z'))
        {
            iCnt++;
        }
        str++;
        SumCapitalCharR(str);
    }
    return iCnt;
}

int main()
{
    char Arr[20];
    int iRet = 0;

    printf("Enter String : \n");
    scanf("%[^'\n]s",Arr);

    iRet = SumCapitalCharR(Arr);
    printf("String Length is : %d\n",iRet);

    return 0;
}