////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Program      : Range Sum Even Demo
// Input        : Starting and ending integers entered by user
// Output       : Prints sum of all even numbers in the given range
// Methods      : RangeSumEven(), printf(), scanf()
// Description  : Demonstrates summation of even numbers in a range in C.
// Author       : Samruddh Shivkumar Birajdar
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

// Time Complexity : O(N)
// Because it checks every number in the range once and adds even numbers.

#include<stdio.h>

int RangeSumEven(int iStart, int iEnd)
{
    int iSum = 0;
    for(int i = iStart; i <= iEnd; i++)
    {
        if(i % 2 == 0)
            iSum += i;
    }
    return iSum;
}

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Application : Calculates sum of all even numbers in the given range.
//
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

int main()
{
    int iValue1 = 0, iValue2 = 0, iRet = 0;

    printf("Enter starting point:");
    scanf("%d",&iValue1);

    printf("Enter ending point:");
    scanf("%d",&iValue2);

    iRet = RangeSumEven(iValue1, iValue2);

    printf("Addition is %d", iRet);

    return 0;
}
