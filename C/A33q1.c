  // Input : “Marvellous Multi OS”
// e
// Output : TRUE
//
// Input : “Marvellous Multi OS”
// W
// Output : FALSE

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Program      : Check Character in String Demo
// Description  : Checks whether given character is present in string
// Author       : Samruddh Shivkumar Birajdar
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL ChkChar(char *str, char ch)
{
    while(*str != '\0')
    {
        if(*str == ch)
        {
            return TRUE;
        }
        str++;
    }
    return FALSE;
}

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Application : Checks if character is present in string.
//
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

int main()
{
    char arr[20];
    char cValue;
    BOOL bRet = FALSE;

    printf("Enter string : ");
    scanf("%[^'\n']s",arr);

    printf("Enter the character : ");
    scanf(" %c",&cValue);

    bRet = ChkChar(arr, cValue);

    if(bRet == TRUE)
    {
        printf("Character found");
    }
    else
    {
        printf("Character not found");
    }

    return 0;
}
