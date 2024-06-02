#include <iostream>
using namespace std;

int main() {
    const int rows = 5;
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < rows - i; ++j) {
            cout << "* ";
        }
        cout <<endl;
    }

    return 0;
}
