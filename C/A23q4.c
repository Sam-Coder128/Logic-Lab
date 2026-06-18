////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Program      : Print Star Hash Pattern Demo
// Input        : 3 4
// Output       : 
// * # * #
// * # * #
// * # * #
// Description  : Prints alternating star and hash pattern
// Author       : Samruddh Shivkumar Birajdar
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

void Pattern(int iRow, int iCol)
{
    int i = 0, j = 0;

    for(i = 1; i <= iRow; i++)
    {
        for(j = 1; j <= iCol; j++)
        {
            if(j % 2 == 1)
            {
                printf("*\t");
            }
            else
            {
                printf("#\t");
            }
        }
        printf("\n");
    }
}

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Application : Prints star hash alternating pattern.
//
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

int main()
{
    int iRow = 0, iCol = 0;

    printf("Enter rows : ");
    scanf("%d",&iRow);

    printf("Enter cols : ");
    scanf("%d",&iCol);

    Pattern(iRow,iCol);

    return 0;
}
