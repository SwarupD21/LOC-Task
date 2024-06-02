#include <iostream>
#include <unordered_map>
#include <vector>
using namespace std;

int mostFrequentElement(const vector<int>& arr) {
    unordered_map<int, int> frequencyMap;
    for (int num : arr) {
        frequencyMap[num]++;
    }
    int maxFrequency = 0;
    int mostFrequentElement = arr[0]; 
    for (const auto& pair : frequencyMap) {
        if (pair.second > maxFrequency) {
            maxFrequency = pair.second;
            mostFrequentElement = pair.first;
        }
    }

    return mostFrequentElement;
}

int main() {
    int size;
    cout << "Enter the size of the array: ";
    cin >> size;
    if (size <= 0) {
        cerr << "Error: Array size should be positive." << endl;
        return 1; 
    }
    vector<int> arr(size);
    cout << "Enter " << size << " integers: ";
    for (int i = 0; i < size; ++i) {
        cin >> arr[i];
    }
    int mostFrequent = mostFrequentElement(arr);
    cout << "The most frequent element in the array is: " << mostFrequent << endl;

    return 0;
}
