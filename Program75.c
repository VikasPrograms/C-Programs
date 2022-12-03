// Accept from user N numbers and Display Numbers of Even number.

#include<stdio.h>
#include<stdlib.h>          // for malloc function

// Step 5 : Perform the operation on array
int CountEvenOdd(int Arr[], int iSize)
{
    int iCnt = 0;
    int iEvenCnt = 0;

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        if((Arr[iCnt] % 2) == 0)
        {
            iEvenCnt++;
        }
    }
    printf("Number of even elements are : %d\n",iEvenCnt);
    printf("Number of odd elements are : %d\n",iSize - iEvenCnt);
}

int main()
{
    int *ptr = NULL; 
    int iLength = 0, i = 0;

    // Step 1 : accept the size of array
    printf("Enter the number of elements : \n");
    scanf("%d",&iLength);

    // Step 2 : Allocate memory for array
    ptr = (int *)malloc(iLength * sizeof(int));

    // Step 3 : Accept the elements of array
    printf("Enter the elements : \n");
    
    for(i = 0; i < iLength; i++)
    {
        scanf("%d",&ptr[i]);
    } 

    // Step 4 : Call the function
    CountEvenOdd(ptr, iLength);

    // Step 6 : Deallocate the memory
    free(ptr);

    return 0;
}