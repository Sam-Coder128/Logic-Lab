////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Program      : Character Case Conversion Demo
// Input        : Single character entered by user
// Output       : Prints converted character (lowercase to uppercase or vice versa)
// Methods      : DisplayConvert(), printf(), scanf()
// Description  : Demonstrates conversion of character case using ASCII manipulation in C.
// Author       : Samruddh Shivkumar Birajdar
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>

void DisplayConvert(char cValue)
{
    if (cValue >= 'a' && cValue <= 'z')
    {
        printf("%c\n", cValue - 'a' + 'A');
    }
    else if (cValue >= 'A' && cValue <= 'Z')
    {
        printf("%c\n", cValue - 'A' + 'a');
    }
    else
    {
        printf("%c\n", cValue);
    }
}

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Application : Shows conversion of user-entered character between uppercase and lowercase, preserving non-alphabetic input.
//
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

int main()
{
    char cValue = '\0';

    printf("Enter character\n");
    if (scanf(" %c", &cValue) == 1)
    {
        DisplayConvert(cValue);
    }
    else
    {
        printf("Invalid input.\n");
    }

    return 0;
}
