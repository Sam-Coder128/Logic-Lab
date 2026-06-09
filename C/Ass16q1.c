////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Program      : Maximum Element Demo
// Input        : Array of integers entered by user
// Output       : Largest element in the array
// Methods      : Maximum(), printf(), scanf(), malloc(), free()
// Description  : Finds the maximum element from a given array
// Author       : Samruddh Shivkumar Birajdar
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

int Maximum(int Arr[], int iLength)
{
    int iMax = Arr[0], iCnt = 0;
    
    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        if(Arr[iCnt] > iMax)
        {
            iMax = Arr[iCnt];
        }
    }
    
    return iMax;
}

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Application : Calculates maximum element in an array.
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
    
    iRet = Maximum(p, iSize);
    
    printf("\nLargest Number is %d\n", iRet);
    
    free(p);
    
    return 0;
}
