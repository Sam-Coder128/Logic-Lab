////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Program      : Single Digit Number to Word Demo
// Input        : Integer number entered by user
// Output       : Prints word representation of digit (supports negative)
// Methods      : Display(), printf(), scanf()
// Description  : Demonstrates mapping of digits to words in C.
// Author       : Samruddh Shivkumar Birajdar
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

// Input : 9
// Output : Nine

// Input : -3
// Output : Three

// Input : 12
// Output : Invalid Number

#include<stdio.h>

void Display(int iNo)
{
    if(iNo == 0)
        printf("Zero");
    else if(iNo == 1 || iNo == -1)
        printf("One");
    else if(iNo == 2 || iNo == -2)
        printf("Two");
    else if(iNo == 3 || iNo == -3)
        printf("Three");
    else if(iNo == 4 || iNo == -4)
        printf("Four");
    else if(iNo == 5 || iNo == -5)
        printf("Five");
    else if(iNo == 6 || iNo == -6)
        printf("Six");
    else if(iNo == 7 || iNo == -7)
        printf("Seven");
    else if(iNo == 8 || iNo == -8)
        printf("Eight");
    else if(iNo == 9 || iNo == -9)
        printf("Nine");
    else
        printf("Invalid Number");
}

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Application : Displays word representation of a single digit number.
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
