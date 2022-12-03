// Accept string from users and same copied Capital case formate.

// Input : VikaS                Output : VIKAS
// Input : Marvellous           Output : MARVELLOUS

#include<stdio.h>

void strcpyCapX(char *src, char *dest)
{
    while(*src != '\0')
    {
        if((*src >= 'a') && (*src <= 'z'))
        {
            *dest = *src - 32;
        }
        else
        {
            *dest = *src;
        }
        src++;
        dest++;
    }
    *dest = '\0';
}

int main()
{
    char Arr[20];
    char Brr[20];

    printf("Please Enter String \n");
    scanf("%[^'\n']s",Arr);

    strcpyCapX(Arr, Brr);

    printf("Original String is ; %s\n",Arr);
    printf("Copied string is : %s\n",Brr);

    return 0;

}