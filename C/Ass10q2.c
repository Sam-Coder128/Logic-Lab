////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Program      : Rectangle Area Calculation Demo
// Input        : Float width and height entered by user
// Output       : Prints area of rectangle
// Methods      : RectArea(), printf(), scanf()
// Description  : Demonstrates rectangle area calculation using formula width × height in C.
// Author       : Samruddh Shivkumar Birajdar
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

// Input : 5.3 9.78
// Output : 51.834

#include<stdio.h>

double RectArea(float fWidth, float fHeight)
{
    return fWidth * fHeight;
}

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Application : Calculates area of rectangle based on user-entered width and height.
//
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

int main()
{
    float fValue1 = 0.0, fValue2 = 0.0;
    double dRet = 0.0;

    printf("Enter width:");
    scanf("%f",&fValue1);

    printf("Enter height:");
    scanf("%f",&fValue2);

    dRet = RectArea(fValue1, fValue2);

    printf("Area of Rectangle is : %lf",dRet);

    return 0;
}

/*
Time Complexity : O(1)
Explanation:
No loop is present.
The program performs fixed operations only.
*/
