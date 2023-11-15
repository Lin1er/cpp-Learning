#include <iostream>
#include <string>
using namespace std;

struct Peserta
{
    string id;
    int sesi1, sesi2, sesi3;

    // Konstruktor default
    Peserta() {}

    // Konstruktor dengan argumen
    Peserta(string _id, int _sesi1, int _sesi2, int _sesi3)
    {
        id = _id;
        sesi1 = _sesi1;
        sesi2 = _sesi2;
        sesi3 = _sesi3;
    }
};


bool bandingPeserta(Peserta peserta)
{
    if (peserta.sesi3 > peserta.sesi2 && peserta.sesi2 > peserta.sesi1)
    {
        return true;
    }
    return false;
}

int main()
{
    int n;
    cout << "Masukkan jumlah peserta: ";
    cin >> n;

    Peserta peserta[n];

    for (int i = 0; i < n; ++i)
    {
        string id;
        int sesi1, sesi2, sesi3;
        cout << "Masukkan ID dan nilai sesi 1, sesi 2, sesi 3 untuk peserta ke-" << i + 1 << ": ";
        cin >> id >> sesi1 >> sesi2 >> sesi3;
        peserta[i] = Peserta(id, sesi1, sesi2, sesi3);
    }

    for (int i = 0; i < n; ++i)
    {
        if (bandingPeserta(peserta[i]))
        {
            cout << "Peserta dengan ID " << peserta[i].id << " berhasil lolos seleksi." << endl;
        }
        else
        {
            cout << "Peserta dengan ID " << peserta[i].id << " tidak lolos seleksi." << endl;
        }
    }

    return 0;
}
