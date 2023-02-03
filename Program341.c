// Problems on Recursion.       Head Recursion.
// Accept String from user and Display next line character.

// Input = Vikas                    
// Output =     
//              s    
//              as
//              kas
//              ikas




#include<stdio.h>

void Display(char *str)
{
    if(*str != '\0')
    {
        Display(++str);
        printf("%s\n",str);
    }
}
int main()
{
    char Arr[20];

    printf("Enter String : \n");
    scanf("%[^'\n]s",Arr);

    Display(Arr);

    return 0;
}