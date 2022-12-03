// Display Marvellous Name and Number Sequence wise 
// using for loop from user input method.

#include<stdio.h>

void Display(int iValue)
{
    int iCnt = 0;

    for(iCnt = 1; iCnt <= iValue; iCnt++)
    {
        printf("Marvellous : %d\n",iCnt);
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