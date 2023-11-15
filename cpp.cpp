#include<iostream>
using namespace std;

int main(){
    int T;
    cin>>T;
    int n;
    cin>>n;

    struct Peserta
    {
        string id;
        int sesi1, sesi2, sesi3;
    };
    
    Peserta peserta[n];

    for (int i = 0; i < n; i++)
    {
        cout<<"Masukkan ID dan nilai sesi 1, sesi 2, sesi 3 untuk peserta ke-"<<i+1<<": ";
        cin>>peserta[i].id>>peserta[i].sesi1>>peserta[i].sesi2>>peserta[i].sesi3;
    }

    return 0;
}