// Accept string from users to convert complete Upper case.
// ASCII value upper character or lower character difference is 32 (122 - 90).

// Input : vikas        Output : VIKAS
// Input : VIKAS        Output : VIKAS
// Input : Vikas        Output : VIKAS

#include<stdio.h>

void struprX(char *str)
{
    while(*str != '\0')
    {
        if((*str >= 'a') && (*str <= 'z'))
        {
            *str = *str - 32;
        }
        str++;
    }
}

int main()
{
    char Arr[20];

    printf("Please enter string \n");
    scanf("%[^'\n]s",Arr);          // special scanf

    struprX(Arr);
    printf("String after conversion is : %s\n",Arr);

    return 0;
}