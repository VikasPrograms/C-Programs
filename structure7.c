#include<stdio.h>

struct Demo
{
    int A;
    intB;
};

struct Hello
{
    int C;
    float D;
    struct Demo dobj;
};

int main()
{
    struct Hello hobj;

    hobj.C = 11;
    hobj.D = 10.9;
    hobj.dobj.A = 21;
    hobj.dobj.B = 51;
    return 0;

}