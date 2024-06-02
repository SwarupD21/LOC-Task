#include <iostream>
#include <cctype>

bool isVowel(char c) {
    c = tolower(c);
    return (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u');
}

int main() {
    std::string inputString;
    int vowels = 0, consonants = 0;
    std::cout << "Enter a string: ";
    std::getline(std::cin, inputString);

    
    for (char c : inputString) {
        
        if (isalpha(c)) {
            
            if (isVowel(c)) {
                vowels++;
            } else {
                consonants++;
            }
        }
    }

    std::cout << "Number of vowels: " << vowels << std::endl;
    std::cout << "Number of consonants: " << consonants << std::endl;

    return 0;
}
