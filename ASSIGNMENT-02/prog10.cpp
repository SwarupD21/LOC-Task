//THODA DOUBT HAI ISS SAWAL PE

#include <iostream>
#include <cctype>
using namespace std;

int main() {
    string inputString;
    int alphabets = 0, digits = 0, specialChars = 0;
    cout << "Enter a string: ";
    getline(cin, inputString);
    
    for (char c : inputString) {
        
        if (isalpha(c)) {
            alphabets++;
        }
        else if (isdigit(c)) {
            digits++;
        }
        else {
            specialChars++;
        }
    }  
    // Output the result
    cout << "Number of alphabets: " << alphabets << endl;
    cout << "Number of digits: " << digits << endl;
    cout << "Number of special characters: " << specialChars << endl;

    return 0;
}
