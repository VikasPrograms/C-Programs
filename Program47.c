// Problems on Number of Digit. We accept number from user in a decimal
// numbering system and we break that number into a single digits.
// Using while Loop.

/*
Input : 751         Output : 3
Input : 7515        Output : 4
Input : 75          Output : 2
Input : 7           Output : 1
*/

#include<stdio.h>

int CountDigits(int iNo)
{
    int iDigit = 0;
    int iCnt = 0;

    while(iNo != 0)
    {
        iDigit = iNo % 10;
        iNo = iNo / 10;
        iCnt++;
    }
    return iCnt;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Please Enter number : \n");
    scanf("%d", &iValue);

    iRet = CountDigits(iValue);

    printf("Number of digits are : %d\n",iRet);

    return 0;
}


/*
iNo = 751

iDigit = iNo % 10       =   1
iNo = iNo / 10          =   75

iDigit = iNo % 10       =   5
iNo =  iNo / 10         =   7

iDigit = iNo % 10       =   7
iNo = iNo / 10          =   0


while(iNo != 0)
{
    iDigit = iNo % 10;
    iNo = iNo / 10;
}
*/
