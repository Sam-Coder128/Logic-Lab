// Input : 10 20 30 10 30 40 10 40 10
// Output : 10 40 10 40 30 10 30 20 10

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Program      : Generic Reverse Array Demo
// Description  : Reverses contents of array
// Author       : Samruddh Shivkumar Birajdar
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<iostream>
using namespace std;

template<class T>
void Reverse(T *arr, int iSize)
{
    int start = 0;
    int end = iSize - 1;
    T temp;

    while(start < end)
    {
        temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;

        start++;
        end--;
    }
}

int main()
{
    int arr[]={10,20,30,10,30,40,10,40,10};

    for(int i=0;i<9;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    Reverse(arr,9);

    for(int i=0;i<9;i++)
    {
        cout<<arr[i]<<" ";
    }

    return 0;
}
