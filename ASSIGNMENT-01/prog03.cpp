#include <iostream>
using namespace std;

int main() {
    int n, sum = 0;
    cout << "Enter a number: ";
    cin >> n;
    
    if (n < 0) {
        n = -n;
    }

    do {
        sum += n % 10;  
        n /= 10;        
    } while (n > 0);

    cout << "Sum of the digits: " << sum << endl;

    return 0;
}
