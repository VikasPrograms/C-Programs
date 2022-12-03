// Accept one chatacter from user and display it is a Capital letter or not.


#include<stdio.h>
#include<stdbool.h>     

bool CheckSmall(char ch)
{
    if((ch >= 'A') && (ch <= 'Z'))        // Change in ASCII characters.
//    if((ch >= 65) && (ch <= 90))        // Change in ASCII decimal numbers 
    {
        return true;
    }
    else
    {
        return false;
    }

}

int main()
{
    char cValue = '\0';
    bool bRet = false;

    printf("Please enter one character : \n");
    scanf("%c",&cValue);

    bRet = CheckSmall(cValue);
    if(bRet == true)
    {
        printf("%c is a smallcase letter \n",cValue);
    }
    else
    {
        printf("%c is not a small case letter \n",cValue);
    }
    
    return 0;
}