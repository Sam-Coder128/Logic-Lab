////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Program      : Minimum Element Demo
// Input        : Array of integers entered by user
// Output       : Smallest element in the array
// Methods      : Minimum(), printf(), scanf(), malloc(), free()
// Description  : Finds the minimum element from a given array
// Author       : Samruddh Shivkumar Birajdar
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

int Minimum(int Arr[], int iLength)
{
    int iMin = Arr[0], iCnt = 0;
    
    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        if(Arr[iCnt] < iMin)
        {
            iMin = Arr[iCnt];
        }
    }
    
    return iMin;
}

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Application : Calculates minimum element in an array.
//
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

int main()
{
    int iSize = 0, iRet = 0, iCnt = 0;
    int *p = NULL;
    
    printf("Enter number of elements: ");
    scanf("%d", &iSize);
    
    p = (int *)malloc(iSize * sizeof(int));
    
    if(p == NULL)
    {
        printf("Unable to allocate memory");
        return -1;
    }
    
    printf("Enter %d elements: ", iSize);
    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        printf("\nEnter element : %d: ", iCnt+1);
        scanf("%d", &p[iCnt]);
    }
    
    iRet = Minimum(p, iSize);
    
    printf("\nSmallest Number is %d\n", iRet);
    
    free(p);
    
    return 0;
}
