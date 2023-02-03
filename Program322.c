// Problems on Recursion.
//  Display :   *   *   *   *

#include<stdio.h>

void DisplayI()
{
    int iCnt = 1;       // Storage Class is Auto

    while(iCnt <= 4)
    {
        printf("*\t");
        iCnt++;
    }
}

void DisplayR()
{
    int iCnt = 1;       // Storage Class is static

    if(iCnt <= 4)
    {
        printf("*\t");
        iCnt++;
        DisplayR();         // Recursive Call
    }
}

int main()
{
    DisplayR();

    return 0;
}