// Input  : "marvellous"
// Output : TRUE
//
// Input  : "Demo"
// Output : TRUE
//
// Input  : "xyz"
// Output : FALSE

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Program      : Check Vowel in String Demo
// Description  : Checks whether string contains any vowel
// Author       : Samruddh Shivkumar Birajdar
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL ChkVowel(char *str)
{
    while(*str != '\0')
    {
        if(*str=='a'||*str=='e'||*str=='i'||*str=='o'||*str=='u'||
           *str=='A'||*str=='E'||*str=='I'||*str=='O'||*str=='U')
        {
            return TRUE;
        }
        str++;
    }
    return FALSE;
}

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Application : Checks if string contains vowel.
//
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

int main()
{
    char arr[20];
    BOOL bRet = FALSE;

    printf("Enter string : ");
    scanf("%[^'\n']s",arr);

    bRet = ChkVowel(arr);

    if(bRet == TRUE)
    {
        printf("Contains Vowel");
    }
    else
    {
        printf("There is no Vowel");
    }

    return 0;
}
