#include<stdio.h>

//Function Defination
void Fun ()
{
    printf("Inside fun\n");
}

int main()
{
    Fun();  //Function call

    void (*fptr)();
    //fpter is a pointer which
    //points to the function
    //that function accepts nothing
    //and that function returns nothing.

    fptr = Fun;

    fptr();
    
    int (*fptr1)(int,int);
    fptr1 = Addition;

    ret = Addition(10,11);
    printf("Addition is : %d\n",ret);

    ret = fptr1(10,11);
    printf("Addition is : %d\n",ret);

    return 0;
}        