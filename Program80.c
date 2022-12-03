// Accept the user N numbers and as well as one another number 
// and check whether that number in list yes or not.


#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

bool CheckOccurance(int Arr[], int iSize, int iNo)
{
    int iCnt = 0;
    //      1         2           3
    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        if(Arr[iCnt] == iNo)        // 4
        {
            break;
        }
    }
    
    if(iCnt == iSize)
    {
        return false;
    }
    else
    {
        return true;
    }
}

int main()
{
    int *ptr = NULL; 
    int iLength = 0; 
    int i = 0; 
    int iValue = 0;
    bool iRet = false;

    printf("Enter the number of elements : \n");
    scanf("%d",&iLength);

    ptr = (int *)malloc(iLength * sizeof(int));

    printf("Enter the elements : \n");

    for(i = 0; i < iLength; i++)
    {
        scanf("%d",&ptr[i]);
    }

    printf("Enter the elements to find out the Occurance : \n");
    scanf("%d",&iValue);

    iRet = CheckOccurance(ptr, iLength, iValue);
    if(iRet == true)
    {
        printf("%d is occure in the array\n",iValue);
    }
    else
    {
        printf("There is no %d in the array\n",iValue);
    }

    free(ptr);

    return 0;
}