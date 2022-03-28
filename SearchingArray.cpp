// Linear Search and Binary Search

#include<iostream>
#define Size 5
using namespace std;

int LinearSearch(int arr[], int key)
{
    for (int i = 0; i < Size; i++)
    {
        if(arr[i] == key)
        {
            cout<<"Key is at index ";
            return i;
        }
    }
    return -1;
}

int BinarySearch(int arr[], int key) // elements in an array should be sorted.
{
    int start = 0, end = Size, mid;

    while(start<=end)
    {
        mid = (start+end)/2;

        if(key == arr[mid])
        {
            cout<<"Key is at index ";
            return mid;
        }
        else if(key > arr[mid])
        {
            start = mid+1;
        }
        else if(key<arr[mid])
        {
            end = mid-1;
        }
    }
    return -1;
}

int main()
{
    int arr[Size], key;

    for(int i=0; i<Size; i++)
    {
        cout<<"Enter number "<<i+1<<" : ";
        cin>>arr[i];
    }
    
    cout<<"Array : ";
    
    for(int i=0; i<Size; i++)
    {
        cout<<arr[i]<<" ";
        
    }

    cout<<"\nEnter the key : ";
    cin>>key;

    cout<<"\nLinear Search '"<<key<<"'\n"<<LinearSearch(arr, key);
    cout<<"\n\nBinary Search '"<<key<<"'\n"<<BinarySearch(arr, key);

    cout<<endl;
    return 0;
}
