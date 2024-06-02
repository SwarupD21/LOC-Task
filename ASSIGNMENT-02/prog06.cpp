#include <iostream>
using namespace std;
#include <unordered_map>

int main() {
    int size;

    cout << "Enter the size of the array: ";
    cin >> size;

    int arr[size];
    cout << "Enter " << size << " elements: ";
    for (int i = 0; i < size; ++i) {
        std::cin >> arr[i];
    }
    unordered_map<int, int> frequencyMap;

    for (int i = 0; i < size; ++i) {
        frequencyMap[arr[i]]++;
    }
    int maxOccurringInteger = arr[0];
    int maxFrequency = frequencyMap[arr[0]];

    for (int i = 1; i < size; ++i) {
        if (frequencyMap[arr[i]] > maxFrequency) {
            maxOccurringInteger = arr[i];
            maxFrequency = frequencyMap[arr[i]];
        }
    }
    cout << "Maximum occurring integer: " << maxOccurringInteger << endl;
    
    return 0;
}
