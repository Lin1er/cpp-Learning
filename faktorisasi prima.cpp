#include <bits/stdc++.h>
using namespace std;

void faktorisasi(int a){
    int b=0, c=a;
    for (int i = 2; i <= a; i++){
        while(c%i==0){
            b++;
            c/=i;
        }
        if(b>1) cout<<i<<"^"<<b;
        else if(b==1) cout<<i;
        if (i<a-1 && b>=1 && c!=1) cout<<" x ";
        if (c==1) return;
        b=0;
    }
}

int main(){
    int n;
    cin>>n;
    faktorisasi(n);
}