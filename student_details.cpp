#include <iostream>
using namespace std;
#define size 5

void average(int array[size])
{
    int temp = 0;
    for (int i = 0; i < size; i++)
    {
        if (array[i] != -1)
        {
            temp = temp + array[i];
        }
    }
    cout << "Average of marks : " << temp / size << endl;
}

void highest(int array[size])
{
    int temp = 0;
    for (int i = 0; i < size; i++)
    {
        if (array[i] > temp)
        {
            temp = array[i];
        }
    }
    cout << "Higest marks : " << temp << endl;
}
void lowest(int array[size])
{
    int temp = INT_MAX;
    for (int i = 0; i < size; i++)
    {
        if (array[i] < temp && array[i] != -1)
        {
            temp = array[i];
        }
    }
    cout << "Lowest marks : " << temp << endl;
}

void abscent(int array[size])
{
    int counter = 0;
    for (int i = 0; i < size; i++)
    {
        if (array[i] == -1)
        {
            counter += 1;
        }
    }
    cout << "Number of abscent students : " << counter << endl;
}

void frequency_count(int arr1[size])
{
    int arr2[5];

    for (int i = 0; i < 5; i++)
    {
        int counter = 0;
        for (int j = 0; j < 5; j++)
        {
            if (arr1[i] == arr1[j] and arr1[i] != -1)
            {
                counter += 1;
            }
            arr2[i] = counter;
        }
    }

    for (int j = 0; j < 5; j++)
    {
        if (arr1[j] != -1)
        {
            cout << arr1[j] << " = " << arr2[j] << " time(s)" << endl;
        }
    }
}

int main()
{
    int arr1[size], choice;
    for (int i = 0; i < size; i++)
    {
        cout << "Enter marks of student " << i + 1 << " : ";
        cin >> arr1[i];
    }


    while (true)
    {
        cout << "\n\n1.Get average marks\n2.Get the highest marks\n3.Get the lowest marks\n4.Get the count of abscent student\n5.Get the frequency of marks\n\nEnter your choice : ";
        cin >> choice;
        switch (choice)
        {
        case 1:
            average(arr1);
            break;
        case 2:
            highest(arr1);
            break;
        case 3:
            lowest(arr1);
            break;
        case 4:
            abscent(arr1);
            break;
        case 5:
            frequency_count(arr1);
            break;

        default:
            cout<<"Exit Successfully...!";
            exit(0);
        }
    }

    cout << endl;
    return 0;
}
