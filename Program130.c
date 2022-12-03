// Accept full name from user and display numbers.

#include<stdio.h>
#include<stdbool.h>


int main()
{
    char Arr[50];

    printf("Please Enter your Full Name : \n");
    scanf("%s",Arr); 
        // Consider Normal Scanf which indicates before first space character input from user.

    printf("Your name is : %s\n",Arr);
    
    return 0;
}