////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Program      : Square Feet to Square Meter Conversion Demo
// Input        : Integer area in square feet entered by user
// Output       : Prints area in square meters
// Methods      : SquareMeter(), printf(), scanf()
// Description  : Demonstrates conversion of square feet to square meters in C.
// Author       : Samruddh Shivkumar Birajdar
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

// Input : 5
// Output : 0.464515
// Input : 7
// Output : 0.650321

#include<stdio.h>

double SquareMeter(int iValue)
{
    return iValue * 0.092903;
}

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Application : Converts area from square feet to square meters.
//
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

int main()
{
    int iValue = 0;
    double dRet = 0.0;

    printf("Enter area in square feet:");
    scanf("%d",&iValue);

    dRet = SquareMeter(iValue);

    printf("Area in square meters is : %lf",dRet);

    return 0;
}

/*
Time Complexity : O(1)
Explanation:
No loop is present.
The program performs fixed operations only.
*/
