// Accept full name from user and display numbers.

#include<stdio.h>
#include<stdbool.h>


int main()
{
    char Arr[50];

    printf("Please Enter your Full Name : \n");
    //scanf("%s",Arr);
    scanf("%[^'\n']s",Arr);     // ^ = is Bitwise operator
        // Consider Special scanf which indicates all character input from user.

    printf("Your name is : %s\n",Arr);
    
    return 0;
}