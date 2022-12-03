#include<stdio.h>

#pragma pach(1)     //1   2   4   8   16
//preprocessor inform to compiler

struct Demo
{
    int i;      //4
    char ch;    //1
    float f;    //4
    float d;   //4
};                      //13

int main()
{
    struct Demo dobj;

    printf("Size of the structure is : %d\n",sizeof(dobj));

    return 0;
}