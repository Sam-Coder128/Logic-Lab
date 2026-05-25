////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Program      : Even Odd Check Demo
// Input        : Integer number entered by user
// Output       : Prints whether the number is even or odd
// Methods      : Check(), printf(), scanf()
// Description  : Demonstrates use of typedef-based boolean values to check even or odd numbers in C.
// Author       : Samruddh Shivkumar Birajdar
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>

typedef int BOOL;
#define TRUE 1
#define FALSE 0

BOOL Check(int iNo)
{
    if ((iNo % 2) == 0)
        return TRUE;
    
    else
        return FALSE;

}

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Application : Displays whether a user-entered number is even or odd using boolean return values.
//
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

int main(){

    BOOL bRet = FALSE;
    int iValue;
    
    printf("\nEnter a number: ");
    scanf("%d", &iValue);
    
    bRet = Check(iValue);

    if (bRet == TRUE)
        printf("%d is even\n", iValue);
    
    else
        printf("%d is odd\n", iValue);

    return 0;
}
