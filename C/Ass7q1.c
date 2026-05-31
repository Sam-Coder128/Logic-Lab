////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Program      : Star-Hash Pattern Demo
// Input        : Integer number entered by user
// Output       : Prints N stars followed by N hashes
// Methods      : Display(), printf(), scanf()
// Description  : Demonstrates pattern printing with two consecutive loops in C.
// Author       : Samruddh Shivkumar Birajdar
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

// Input : 5
// Output : * * * * # # # # #

// Input : 6
// Output : * * * * * # # # # # #

// Input : -5
// Output : * * * * # # # # #

#include<stdio.h>

void Display(int iNo)
{
    int iCnt = 0;

    if(iNo < 0)
        iNo = -iNo;

    for(iCnt = 1; iCnt <= iNo; iCnt++) 
        printf("*\t");

    for(iCnt = 1; iCnt <= iNo; iCnt++)
        printf("#\t");
    
}

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Application : Displays a pattern of stars followed by hashes based on user input.
//
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

int main()
{
    int iValue = 0;

    printf("Enter number:");
    scanf("%d",&iValue);

    Display(iValue);

    return 0;
}

/*
Time complexity : O(N)
where N is the input number

Explanation:
First loop runs N times.
Second loop runs N times.
So total work is 2N, and constants are ignored.

Space complexity : O(1)
*/
