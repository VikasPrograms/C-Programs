// Accept string from users and count the white spaces.
// ASCII value upper character or lower character difference is 32 (122 - 90).

// Input : Vikas Vasudeo Bade        Output : 2
// Input : My Name is Vikas vasudeo bade        Output : 5

#include<stdio.h>

int CountWhiteSpace(char *str)
{
    int iCnt = 0;

    while(*str != '\0')
    {
        if(*str == ' ')
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
    int iRet = 0;

    printf("Please enter string \n");
    scanf("%[^'\n]s",Arr);          // special scanf

    iRet = CountWhiteSpace(Arr);
    printf("Number of white spaces is : %d\n",iRet);

    return 0;
}