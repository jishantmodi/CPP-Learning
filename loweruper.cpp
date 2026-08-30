#include <iostream>
using namespace std;

int main() {
    char ch;
    cout << "Enter a character: ";
    cin >> ch;

    if (ch >= 'a' && ch <= 'z') {
        char upper = ch - 32;
        cout << "Uppercase: " << upper << endl;
    }
    else if (ch >= 'A' && ch <= 'Z') {
        char lower = ch + 32;
        cout << "Lowercase: " << lower << endl;
    }
    else {
        cout << "Not an alphabet!" << endl;
    }

    return 0;
}