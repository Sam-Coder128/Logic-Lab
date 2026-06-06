////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Program      : Difference Between Even and Odd Sum Demo
// Input        : Array of integers entered by user
// Output       : Prints difference between sum of even and odd elements
// Methods      : Difference(), printf(), scanf(), malloc(), free()
// Description  : Demonstrates array traversal and summation difference in C.
// Author       : Samruddh Shivkumar Birajdar
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>
#include <stdlib.h>

int Difference(int Arr[], int iLength)
{
    int i = 0;
    int iSumEven = 0;
    int iSumOdd = 0;

    for (i = 0; i < iLength; i++)
    {
        if ((Arr[i] % 2) == 0)
        {
            iSumEven += Arr[i];
        }
        else
        {
            iSumOdd += Arr[i];
        }
    }

    return (iSumEven - iSumOdd);
}

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Application : Calculates difference between sum of even and odd elements in an array.
//
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

int main()
{
    int iSize = 0, iRet = 0, i = 0;
    int *p = NULL;

    printf("Enter number of elements: ");
    if (scanf("%d", &iSize) != 1 || iSize <= 0)
    {
        printf("Invalid size\n");
        return 1;
    }

    p = (int *)malloc(iSize * sizeof(int));
    if (p == NULL)
    {
        printf("Unable to allocate memory\n");
        return 1;
    }

    printf("Enter %d elements:\n", iSize);
    for (i = 0; i < iSize; i++)
    {
        if (scanf("%d", &p[i]) != 1)
        {
            printf("Invalid input\n");
            free(p);
            return 1;
        }
    }

    iRet = Difference(p, iSize);
    printf("Result is %d\n", iRet);

    free(p);
    return 0;
}
