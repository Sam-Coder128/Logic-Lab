////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Program      : Range Sum Demo
// Input        : Starting and ending integers entered by user
// Output       : Prints sum of all numbers in the given range
// Methods      : RangeSum(), printf(), scanf()
// Description  : Demonstrates summation of numbers in a range with validation in C.
// Author       : Samruddh Shivkumar Birajdar
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

// Input : 23 30
// Output : 212
// Input : 10 18
// Output : 126
// Input : -10 2
// Output : Invalid range
// Input : 90 18
// Output : Invalid range

#include<stdio.h>

int RangeSum(int iStart, int iEnd)
{
    if(iStart > iEnd || iStart < 0)
    {
        return -1;
    }

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

    iRet = RangeSum(iValue1,iValue2);

    if(iRet == -1)
        printf("Invalid range");
    else
        printf("Addition is %d",iRet);

    return 0;
}

/*
Time Complexity : O(N)
Explanation:
N = Total numbers in the range.
Every number is added once.
*/
