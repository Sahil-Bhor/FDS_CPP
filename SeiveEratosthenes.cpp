#include <iostream>
#define size 100
using namespace std;

// first we have to mark each of the multiples of numbers starting from 2
// if there is any multiple of number mark as 1
// print those number which are unmarked 

void primeSeive(int arr[], int key)
{
    for(int i = 2; i <= key; i++)
    {
        if (arr[i] == 0)
        {
            for(int j = i * i; j <= key; j += i)
            {
                arr[j] = 1;
            }
        }
    }

    cout<<"Prime numbers till "<<key<<" : ";
    for(int i=2; i<=key; i++)
    {
        if(arr[i]==0){
            cout<<i<<" ";
        }
    }
}

int main()
{
    int arr[size] = {0};

    primeSeive(arr, 20);

    cout << endl;
    return 0;
}