// Display Marvellous Name and Number Sequence wise
// using while loop from user input method.

#include<stdio.h>

void Display(int iValue)
{
    int iCnt = 0;

    iCnt = 1;
    while(iCnt <= iValue) 
    {
        printf("Marvellous : %d\n",iCnt);
        iCnt++;
    }

}

int main()
{
    int iNo = 1;
    printf("Enter the iteration of number : ");
    scanf("%d",&iNo);

    Display(iNo);

    return 0;
}