////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Program      : Multiple of 5 Check Demo
// Input        : Integer number
// Output       : Prints whether the number is a multiple of 5
// Methods      : Check(), printf(), scanf()
// Description  : Demonstrates use of typedef and macros to check divisibility by 5 in C.
// Author       : Samruddh Shivkumar Birajdar
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>

typedef int BOOL;
#define TRUE 1
#define FALSE 0

BOOL Check(int iNo)
{
    if ((iNo % 5) == 0)
        return TRUE;
    
    else
        return FALSE;

}

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Application : Displays result of divisibility check using typedef-based boolean values.
//
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

int main(){

    BOOL bRet = FALSE;
    int iValue;
    
    printf("\nEnter a number: ");
    scanf("%d", &iValue);
    
    bRet = Check(iValue);

    if (bRet == TRUE)
        printf("%d is a multiple of 5\n", iValue);
    
    else
        printf("%d is not a multiple of 5\n", iValue);

    return 0;
}
