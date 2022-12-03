#include<stdio.h>
//11 mulachi chappal
//21 mulichi chappal
//51 aaichi chappal
//101 wadilanchi chappal
int main()
{
    int iToken = 0;

    printf("Enter your token number\n");
    scanf("%d",&iToken);

    switch(iToken)
    {
        case 11:
            printf("mulachi chappal milali\n");
            break;
        case 21:
            printf("mulichi chappal milali\n");
            break;
        case 51:
            printf("aaichi chappal milali\n");
            break;
        case 101:
            printf("wadilanchi chappal milali\n");
            break;
        default:
            printf("Sorry asa token nahiye...\n");
            break;

    }

    return 0;
}