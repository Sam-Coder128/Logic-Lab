////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Program      : Print Positive Negative Rows Demo
// Input        : 5 5
// Output       : 
// 1 2 3 4 5
// -1 -2 -3 -4 -5
// 1 2 3 4 5
// -1 -2 -3 -4 -5
// 1 2 3 4 5
// Description  : Prints alternating positive and negative rows
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
            if(i % 2 == 1)
            {
                printf("%d\t", j);
            }
            else
            {
                printf("%d\t", -j);
            }
        }
        printf("\n");
    }
}

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Application : Prints alternating positive and negative rows.
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
