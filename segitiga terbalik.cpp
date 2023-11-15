#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    for (int baris = 1; baris  <= n; baris++){
            cout<<" ";
        for(int kolom=1; kolom<=baris -1; kolom++){
        }
        for (int indeks = 1; indeks <=2*(n-baris  )+1; indeks++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
}