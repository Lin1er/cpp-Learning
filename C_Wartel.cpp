#include <iostream>
#include <map>
#include <string>

using namespace std;

int main() {
    int N, Q;
    cin >> N >> Q;

    // Membuat map untuk menyimpan data nama dan nomor telepon
    map<string, string> bukuTelepon;

    // Membaca dan menyimpan data nama dan nomor telepon ke dalam map
    for (int i = 0; i < N; ++i) {
        string nama, nomorTelepon;
        cin >> nama >> nomorTelepon;
        bukuTelepon[nama] = nomorTelepon;
    }

    // Mencari nomor telepon untuk setiap pertanyaan
    for (int i = 0; i < Q; ++i) {
        string nama;
        cin >> nama;

        // Menggunakan iterator untuk mencari nama dalam map
        auto it = bukuTelepon.find(nama);

        // Jika nama ditemukan, cetak nomor telepon, jika tidak, cetak NIHIL
        if (it != bukuTelepon.end()) {
            cout << it->second << endl;
        } else {
            cout << "NIHIL" << endl;
        }
    }
<<<<<<< Updated upstream
}
=======

    return 0;
}
>>>>>>> Stashed changes
