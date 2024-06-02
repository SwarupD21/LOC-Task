#include <iostream>
#include <climits>
using namespace std;

// Function to find the second smallest element in an array
int secondSmallest(int arr[], int size) {
    int smallest = INT_MAX;
    int secondSmallest = INT_MAX;

    for (int i = 0; i < size; ++i) {
        if (arr[i] < smallest) {
            secondSmallest = smallest;
            smallest = arr[i];
        } else if (arr[i] < secondSmallest && arr[i] != smallest) {
            secondSmallest = arr[i];
        }
    }

    return secondSmallest;
}

int main() {
    int size;
    cout << "Enter the size of the array: ";
    cin >> size;

    if (size < 2) {
        cerr << "Error: Array size should be at least 2." << endl;
        return 1; 
    }

    int arr[size];
    cout << "Enter " << size << " integers: ";
    for (int i = 0; i < size; ++i) {
        cin >> arr[i];
    }

    int secondMin = secondSmallest(arr, size);
    cout << "The second smallest element in the array is: " << secondMin << endl;

    return 0;
}
