#include <iostream>

using namespace std;

inline void swap(int* a, int* b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int partitioning(int* arr, int lowerIndex, int higherIndex) {
    int pivot = arr[higherIndex];
    int i = (lowerIndex - 1);

    for (int j = lowerIndex; j <= higherIndex - 1; j++) {
        if (arr[j] <= pivot) {
            i++;
            swap(&arr[i], &arr[j]);
        }
    }

    swap(&arr[i + 1], &arr[higherIndex]);
    return (i + 1);
}   

void quickSort(int* arr, int lowerIndex, int higherIndex) {
    if (lowerIndex < higherIndex) {
        int n = partitioning(arr, lowerIndex, higherIndex);
        quickSort(arr, lowerIndex, n - 1);
        quickSort(arr, n + 1, higherIndex);
    }
}

int main() {
    cout << "Enter size of an Array" << endl;
    int size;
    cin >> size;

    int arr[size];

    cout << "Enter elements of an Array" << endl;
    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }

    quickSort(arr, 0, size - 1);

    cout << "After sort: " << endl;
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}
