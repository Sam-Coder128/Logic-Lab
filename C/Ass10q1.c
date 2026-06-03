////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Program      : Circle Area Calculation Demo
// Input        : Float radius entered by user
// Output       : Prints area of circle
// Methods      : CircleArea(), printf(), scanf()
// Description  : Demonstrates circle area calculation using formula πr² in C.
// Author       : Samruddh Shivkumar Birajdar
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

// Input : 5.3
// Output : 88.2026
// Input : 10.4
// Output : 339.6224

#include<stdio.h>

double CircleArea(float fRadius)
{
    return 3.14 * fRadius * fRadius;
}

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Application : Calculates area of circle based on user-entered radius.
//
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

int main()
{
    float fValue = 0.0;
    double dRet = 0.0;

    printf("Enter radius:");
    scanf("%f",&fValue);

    dRet = CircleArea(fValue);

    printf("Area of Circle is : %lf",dRet);

    return 0;
}

/*
Time Complexity : O(1)
Explanation:
No loop is present.
The program performs fixed operations only.
*/
