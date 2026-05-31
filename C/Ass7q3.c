////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Program      : Even Factorial Demo
// Input        : Integer number entered by user
// Output       : Prints factorial of even numbers up to N
// Methods      : EvenFactorial(), printf(), scanf()
// Description  : Demonstrates factorial calculation restricted to even numbers in C.
// Author       : Samruddh Shivkumar Birajdar
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

// Input : 5
// Output : 8

// Input : -5
// Output : 8

// Input : 10
// Output : 3840

#include<stdio.h>

int EvenFactorial(int iNo)
{
    int iCnt = 0, iFact = 1;
    if(iNo < 0)
        iNo = -iNo;

    for(iCnt = 2; iCnt <= iNo; iCnt += 2)
        iFact = iFact * iCnt;

    return iFact;
}

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Application : Calculates factorial of even numbers up to a user-entered number.
//
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter number:");
    scanf("%d",&iValue);

    iRet = EvenFactorial(iValue);

    printf("Even Factorial of number is %d",iRet);

    return 0;
}

/*
Time complexity : O(N/2) => O(N)
where N is the input number
Explanation:
The loop runs from 2 to N with a step of 2, 
which means it iterates approximately N/2 times. 
Therefore, the time complexity is O(N/2), which simplifies
to O(N) when constants are ignored.
*/
