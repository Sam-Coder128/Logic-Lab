////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Program      : Factorial Calculation Demo
// Input        : Integer number entered by user
// Output       : Prints factorial of the number
// Methods      : Factorial(), printf(), scanf()
// Description  : Demonstrates factorial calculation with support for negative input in C.
// Author       : Samruddh Shivkumar Birajdar
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

// Input : 5
// Output : 120

// Input : -5
// Output : 120

// Input : 4
// Output : 24

#include<stdio.h>

int Factorial(int iNo)
{
    int iFact = 1, iCnt = 0;

    if(iNo < 0)
        iNo = -iNo;

    for(iCnt = 1; iCnt <= iNo; iCnt++)
        iFact = iFact * iCnt;
    

    return iFact;
}

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Application : Calculates factorial of a user-entered number.
//
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter number:");
    scanf("%d",&iValue);

    iRet = Factorial(iValue);

    printf("Factorial of number is %d",iRet);

    return 0;
}
