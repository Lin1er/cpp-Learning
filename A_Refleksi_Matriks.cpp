#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, nilaiMatriks = 0;
    cin>>n>>n;
    vector<vector<int>> mx1(n, vector<int>(n));
    vector<vector<int>> mx2(n, vector<int>(n));
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            cin>>mx1[i][j];
        }
    }
    cin>>n>>n;
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            cin>>mx2[i][j];
        }
    }
    //identik
    nilaiMatriks=1;
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            if(mx1[i][j]!=mx2[i][j]){
                nilaiMatriks=0;
                break;
            }
        }
        if(nilaiMatriks==0) break;
    }
    if(nilaiMatriks==1){ 
        cout<<"identik";
        return 0;
    }

    //vertikal
    nilaiMatriks=2;
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            if(mx1[i][j]!=mx2[i][n-j-1]){
                nilaiMatriks=0;
                break;
            }
        }
        if(nilaiMatriks==0) break;
    }
    if(nilaiMatriks==2){
        cout<<"vertikal";
        return 0;
    }

    //horizontal
    nilaiMatriks=3;
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            if(mx1[i][j]!=mx2[n-i-1][j]){
                nilaiMatriks=0;
                break;
            }
        }
        if(nilaiMatriks==0) break;
    }
    if(nilaiMatriks==3){
        cout<<"horisontal";
        return 0;
    }

    //diagonal kanan bawah
    nilaiMatriks = 4;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (mx1[i][j] != mx2[j][i]) {
                nilaiMatriks = 0;
                break;
            }
        }
        if (nilaiMatriks == 0) break;
    }
    if (nilaiMatriks == 4) {
        cout << "diagonal kanan bawah";
        return 0;
    }

    //diagonal kiri bawah
    nilaiMatriks = 5;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (mx1[i][j] != mx2[n-j-1][n-i-1]) {
                nilaiMatriks = 0;
                break;
            }
        }
        if (nilaiMatriks == 0) break;
    }
    if (nilaiMatriks == 5) {
        cout << "diagonal kiri bawah";
        return 0;
    }

    cout<<"tidak identik";
    return 0;
}