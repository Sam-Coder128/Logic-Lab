// Input : 10 20 30 10 30 40 10 40 10
// Value to search : 40
// Output : 8

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Program      : Generic Search Last Occurrence Demo
// Description  : Finds last occurrence of given value in array
// Author       : Samruddh Shivkumar Birajdar
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<iostream>
using namespace std;

template<class T>
int SearchLast(T *arr, int iSize, T iNo)
{
    int iPos = -1;
    for(int i=0; i<iSize; i++)
    {
        if(arr[i] == iNo)
        {
            iPos = i;
        }
    }
    return iPos;
}

int main()
{
    int arr[]={10,20,30,10,30,40,10,40,10};
    int iRet = SearchLast(arr,9,40);
    printf("%d",iRet); // 8

    return 0;
}
