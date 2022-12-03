// Accept string from users and display lower or upper case string.
// Input : Vikas        Output : vIKAS
// Input : vIKAS        Output : Vikas

#include<stdio.h>

void strcpyToggleX(char *src, char *dest)
{
    while(*src != '\0')
    {
        if((*src >= 'A') && (*src <= 'Z'))
        {
            *dest = *src + 32;
        }
        else if((*src >= 'a') && (*src <= 'z'))
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

    strcpyToggleX(Arr, Brr);

    printf("Original String is ; %s\n",Arr);
    printf("Copied string is : %s\n",Brr);

    return 0;

}