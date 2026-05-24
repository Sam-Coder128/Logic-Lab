////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Program      : Division Function Demo
// Input        : Two integers (dividend and divisor)
// Output       : Prints division result or error message if divisor is zero
// Methods      : Divide(), printf()
// Description  : Demonstrates safe division with error handling for division by zero in C.
// Author       : Samruddh Shivkumar Birajdar
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>

int Divide(int iNo1, int iNo2) {
    int iAns = 0;
    if (iNo2 == 0)        return -1;
    
    iAns = iNo1 / iNo2;
    return iAns;
}

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Application : Illustrates integer division with error handling for zero divisor.
//
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

int main()  {

    int iValue1 = 15;
    int iValue2 = 5;
    int iRet = Divide(iValue1, iValue2);

    if (iRet == -1)   printf("Division by zero error\n");

    else   printf("Division is %d\n", iRet);

    return 0;
}
