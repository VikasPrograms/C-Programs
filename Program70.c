// Accept N numbers of users and perform N numbers of addition .

#include<stdio.h>

int main()
{
    int Arr[5];
    int iCnt = 0;

    printf("Enter the elemetns : \n");

    for(iCnt = 0; iCnt < 5; iCnt++)
    {
        scanf("%d",&Arr[iCnt]);
    }

    printf("Elements from array are : \n");

    for(iCnt = 0; iCnt < 5; iCnt++)
    {
        printf("%d\n",Arr[iCnt]);
    }

    return 0;
}
