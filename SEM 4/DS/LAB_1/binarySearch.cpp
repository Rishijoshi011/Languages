#include <iostream>

using namespace std;

int main()
{
    int size, found;
    cout << "Enter Size of an Array" << endl;
    cin >> size;

    int arr[size], low = 0, mid, high = size - 1;
    cout << "Enter elements: " << endl;
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    cout << "Enter elements to be found: " << endl;
    cin >> found;

    while (low <= high)
    {
        mid = (low + high) / 2;
        if (found == arr[mid])
        {
            cout << "Element is at the index: " << mid << endl;
            break;
        }
        else if (found > arr[mid])
        {
            low = mid + 1;
        }
        else if (found < arr[mid])
        {
            high = mid - 1;
        }
    }
}