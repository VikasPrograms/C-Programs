/*

>>>>> Steps to folow while programming :-

Step 1  Understand the problem statement
Step 2  Write the algorithm
Step 3  Decide the programming language
Step 4  Write the program
Step 5  Test the program

*/

//__________________________________________________________________________________
// Problem statement : Accept number form user and check whether it is divisible by 5 or not
//
// Input : 23
// Output : 23 is not divisible by 5
//
// Input : 25
// Output : 25 is divisible by 5
//
// Input : -20
// Output : -20 is not divisible by 5
//_______________________________________________________________________________



/*
Algorithm:-

    START
            Accept number from user as NO
            Divide that No by 5 and check the value of remainder
            If the value is 0 then
                display as NO is divisible by 5
            Otherwise
                display as No is not divisible by 5
    END
*/


//________________________________________________________________________________________________________

#include<stdio.h>

/*
    Function Name : DivisibleByFive
    Description :   To check whether input is divisible by 5 or not
    Input :         Integer
    Output :        Integer
    Author :        Piyush Manohar Khairnar 
    Date :          12/10/2022
*/

int DivisibleByFive(int iNo)
{
    int iAns = 0;
    iAns = iNo % 5;     // % mode operator

    if(iAns == 0)       // == Comparison / Equal Equal to operator
    {                   // != Not equal to operator
        return 1;
    }
    else
    {
        return 0;
    }
}

// Entry point of the application

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter number : \n");
    scanf("%d",&iValue);

    iRet = DivisibleByFive(iValue);
    if(iRet == 0)
    {
        printf("%d is not divisible by 5\n",iValue);
    }
    else
    {
        printf("%d is divisible by 5\n",iValue);
    }
    return 0;
}


/*
    Result
        Input : 25
        Output : 25 is divisible by 5
*/