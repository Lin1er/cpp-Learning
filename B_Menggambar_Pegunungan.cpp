#include <iostream>

using namespace std;

int main() {
    int N;
    cin >> N;

    // Menggambar pegunungan tingkat N
    for (int i = 1; i <= N; ++i) {
        // Menggambar pegunungan tingkat i ke atas
        for (int j = 1; j <= i; ++j) {
            cout << "*";
        }
        cout << endl;
    }

    // Menggambar baris tengah pegunungan tingkat N
    for (int i = 1; i <= N; ++i) {
        cout << "*";
    }
    cout << endl;

    // Menggambar pegunungan tingkat N ke bawah
    for (int i = N; i >= 1; --i) {
        // Menggambar pegunungan tingkat i ke bawah
        for (int j = 1; j <= i; ++j) {
            cout << "*";
        }
        cout << endl;
    }

    return 0;
}
