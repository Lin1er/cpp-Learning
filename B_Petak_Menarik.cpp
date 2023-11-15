#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, m, k;
    cin >>n>>m>>k;
    vector<vector<int>> papanGame(n, vector<int>(m));
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++) cin>>papanGame[i][j];
    }
    for(int j=0; j<m;j++){
        for(int i =0; i<n; i++){
            if((i==0 ? 1 : papanGame[i-1][j])*(i==n-1 ? 1 : papanGame[i+1][j])*(j==0 ? 1 : papanGame[i][j-1])*(j==m-1 ? 1 : papanGame[i][j+1])==k){
                cout<<(i+1)<<" "<<(j+1)<<endl;
                return 0;
            }
        }
    }
    cout<<"0 0";
    return 0;
}