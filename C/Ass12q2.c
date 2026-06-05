////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Program      : Range Display Even Demo
// Input        : Starting and ending integers entered by user
// Output       : Prints all even numbers in the given range
// Methods      : RangeDisplayEven(), printf(), scanf()
// Description  : Demonstrates range display of even numbers in C.
// Author       : Samruddh Shivkumar Birajdar
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

// Time Complexity : O(N)
// Because it checks every number in the range once.

#include<stdio.h>

void RangeDisplayEven(int iStart, int iEnd)
{
    for(int i = iStart; i <= iEnd; i++)
    {
        if(i % 2 == 0)
            printf("%d ", i);
    }
}

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Application : Displays all even numbers in the given range.
//
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

int main()
{
    int iValue1 = 0, iValue2 = 0;

    printf("Enter starting point:");
    scanf("%d",&iValue1);

    printf("Enter ending point:");
    scanf("%d",&iValue2);

    RangeDisplayEven(iValue1, iValue2);

    return 0;
}
