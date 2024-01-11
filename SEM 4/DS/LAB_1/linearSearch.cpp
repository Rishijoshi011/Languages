#include <iostream>

using namespace std;

int main()
{
    int size, found;
    cout << "Enter Size of an Array" << endl;
    cin >> size;

    int arr[size];
    cout << "Enter elements: " << endl;
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    cout << "Enter element to be found: " << endl;
    cin >> found;

    bool foundFlag = false;
    for (int i = 0; i < size; i++)
    {
        if (found == arr[i])
        {
            cout << "Element is at the index: " << i << endl;
            foundFlag = true;
            break;
        }
    }

    if (!foundFlag)
    {
        cout << "Element not found" << endl;
    }

    return 0;
}
