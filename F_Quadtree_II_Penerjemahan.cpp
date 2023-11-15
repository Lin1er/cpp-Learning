#include <bits/stdc++.h>
using namespace std;

int N, r, c, p;
vector<vector<int>> matrix;

void fillMatrix(int r, int c, int size, const string& code){
    if(code.empty()){
        for(int i = r; i<r+size; i++){
            for (int j = c; j < c+size; j++){
                matrix[i][j]=1;
            }
        }
        return;
    }
    int newSize = size/2;
    switch (code[0]){
    case '0': fillMatrix(r, c, newSize, code.substr(1)); break;
    case '1': fillMatrix(r, c+newSize, newSize, code.substr(1)); break;
    case '2': fillMatrix(r+newSize, c, newSize, code.substr(1)); break;
    case '3': fillMatrix(r+newSize, c+newSize, newSize, code.substr(1)); break;
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cin>>N;
    vector<string> codes(N);
    for (string& code : codes) cin>>code;
    cin>>r>>c;
    for(p=1;(1<<p)<max(r,c);++p);
    int newSize = 1<<p;
    matrix.assign(newSize, vector<int>(newSize, 0));
    for(const string& code : codes) fillMatrix(0,0,newSize, code.substr(1));
    for(int i = 0; i<r;++i){
        for (int j = 0; j < c; j++){
            cout<<matrix[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}