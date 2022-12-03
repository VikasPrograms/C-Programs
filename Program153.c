// Accept string from users and same copied case formate.

#include<stdio.h>

void strcpyX(char *src, char *dest)
{
    while(*src != '\0')
    {
        *dest = *src;

        src++;
        dest++;
    }
    *dest = '\0';       // Is our task to write '\0'.
}

int main()
{
    char Arr[20];
    char Brr[20];

    printf("Please Enter String \n");
    scanf("%[^'\n']s",Arr);

    strcpyX(Arr, Brr);

    printf("Original String is ; %s\n",Arr);
    printf("Copied string is : %s\n",Brr);

    return 0;
}