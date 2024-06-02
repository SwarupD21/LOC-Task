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

void transpose(int arr[ROWS][COLS]) {
    for (int i = 0; i < ROWS; ++i) {
        for (int j = i + 1; j < COLS; ++j) {
            swap(arr[i][j], arr[j][i]);
        }
    }
}

int main() {
    int array[ROWS][COLS];
    inputArray(array);
    transpose(array);

    cout << "Transpose of the array:" << endl;
    printArray(array);

    return 0;
}
