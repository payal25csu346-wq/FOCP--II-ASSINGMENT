#include <iostream>
using namespace std;

int main() {
    char ch;
    cout << "Enter a single character: ";
    cin >> ch;

    // Check if it's a number
    if (ch >= '0' && ch <= '9') {
        cout << "The symbol is a NUMBER." << endl;
    }
    // Check if it's a letter
    else if ((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z')) {

        // Convert uppercase to lowercase manually
        char lower;
        if (ch >= 'A' && ch <= 'Z')
            lower = ch + 32;
        else
            lower = ch;

        // Check for vowel
        if (lower == 'a' || lower == 'e' || lower == 'i' ||
            lower == 'o' || lower == 'u') {
            cout << "The symbol is a VOWEL." << endl;
        } else {
            cout << "The symbol is a CONSONANT." << endl;
        }
    }
    // Otherwise special character
    else {
        cout << "The symbol is a SPECIAL CHARACTER." << endl;
    }

    return 0;
}
