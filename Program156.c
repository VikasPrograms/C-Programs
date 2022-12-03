// Accept string from users and same copied small case formate.
// Input : VikaS        Output : vikas
// Input : VIKAS        Output : vikas

#include<stdio.h>

void strcpySmallX(char *src, char *dest)
{
    while(*src != '\0')
    {
        if((*src >= 'A') && (*src <= 'Z'))
        {
            *dest = *src + 32;
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

    strcpySmallX(Arr, Brr);

    printf("Original String is ; %s\n",Arr);
    printf("Copied string is : %s\n",Brr);

    return 0;

}