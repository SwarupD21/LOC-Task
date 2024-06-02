#include <iostream>
using namespace std;


void moveNegativeElements(int arr[], int size) {
    int left = 0;
    int right = size - 1;

    while (left <= right) {
        while (left <= right && arr[left] >= 0) {
            left++;
        }
        while (left <= right && arr[right] < 0) {
            right--;
        }
        if (left <= right) {
            swap(arr[left], arr[right]);
            left++;
            right--;
        }
    }
}

int main() {
    int size;
    cout << "Enter the size of the array: ";
    cin >> size;

    int arr[size];
    cout << "Enter " << size << " elements: ";
    for (int i = 0; i < size; ++i) {
        cin >> arr[i];
    }

    moveNegativeElements(arr, size);

    cout << "Modified array with negative elements moved to one side: ";
    for (int i = 0; i < size; ++i) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
