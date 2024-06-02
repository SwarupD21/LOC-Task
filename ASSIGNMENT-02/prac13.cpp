#include <iostream>
using namespace std;

const int ROWS = 3;
const int COLS = 3;
void inputArray(int arr[ROWS][COLS]) {
    cout << "Enter the elements of the array:" << endl;
    for (int i = 0; i < ROWS; ++i) {
        for (int j = 0; j < COLS; ++j) {
            cout << "Enter element at position [" << i << "][" << j << "]: ";
            cin >> arr[i][j];
        }
    }
}

void printArray(int arr[ROWS][COLS]) {
    for (int i = 0; i < ROWS; ++i) {
        for (int j = 0; j < COLS; ++j) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}

void sumArrays(int arr1[ROWS][COLS], int arr2[ROWS][COLS], int result[ROWS][COLS]) {
    for (int i = 0; i < ROWS; ++i) {
        for (int j = 0; j < COLS; ++j) {
            result[i][j] = arr1[i][j] + arr2[i][j];
        }
    }
}

int main() {
    int array1[ROWS][COLS];
    int array2[ROWS][COLS];
    int sum[ROWS][COLS];

    cout << "Input for first array:" << endl;
    inputArray(array1);

    cout << "Input for second array:" << endl;
    inputArray(array2);

    sumArrays(array1, array2, sum);
    
    cout << "Sum of the two arrays:" << endl;
    printArray(sum);

    return 0;
}
