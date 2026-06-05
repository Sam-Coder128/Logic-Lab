////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Program      : Range Display Demo
// Input        : Starting and ending integers entered by user
// Output       : Prints all numbers in the given range
// Methods      : RangeDisplay(), printf(), scanf()
// Description  : Demonstrates range display in C.
// Author       : Samruddh Shivkumar Birajdar
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

// Time Complexity : O(N)
// Because it displays all numbers from iStart to iEnd once.

#include<stdio.h>

void RangeDisplay(int iStart, int iEnd)
{
    for(int i = iStart; i <= iEnd; i++)
    {
        printf("%d ", i);
    }
}

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Application : Displays all numbers in the given range.
//
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

int main()
{
    int iValue1 = 0, iValue2 = 0;

    printf("Enter starting point:");
    scanf("%d",&iValue1);

    printf("Enter ending point:");
    scanf("%d",&iValue2);

    RangeDisplay(iValue1, iValue2);

    return 0;
}
