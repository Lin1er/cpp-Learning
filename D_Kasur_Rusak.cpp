#include <iostream>
#include <string>

using namespace std;

bool isPalindrome(string S, int start, int end) {
    if (start >= end) {
        return true;
    }
    if (S[start] != S[end]) {
        return false;
    }
    return isPalindrome(S, start + 1, end - 1);
}

int main() {
    string S;
    cin >> S;
    if (isPalindrome(S, 0, S.length() - 1)) {
        cout << "YA" << endl;
    } else {
        cout << "BUKAN" << endl;
    }
    
    return 0;
}
