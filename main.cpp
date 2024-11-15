#include <iostream>
using namespace std;

int main() {
    // Display Pattern A
    cout << "Pattern A" << endl;
    for (int i = 1; i <= 10; i++) { // Outer loop for each row
        for (int j = 1; j <= i; j++) { // Inner loop to print '+' symbols
            cout << "+";
        }
        cout << endl; // Move to the next line after each row
    }

    // Display a separator line for clarity
    cout << endl;

    // Display Pattern B
    cout << "Pattern B" << endl;
    for (int i = 10; i >= 1; i--) { // Outer loop for each row
        for (int j = 1; j <= i; j++) { // Inner loop to print '+' symbols
            cout << "+";
        }
        cout << endl; // Move to the next line after each row
    }

    return 0;
}
