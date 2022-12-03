// Accept string from users to convert complete lower case.
// ASCII value upper character or lower character difference is 32 (122 - 90).

// Input : vikas        Output : vikas
// Input : VIKAS        Output : vikas
// Input : Vikas        Output : vikas

#include<stdio.h>

void strlwrX(char *str)
{
    while(*str != '\0')
    {
        if((*str >= 'A') && (*str <= 'Z'))
        {
            *str = *str + 32;
        }
        str++;
    }
}

int main()
{
    char Arr[20];

    printf("Please enter string \n");
    scanf("%[^'\n]s",Arr);          // special scanf

    strlwrX(Arr);
    printf("String after conversion is : %s\n",Arr);

    return 0;
}