#include<stdio.h>
#define MAX 10

int Add(int No1, int No2)
{
    int Ans ;

    Ans = No1 + No2 + MAX;

    printf("Addition of two numbers is %d",Ans);

    return 0;
}