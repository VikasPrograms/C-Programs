// Problems on Square Pattern Printing.
// ow number and column numbers are different.

/*
    Row = 6
    Col = 6

    Output :    $   *   *   *   *   $
                $   *   *   *   *   $
                $   *   *   *   *   $
                $   *   *   *   *   $
                $   *   *   *   *   $
                $   *   *   *   *   $
*/              

#include<stdio.h>

void Display(int iRow, int iCol)
{
    int i = 0, j = 0;

    if(iRow != iCol)            // Filter
    {
        printf("Row number and column numbers are different \n");
        return;
    }

    for(i = 1; i <= iRow; i++)
    {
        for(j = 1; j <= iCol; j++)
        {            
            if((j == 1) || (j == iCol))
            {
                printf("$\t");
            }
            else
            {
                printf("*\t");
            }
        }
        printf("\n");
    }
}

int main()
{
    int iValue1 = 0, iValue2 = 0;

    printf("Enter number of Rows : ");
    scanf("%d",&iValue1);

    printf("Enter number of Columns : ");
    scanf("%d",&iValue2);

    Display(iValue1, iValue2);

    return 0;
}