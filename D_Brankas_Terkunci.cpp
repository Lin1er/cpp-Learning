#include <bits/stdc++.h>
using namespace std;

int N, k;
int catat[100];

void tulis(int depth){
    if(depth>=k){
        for(int i=0; i<k; i++){
            cout<<catat[i]<<" ";
        }
        cout<<endl;
    } else {
        for (int i = catat[depth-1]+1; i <=N; i++){
            catat[depth]=i;
            tulis(depth+1);
        }
    }
}

int main(){
    cin>>N>>k;
    tulis(0);
}