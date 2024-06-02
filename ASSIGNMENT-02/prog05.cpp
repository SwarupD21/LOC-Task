#include <iostream>
using namespace std;

int main() {
    int size;
    cout << "Enter the size of the array: ";
    cin >> size;

    int sourceArray[size];
    int destinationArray[size];

    cout << "Enter " << size << " elements for the source array: ";
    for (int i = 0; i < size; i++) {
        cin >> sourceArray[i];
    }

    for (int i = 0; i < size; i++) {
        destinationArray[i] = sourceArray[i];
    }

    cout << "Elements of the destination array: ";
    for (int i = 0; i < size; i++) {
        cout << destinationArray[i] << " ";
    }
    cout << endl;

    return 0;
}
