////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Program      : Multiplication Table Demo
// Input        : Integer number entered by user
// Output       : Prints multiplication table up to 10
// Methods      : Table(), printf(), scanf()
// Description  : Demonstrates table generation with support for negative input in C.
// Author       : Samruddh Shivkumar Birajdar
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

// Input : 2
// Output : 2 4 6 8 10 12 14 16 18 20

// Input : 5
// Output : 5 10 15 20 25 30 35 40 45 50

// Input : -5
// Output : 5 10 15 20 25 30 35 40 45 50

#include<stdio.h>

void Table(int iNo)
{
    int iCnt = 0;

    if(iNo < 0)
        iNo = -iNo;

    for(iCnt = 1; iCnt <= 10; iCnt++)
        printf("%d ",iNo * iCnt);
}

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Application : Displays multiplication table of a user-entered number up to 10.
//
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

int main()
{
    int iValue = 0;

    printf("Enter number:");
    scanf("%d",&iValue);

    Table(iValue);

    return 0;
}
