////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Program      : Display Elements Divisible by 11 Demo
// Input        : Array of integers entered by user
// Output       : Prints elements divisible by 11
// Methods      : Display(), printf(), scanf(), malloc(), free()
// Description  : Demonstrates array traversal with divisibility check in C.
// Author       : Samruddh Shivkumar Birajdar
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

// Example:
// Input : 10 elements [11, 22, 33, 44, 55, 60, 77, 88, 99, 100]
// Output : 11 22 33 44 55 77 88 99

#include <stdio.h>
#include <stdlib.h>

void Display(int Arr[], int iLength)
{
    int i = 0;
    printf("Elements which are multiples of 11:\n");
    for (i = 0; i < iLength; i++)
    {
        if ((Arr[i] % 11) == 0)
        {
            printf("%d\t", Arr[i]);
        }
    }
    printf("\n");
}

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Application : Displays elements divisible by 11 from an array.
//
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

int main()
{
    int iSize = 0, i = 0;
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

    Display(p, iSize);

    free(p);
    return 0;
}
