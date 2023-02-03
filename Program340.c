// Problems on Recursion.           Tail Recursion.
// Accept String from user and Display next line character.

// Input = Vikas                    
// Output =     
//              Vikas
//              ikas
//              kas
//              as
//              s    

#include<stdio.h>

void Display(char *str)
{
    if(*str != '\0')
    {
        printf("%s\n",str);
        str++;
        Display(str);
    }
}
int main()
{
    char Arr[20];

    printf("Enter String : \n");
    scanf("%[^'\n']s",Arr);

    Display(Arr);

    return 0;
}