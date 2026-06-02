////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Program      : Count Even Digits Demo
// Input        : Integer number entered by user
// Output       : Prints count of even digits
// Methods      : CountEven(), printf(), scanf()
// Description  : Demonstrates digit extraction and counting even digits in C.
// Author       : Samruddh Shivkumar Birajdar
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

// Count even digits
// Input : 2395
// Output : 1
// Input : 1018
// Output : 2
// Input : -1018
// Output : 2
// Input : 8462
// Output : 4

#include<stdio.h>

int CountEven(int iNo)
{
    int iCnt = 0, iDigit = 0;

    if(iNo < 0)
        iNo = -iNo;

    while(iNo != 0)
    {
        iDigit = iNo % 10;
        if(iDigit % 2 == 0)
            iCnt++;
        iNo = iNo / 10;
    }
    return iCnt;
}

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Application : Counts even digits in a user-entered number.
//
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter number:");
    scanf("%d",&iValue);

    iRet = CountEven(iValue);

    printf("%d",iRet);

    return 0;
}

/*
Time Complexity : O(N)
Explanation:
N means number of digits in the given number.
We have to check each digit once.
*/
