// Selection, Bubble, Insertion Sort

#include <iostream>
#define Size 5
using namespace std;

void printArray(int arr[])
{
    cout << "\nArray : ";
    for (int i = 0; i < Size; i++)
    {
        cout << arr[i] << " ";
    }
}

void SelectionSort(int arr[])
{
    int temp, count;
    for (int i = 0; i < Size - 1; i++)
    {
        int num = INT_MAX;
        for (int j = i + 1; j < Size; j++)
        {
            if (arr[j] < num)
            {
                num = arr[j];
                count = j;
            }
        }
        if (arr[i] > arr[count])
        {
            temp = arr[i];
            arr[i] = arr[count];
            arr[count] = temp;
        }
    }
}

void BubbleSort(int arr[])
{
    int temp;

    for (int j = 0; j < Size - 1; j++)
    {
        int flag = 0;
        for (int i = 0; i < Size - j - 1; i++)
        {
            if (arr[i] > arr[i + 1])
            {
                temp = arr[i];
                arr[i] = arr[i + 1];
                arr[i + 1] = temp;
                flag = 1;
            }
        }
        if (flag == 0)
        {
            break;
        }
    }
}

void InsertionSort(int arr[])
{
    for (int i = 0; i < Size; i++)
    {
        int current = arr[i];
        int j = i - 1;

        while (arr[j] > current && j >= 0)
        {
            arr[j + 1] = arr[j];
            j -= 1;
        }
        arr[j + 1] = current;
    }
}

int main()
{
    int arr[Size], key;

    cout << "Enter numbers : ";
    for (int i = 0; i < Size; i++)
    {
        cin >> arr[i];
    }

    cout << "\nUnsorted";
    printArray(arr);

    SelectionSort(arr);
    cout << "\n\nSelection Sort";
    printArray(arr);

    BubbleSort(arr);
    cout << "\n\nBubble Sort";
    printArray(arr);

    InsertionSort(arr);
    cout << "\n\nInsertion Sort";
    printArray(arr);

    cout << endl;
    return 0;
}