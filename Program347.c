// Problems on Recursion.
// Display Addtion of Array.

#include<stdio.h>

int DisplayR(int Arr[], int iSize)
{
    static int iCnt = 0;
    static int iSum = 0;

    if(iCnt < iSize)
    {
        iSum = iSum + Arr[iCnt];
        iCnt++;
        DisplayR(Arr, iSize);
    }
    return iSum;
}
int main()
{
    int iRet = 0;
    int Brr[5] = {10,20,30,40,50};

    iRet = DisplayR(Brr, 5);
    printf("Addition of Array is : %d\n",iRet);

    return 0;
}