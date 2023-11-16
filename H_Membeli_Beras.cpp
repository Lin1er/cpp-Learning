#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

struct Beras {
    int berat;
    int harga;
};

bool perbandingan(Beras a, Beras b) {
    return (double)a.harga / a.berat > (double)b.harga / b.berat;
}

int main() {
    int N, X;
    cin >> N >> X;

    vector<Beras> daftarBeras(N);

    // Membaca input berat dan harga
    for (int i = 0; i < N; ++i) {
        cin >> daftarBeras[i].berat;
    }

    for (int i = 0; i < N; ++i) {
        cin >> daftarBeras[i].harga;
    }

    // Mengurutkan berdasarkan harga per kilogram secara menurun
    sort(daftarBeras.begin(), daftarBeras.end(), perbandingan);

    double uangDihabiskan = 0.0;

    // Membeli beras sesuai urutan yang sudah diurutkan
    for (int i = 0; i < N; ++i) {
        if (X >= daftarBeras[i].berat) {
            uangDihabiskan += daftarBeras[i].harga;
            X -= daftarBeras[i].berat;
        } else {
            uangDihabiskan += (double)X / daftarBeras[i].berat * daftarBeras[i].harga;
            break;
        }
    }

    // Menampilkan hasil dengan tepat 5 angka di belakang koma
    cout << fixed;
    cout.precision(5);
    cout << uangDihabiskan << endl;

    return 0;
}
