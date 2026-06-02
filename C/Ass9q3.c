////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Program      : Count Digits in Range Demo
// Input        : Integer number entered by user
// Output       : Prints count of digits between 3 and 7
// Methods      : CountRange(), printf(), scanf()
// Description  : Demonstrates digit extraction and range checking in C.
// Author       : Samruddh Shivkumar Birajdar
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

// Count digits between 3 and 7
// Input : 2395
// Output : 1
// Input : 1018
// Output : 0
// Input : 4521
// Output : 2

#include<stdio.h>

int CountRange(int iNo)
{
    int iCnt = 0, iDigit = 0;

    if(iNo < 0)
        iNo = -iNo;

    while(iNo != 0)
    {
        iDigit = iNo % 10;
        if(iDigit > 3 && iDigit < 7)
            iCnt++;
        iNo = iNo / 10;
    }
    return iCnt;
}

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Application : Counts digits between 3 and 7 in a user-entered number.
//
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter number:");
    scanf("%d",&iValue);

    iRet = CountRange(iValue);

    printf("%d",iRet);

    return 0;
}

/*
Time Complexity : O(N)
Explanation:
N means number of digits.
Each digit is extracted and checked once.
*/
