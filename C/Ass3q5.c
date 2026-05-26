#include <stdio.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL ChkVowel(char cValue)
{
    if (cValue >= 'A' && cValue <= 'Z')
    {
        cValue = cValue - 'A' + 'a';
    }

    if (cValue == 'a' || cValue == 'e' || cValue == 'i' || cValue == 'o' || cValue == 'u')
    {
        return TRUE;
    }
    else
    {
        return FALSE;
    }
}

int main()
{
    char cValue = '\0';
    BOOL bRet = FALSE;

    printf("Enter character\n");
    if (scanf(" %c", &cValue) == 1)
    {
        bRet = ChkVowel(cValue);
        if (bRet == TRUE)
        {
            printf("It is Vowel\n");
        }
        else
        {
            printf("It is not Vowel\n");
        }
    }
    else
    {
        printf("Invalid input.\n");
    }

    return 0;
}
