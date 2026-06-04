////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Program      : Range Sum Even Demo
// Input        : Starting and ending integers entered by user
// Output       : Prints sum of all even numbers in the given range
// Methods      : RangeSumEven(), printf(), scanf()
// Description  : Demonstrates summation of even numbers in a range with validation in C.
// Author       : Samruddh Shivkumar Birajdar
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

// Input : 23 30
// Output : 108
// Input : 10 18
// Output : 70
// Input : -10 2
// Output : Invalid range
// Input : 90 18
// Output : Invalid range

#include<stdio.h>

int RangeSumEven(int iStart, int iEnd)
{
    if(iStart > iEnd || iStart < 0)
    {
        return -1;
    }

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

    iRet = RangeSumEven(iValue1,iValue2);

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
Each number is checked once and even numbers are added.
*/
