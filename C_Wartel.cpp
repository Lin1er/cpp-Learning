#include <bits/stdc++.h>
using namespace std;

struct Contact{
    string nama;
    int nomor;
}; 

int main(){
    int n, cari;
    cin>>n>>cari;
    string caris[cari];
    Contact kontak[n];
    for(int i = 0; i<n; i++) cin>>kontak[i].nama>>kontak[i].nomor;
    for (int i = 0; i < cari; i++) cin>>caris[i];
    for(int i=0; i<cari; i++){
        for (int j = 0; j < n; j++){
            size_t ketemu = kontak[j].nama.find(caris[i]);
            if(ketemu!=string::npos){ 
                cout<<kontak[j].nomor<<endl;
                break;
            }
            if(j==n-1&&ketemu==string::npos) cout<<"NIHIL"<<endl;
        }
    }
}