////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Program      : Print Alternating Case Alphabets Demo
// Input        : 4 4
// Output       : 
// A B C D
// a b c d
// A B C D
// a b c d
// Description  : Prints alternating uppercase and lowercase alphabets row-wise
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
                printf("%c\t",'A' + j - 1);
            }
            else
            {
                printf("%c\t",'a' + j - 1);
            }
        }
        printf("\n");
    }
}

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Application : Prints alternating case alphabets.
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
