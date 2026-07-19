// Input : 10 20 30 10 30 40 10 40 10
// Value to search : 40
// Output : 6

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Program      : Generic Search First Occurrence Demo
// Description  : Finds first occurrence of given value in array
// Author       : Samruddh Shivkumar Birajdar
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<iostream>
using namespace std;

template<class T>
int SearchFirst(T *arr, int iSize, T iNo)
{
    for(int i=0; i<iSize; i++)
    {
        if(arr[i] == iNo)
        {
            return i;
        }
    }
    return -1;
}

int main()
{
    int arr[]={10,20,30,10,30,40,10,40,10};
    int iRet = SearchFirst(arr,9,40);
    printf("%d",iRet); // 6

    return 0;
}
