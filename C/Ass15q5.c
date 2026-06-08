////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Program      : Product of Odd Elements Demo
// Input        : Array of integers entered by user
// Output       : Prints product of all odd elements (0 if none)
// Methods      : Product(), printf(), scanf(), malloc(), free()
// Description  : Demonstrates array traversal and product calculation of odd elements in C.
// Author       : Samruddh Shivkumar Birajdar
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

// Example:
// Input : Array [2, 3, 4, 5]
// Output : 15

#include <stdio.h>
#include <stdlib.h>

int Product(int Arr[], int iLength)
{
    int i = 0;
    int iProduct = 1;
    int found = 0;

    for (i = 0; i < iLength; i++)
    {
        if ((Arr[i] % 2) != 0)
        {
            iProduct *= Arr[i];
            found = 1;
        }
    }

    if (found == 0)
    {
        return 0;
    }

    return iProduct;
}

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Application : Calculates product of odd elements in an array.
//
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

int main()
{
    int iSize = 0;
    int iCnt = 0;
    int iRet = 0;
    int *p = NULL;

    printf("Enter number of elements\n");
    if (scanf("%d", &iSize) != 1 || iSize <= 0)
    {
        printf("Invalid input\n");
        return 1;
    }

    p = (int *)malloc(iSize * sizeof(int));
    if (p == NULL)
    {
        printf("Unable to allocate memory\n");
        return 1;
    }

    printf("Enter %d elements\n", iSize);
    for (iCnt = 0; iCnt < iSize; iCnt++)
    {
        if (scanf("%d", &p[iCnt]) != 1)
        {
            printf("Invalid input\n");
            free(p);
            return 1;
        }
    }

    iRet = Product(p, iSize);

    printf("Product is %d\n", iRet);

    free(p);
    return 0;
}
