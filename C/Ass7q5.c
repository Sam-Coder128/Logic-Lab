////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Program      : Factorial Difference Demo
// Input        : Integer number entered by user
// Output       : Prints difference between even factorial and odd factorial
// Methods      : FactorialDiff(), printf(), scanf()
// Description  : Demonstrates calculation of difference between even and odd factorials in C.
// Author       : Samruddh Shivkumar Birajdar
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

// Input : 5
// Output : -7

// Input : -5
// Output : -7

// Input : 10
// Output : 2895

#include<stdio.h>

int FactorialDiff(int iNo)
{
    int iCnt = 0, iEvenFact = 1, iOddFact = 1;

    if(iNo < 0)
        iNo = -iNo;

    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        if((iCnt % 2) == 0)
            iEvenFact = iEvenFact * iCnt;
        else
            iOddFact = iOddFact * iCnt;
    }

    return (iEvenFact - iOddFact);
}

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Application : Calculates difference between even factorial and odd factorial of a user-entered number.
//
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter number:");
    scanf("%d",&iValue);

    iRet = FactorialDiff(iValue);

    printf("Factorial difference is %d",iRet);

    return 0;
}

/*
Time complexity : O(N)
where N is the input number
Explanation:
The loop runs from 1 to N, and for each iteration, 
it performs a constant amount of work 
(checking if the number is even or odd and performing a multiplication). 
Therefore, the time complexity is O(N) because it processes each number up to N once.
*/
