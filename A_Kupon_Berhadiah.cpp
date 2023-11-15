#include <bits/stdc++.h>
using namespace std;

int main(){
    short n;
    int x;
    cin>>n>>x;
    vector<int> arrKupon(n);
    for (int i = 0; i < n; i++){
        cin>>arrKupon[i];
    }

    int jarakTerkecil = 1e9;
    int nilaiMurniTerkecil = 1e9;
    int kuponPemenang = 0;

    for (int i = 0; i < n; i++)
    {
        int jarak = abs(x-arrKupon[i]);

        if(jarak<jarakTerkecil){
            jarakTerkecil=jarak;
            nilaiMurniTerkecil=arrKupon[i];
            kuponPemenang=arrKupon[i];
        } else if(jarak == jarakTerkecil&&arrKupon[i]<nilaiMurniTerkecil){
            nilaiMurniTerkecil=arrKupon[i];
            kuponPemenang=arrKupon[i];
        }
    }
    cout<<kuponPemenang<<endl;
}