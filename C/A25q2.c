////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Program      : Print Even Odd Rows Demo
// Input        : 4 5
// Output       : 
// 2 4 6 8 10
// 1 3 5 7 9
// 2 4 6 8 10
// 1 3 5 7 9
// Description  : Prints even numbers in odd rows and odd numbers in even rows
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
                printf("%d\t", j*2);
            }
            else
            {
                printf("%d\t", j*2 - 1);
            }
        }
        printf("\n");
    }
}

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Application : Prints even and odd rows pattern.
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
