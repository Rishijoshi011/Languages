#include <iostream>

using namespace std;

void merge(int arr[], int low, int mid, int high) {
    int i = low, j = mid + 1, k = low;
    int* temp = new int[high - low + 1];

    for (k = low; k <= high; k++) {
        if (i <= mid && (j > high || arr[i] <= arr[j])) {
            temp[k - low] = arr[i];
            i++;
        } else {
            temp[k - low] = arr[j];
            j++;
        }
    }

    for (k = low; k <= high; k++) {
        arr[k] = temp[k - low];
    }
    delete[] temp;
}

void mergeSort(int arr[], int low, int high) {
    if (low < high) {
        int mid = (low + high) / 2;

        mergeSort(arr, low, mid);
        mergeSort(arr, mid + 1, high);

        merge(arr, low, mid, high);
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

    mergeSort(arr, 0, size - 1);

    cout << "After sort: " << endl;
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    return 0;
}
