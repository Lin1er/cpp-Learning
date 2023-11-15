#include <bits/stdc++.h>
using namespace std;

int balik(int x){
    int temp = x;
    int akhir = 0;
    while (temp>0){
        akhir = (akhir*10)+(temp%10);
        temp /= 10;
    }
    return akhir;
}

int main(){
    int a, b;
    cin>>a>>b;
    int hasiljumlah= balik(a)+balik(b);
    int hasilbalik= balik(hasiljumlah);
    cout<<hasilbalik;
}