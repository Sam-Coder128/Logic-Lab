////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Program      : Range Sum Demo
// Input        : Starting and ending integers entered by user
// Output       : Prints sum of all numbers in the given range
// Methods      : RangeSum(), printf(), scanf()
// Description  : Demonstrates summation of numbers in a range in C.
// Author       : Samruddh Shivkumar Birajdar
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

// Time Complexity : O(N)
// Because it adds every number in the range once.

#include<stdio.h>

int RangeSum(int iStart, int iEnd)
{
    int iSum = 0;
    for(int i = iStart; i <= iEnd; i++)
    {
        iSum += i;
    }
    return iSum;
}

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Application : Calculates sum of all numbers in the given range.
//
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

int main()
{
    int iValue1 = 0, iValue2 = 0, iRet = 0;

    printf("Enter starting point:");
    scanf("%d",&iValue1);

    printf("Enter ending point:");
    scanf("%d",&iValue2);

    iRet = RangeSum(iValue1, iValue2);

    printf("Addition is %d", iRet);

    return 0;
}
