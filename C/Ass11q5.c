////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Program      : Range Display Reverse Demo
// Input        : Starting and ending integers entered by user
// Output       : Prints all numbers in the given range in reverse order
// Methods      : RangeDisplayRev(), printf(), scanf()
// Description  : Demonstrates reverse range display with validation in C.
// Author       : Samruddh Shivkumar Birajdar
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

// Input : 23 35
// Output : 35 34 33 32 31 30 29 28 27 26 25 24 23
// Input : 10 18
// Output : 18 17 16 15 14 13 12 11 10
// Input : 10 10
// Output : 10
// Input : -10 2
// Output : 2 1 0 -1 -2 -3 -4 -5 -6 -7 -8 -9 -10
// Input : 90 18
// Output : Invalid range

#include<stdio.h>

void RangeDisplayRev(int iStart, int iEnd)
{
    if(iStart > iEnd)
    {
        printf("Invalid range");
        return;
    }

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

    RangeDisplayRev(iValue1,iValue2);

    return 0;
}

/*
Time Complexity : O(N)
Explanation:
N = Total numbers between Start and End.
The range is traversed once in reverse direction.
*/
