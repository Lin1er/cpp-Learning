#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, k;
    cin>>n>>k;
    vector<int> tinggi(n);
    for (int i = 0; i < n; i++) cin>>tinggi[i];
    sort(tinggi.begin(), tinggi.end());
    cout<<tinggi[k-1];
}