#include <iostream>

using namespace std;

void BubbleSort(int* arr, int size)
{
    for (int i = 0; i < size - 1; i++)
    {
        for (int j = 0; j < size - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
            
        }
    }
}

int main()
{
    int size;
    cout << "Enter Size of an Array" << endl;
    cin >> size;

    int arr[size];
    cout << "Enter elements: " << endl;
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }

    BubbleSort(arr, size);
    cout << "After Sorting: " << endl;
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
}