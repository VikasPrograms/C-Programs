#include<stdio.h>

struct Demo1
{
    int no;
    struct Demo1 next;
};

struct Demo2
{
    int no;
    struct Demo2 *next;
};

int main()
{
    struct Demo1 obj1;
    struct Demo2 obj2;

    return 0;
}