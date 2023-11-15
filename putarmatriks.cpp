#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, m;
    cin>>n>>m;
    int awal[n][m];

    for(int i=0;i<n;i++){
        for (int j = 0; j < m; j++)
        {
            cin>>awal[i][j];
        }
    }
    int hasil[m][n];
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            hasil[i][j]=awal[j][i];
        }
        
    }
    for(int i=0;i<m;i++){
        for (int j = n-1; j >= 0 ; j--)
        {
            cout<<hasil[i][j]<<" ";
        }
        cout<<endl;
    }
}