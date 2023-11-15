#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n, m, p;
    cin >> n >> m >> p;

    vector<vector<int>> awal1(n, vector<int>(m, 0));
    vector<vector<int>> awal2(m, vector<int>(p, 0));
    vector<vector<int>> hasil(n, vector<int>(p, 0));

    // Membaca input untuk matriks awal1
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            cin >> awal1[i][j];
        }
    }

    // Membaca input untuk matriks awal2
    for (int i = 0; i < m; ++i) {
        for (int j = 0; j < p; ++j) {
            cin >> awal2[i][j];
        }
    }

    // Menghitung hasil perkalian matriks
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < p; ++j) {
            for (int k = 0; k < m; ++k) {
                hasil[i][j] += awal1[i][k] * awal2[k][j];
            }
        }
    }

    // Menampilkan hasil perkalian matriks
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < p; ++j) {
            cout << hasil[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
