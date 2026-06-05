////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Program      : Range Display Reverse Demo
// Input        : Starting and ending integers entered by user
// Output       : Prints all numbers in the given range in reverse order
// Methods      : RangeDisplayRev(), printf(), scanf()
// Description  : Demonstrates reverse range display in C.
// Author       : Samruddh Shivkumar Birajdar
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

// Time Complexity : O(N)
// Because it displays all numbers from iEnd to iStart once.

#include<stdio.h>

void RangeDisplayRev(int iStart, int iEnd)
{
    for(int i = iEnd; i >= iStart; i--)
    {
        printf("%d ", i);
    }
}

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Application : Displays all numbers in the given range in reverse order.
//
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

int main()
{
    int iValue1 = 0, iValue2 = 0;

    printf("Enter starting point:");
    scanf("%d",&iValue1);

    printf("Enter ending point:");
    scanf("%d",&iValue2);

    RangeDisplayRev(iValue1, iValue2);

    return 0;
}
