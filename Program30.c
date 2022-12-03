// Display Summation of N number by using while loop from users input method.


#include<stdio.h>

int Summation(int iNo)
{
    int iSum = 0;
    int iCnt = 0;
    iCnt = 1;

    //      1        2        3
    while(iCnt <= iNo)
    {
        iSum = iSum + iCnt;     // 4
        iCnt++;
    }
    return iSum;
}

int main()
{
    int iValue = 0;
    int iRet = 0;
    

    printf("Enter the value : \n");
    scanf("%d",&iValue);

    iRet = Summation(iValue);

    printf("Summation is : %d\n",iRet);
    
    return 0;
}