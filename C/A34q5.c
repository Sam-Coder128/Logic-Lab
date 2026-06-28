// Input : “Marvellous Infosystems”
// “Logic Building”
// Output : “Marvellous Infosystems Logic Building”

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Program      : String Concatenation Demo (strcat implementation)
// Description  : Concatenates second string after first string
// Author       : Samruddh Shivkumar Birajdar
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

void StrCatX(char *src, char *dest)
{
    while(*src != '\0')   // Traverse first string till end
    {
        src++;
    }

    while(*dest != '\0')  // Copy contents of destination in source
    {
        *src = *dest;
        src++;
        dest++;
    }
    *src = '\0';
}

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Application : Concatenates two strings.
//
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

int main()
{
    char arr[50] = "Marvellous Infosystems";
    char brr[30] = " Logic Building";

    StrCatX(arr,brr);

    printf("%s",arr); // Marvellous Infosystems Logic Building

    return 0;
}
