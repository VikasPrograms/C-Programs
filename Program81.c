// Accept the user N numbers and as well as one another number 
// and return the index in which occure first number.

#include<stdio.h>
#include<stdlib.h>

int CheckOccurance(int Arr[], int iSize, int iNo)
{
    int iCnt = 0;
    //      1          2          3
    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        if(Arr[iCnt] == iNo)        // 4
        {
            break;
        }
    }
    
    if(iCnt == iSize)
    {
        return -1;
    }
    else
    {
        return iCnt;
    }
}

int main()
{
    int *ptr = NULL; 
    int iLength = 0; 
    int i = 0; 
    int iValue = 0;
    int iRet = 0;

    printf("Enter the number of elements : \n");
    scanf("%d",&iLength);

    ptr = (int *)malloc(iLength * sizeof(int));

    printf("Enter the elements : \n");

    for(i = 0; i < iLength; i++)
    {
        scanf("%d",&ptr[i]);
    }

    printf("Enter the elements to find out the Occurance first number in index : \n");
    scanf("%d",&iValue);

    iRet = CheckOccurance(ptr, iLength, iValue);
    if(iRet == -1)
    {
        printf("There is no %d in the array at index\n",iValue);
    }
    else
    {
        printf("%d is occure in the array at index %d\n",iValue,iRet);
    }

    free(ptr);

    return 0;
}