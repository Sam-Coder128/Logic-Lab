////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Program      : Difference Between Max and Min Demo
// Input        : Array of integers entered by user
// Output       : Difference between largest and smallest element
// Methods      : Difference(), printf(), scanf(), malloc(), free()
// Description  : Calculates difference between maximum and minimum element in array
// Author       : Samruddh Shivkumar Birajdar
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

int Difference(int Arr[], int iLength)
{
    int iMax = Arr[0], iMin = Arr[0], iCnt = 0, iDiff = 0;
    
    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        if(Arr[iCnt] > iMax)
        {
            iMax = Arr[iCnt];
        }
        if(Arr[iCnt] < iMin)
        {
            iMin = Arr[iCnt];
        }
    }
    
    iDiff = iMax - iMin;
    
    return iDiff;
}

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Application : Calculates difference between maximum and minimum element in an array.
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
    
    iRet = Difference(p, iSize);
    
    printf("\nDifference is %d\n", iRet);
    
    free(p);
    
    return 0;
}
