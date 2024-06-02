#include <iostream>
#include <string>
#include <cctype>
using namespace std;


string removeNonAlphabeticChars(const string & str) {
    string result;

    for (char c : str) {
        if (isalpha(c)) { 
            result += c;
        }
    }

    return result;
}

int main() {
    string inputString;

    
cout << "Enter a string: ";
    getline(cin, inputString);

    
    string result = removeNonAlphabeticChars(inputString);

  
    cout << "String after removing non-alphabetic characters: " << result << endl;

    return 0;
}
