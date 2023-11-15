#include <iostream>
#include <string>

using namespace std;

int main() {
    string S;
    cin >> S;

    bool isCamelCase = false;
    bool isSnakeCase = false;

    // Mengecek apakah S adalah camel case atau snake case
    if (islower(S[0])) {
        isSnakeCase = true;
    } else {
        isCamelCase = true;
    }

    for (int i = 1; i < S.length(); ++i) {
        if (isupper(S[i])) {
            isCamelCase = true;
        } else if (S[i] == '_') {
            isSnakeCase = true;
        }
    }

    // Mengubah gaya penulisan variabel sesuai dengan permintaan
    if (isCamelCase) {
        for (char &c : S) {
            if (isupper(c)) {
                c = tolower(c);
                cout << "_";
            }
            cout << c;
        }
    } else if (isSnakeCase) {
        bool uppercaseNextChar = false;
        for (char &c : S) {
            if (c == '_') {
                uppercaseNextChar = true;
            } else {
                if (uppercaseNextChar) {
                    c = toupper(c);
                    uppercaseNextChar = false;
                }
                cout << c;
            }
        }
    }

    cout << endl;

    return 0;
}
