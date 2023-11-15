#include <bits/stdc++.h>
using namespace std;

struct Siswa
{
    int x;
    int y;
};
int pangkat(int n, int x){
    int hasil = n;
    for (int i = 0; i < x; i++){
        hasil*=n;
    }
    return hasil;
}


int main(){
    int n, d;
    cin>>n;
    Siswa siswa[n];
    for (int i = 0; i < n; i++){
        cin>>siswa[i].x>>siswa[i].y;
    }
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){

        }
    }
    
}