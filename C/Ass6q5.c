////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Program      : Reverse Multiplication Table Demo
// Input        : Integer number entered by user
// Output       : Prints multiplication table in reverse order
// Methods      : TableRev(), printf(), scanf()
// Description  : Demonstrates reverse table generation with support for negative input in C.
// Author       : Samruddh Shivkumar Birajdar
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

// Input : 2
// Output : 20 18 16 14 12 10 8 6 4 2

// Input : 5
// Output : 50 45 40 35 30 25 20 15 10 5

// Input : -5
// Output : 50 45 40 35 30 25 20 15 10 5

#include<stdio.h>

void TableRev(int iNo)
{   
    int iCnt = 0;

    if(iNo < 0)
        iNo = -iNo;

    for(iCnt = 10; iCnt >= 1; iCnt--)
        printf("%d ",iNo * iCnt);

}

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Application : Displays multiplication table of a user-entered number in reverse order.
//
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

int main()
{
    int iValue = 0;

    printf("Enter number:");
    scanf("%d",&iValue);

    TableRev(iValue);

    return 0;
}
