#include <bits/stdc++.h>
using namespace std;

void isi(vector<vector <int>>& n, int N){
    for (int i = 0; i < 2; i++){
        vector<int> row;
        for (int j = 0; j < N; j++){
            int num;
            cin>>num;
            row.push_back(num);
        }
        n.push_back(row);
    }
}

int main(){
    int n;
    cin>>n;
    vector<vector <int>> baris;
    isi(baris, n);
    int t;
    cin>>t;
    for (int i = 0; i < t; i++)
    {        
        char tempA, tempB;
        int x, y;
        cin>>tempA>>x>>tempB>>y;
        int p, q;
        p= tempA-'A';q=tempB-'A';
        x--;y--;
        swap(baris[p][x], baris[q][y]);
    }
    for (int i = 0; i < 2; i++){
        for (int j = 0; j < n; j++){
            cout<<baris[i][j]<<" ";
        }
        cout<<endl;
    }
}