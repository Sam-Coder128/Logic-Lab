////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Program      : Fahrenheit to Celsius Conversion Demo
// Input        : Float temperature in Fahrenheit entered by user
// Output       : Prints temperature in Celsius
// Methods      : FhtoCs(), printf(), scanf()
// Description  : Demonstrates conversion of Fahrenheit to Celsius in C.
// Author       : Samruddh Shivkumar Birajdar
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

// Input : 10
// Output : -12.2222

// Input : 34
// Output : 1.11111

#include<stdio.h>

double FhtoCs(float fTemp)
{
    return (fTemp - 32) * 5 / 9;
}

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Application : Converts temperature from Fahrenheit to Celsius.
//
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

int main()
{
    float fValue = 0.0;
    double dRet = 0.0;

    printf("Enter temperature in Fahrenheit:");
    scanf("%f",&fValue);

    dRet = FhtoCs(fValue);

    printf("Temperature in Celsius is : %lf",dRet);

    return 0;
}

/*
Time Complexity : O(1)

Explanation:
No loop is used.
Only one formula is applied.
*/
