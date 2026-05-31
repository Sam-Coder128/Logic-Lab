////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Program      : Dollar to INR Conversion Demo
// Input        : Integer number of USD entered by user
// Output       : Prints equivalent INR value
// Methods      : DollarToINR(), printf(), scanf()
// Description  : Demonstrates currency conversion using multiplication in C.
// Author       : Samruddh Shivkumar Birajdar
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

// Input : 10
// Output : 700

// Input : 3
// Output : 270

// Input : 1200
// Output : 84000

#include<stdio.h>

int DollarToINR(int iNo)
{
    return iNo * 70;
}

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Application : Converts USD to INR using fixed conversion rate.
//
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter number of USD:");
    scanf("%d",&iValue);

    iRet = DollarToINR(iValue);

    printf("Value in INR is %d",iRet);

    return 0;
}

/*
Time complexity : O(1)
Explanation:
The function performs a constant number of operations (multiplication and return), regardless of the input size.
*/
