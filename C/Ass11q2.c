////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Program      : Range Display Even Demo
// Input        : Starting and ending integers entered by user
// Output       : Prints all even numbers in the given range
// Methods      : RangeDisplayEven(), printf(), scanf()
// Description  : Demonstrates range display of even numbers with validation in C.
// Author       : Samruddh Shivkumar Birajdar
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

// Input : 23 35
// Output : 24 26 28 30 32 34
// Input : 10 18
// Output : 10 12 14 16 18
// Input : 10 10
// Output : 10
// Input : -10 2
// Output : -10 -8 -6 -4 -2 0 2
// Input : 90 18
// Output : Invalid range

#include<stdio.h>

void RangeDisplayEven(int iStart, int iEnd)
{
    if(iStart > iEnd)
    {
        printf("Invalid range");
        return;
    }

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

    RangeDisplayEven(iValue1,iValue2);

    return 0;
}

/*
Time Complexity : O(N)
Explanation:
N = Total numbers between Start and End.
Each number is checked once.
*/
