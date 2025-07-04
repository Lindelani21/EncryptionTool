//============================================================================
// Name        : EncryptionTool.cpp
// Author      : Lindelani21
// Version     : 1.0
//============================================================================

#include <iostream>
#include <string>
#include <cctype>

using namespace std;

// Function to perform Caesar cipher encryption/decryption
string caesarCipher(string text, int shift, bool encrypt) {
    string result = "";

    // If decrypting, make the shift negative
    if (!encrypt) {
        shift = -shift;
    }

    for (char c : text) {
        if (isalpha(c)) {
            char base = isupper(c) ? 'A' : 'a';
            c = (c - base + shift) % 26;
            if (c < 0) c += 26; // Handle negative shifts
            c += base;
        }
        result += c;
    }

    return result;
}

// Function to perform ROT13 transformation
// ROT13 is a Caesar shift of 13
string rot13(string text) {
    return caesarCipher(text, 13, true);
}


int displayMenu() {
    int choice;
    cout << "\nBasic Encryption Tool\n";
    cout << "1. Caesar Cipher - Encrypt\n";
    cout << "2. Caesar Cipher - Decrypt\n";
    cout << "3. ROT13 (Encrypt/Decrypt)\n";
    cout << "4. Exit\n";
    cout << "Enter your choice: ";
    cin >> choice;
    cin.ignore(); // Clear the input buffer
    return choice;
}

int main() {
    while (true) {
        int choice = displayMenu();

        if (choice == 4) {
            cout << "Exiting program. Goodbye!\n";
            break;
        }

        string text;
        cout << "Enter the text: ";
        getline(cin, text);

        switch (choice) {
            case 1: {
                int shift;
                cout << "Enter shift value (1-25): ";
                cin >> shift;
                cin.ignore();
                cout << "Encrypted text: " << caesarCipher(text, shift, true) << endl;
                break;
            }
            case 2: {
                int shift;
                cout << "Enter shift value (1-25): ";
                cin >> shift;
                cin.ignore();
                cout << "Decrypted text: " << caesarCipher(text, shift, false) << endl;
                break;
            }
            case 3:
                cout << "ROT13 transformed text: " << rot13(text) << endl;
                break;
            default:
                cout << "Invalid choice. Please try again.\n";
        }
    }

    return 0;
}
