#include <bits/stdc++.h>
using namespace std;

int main(){
    int freq[10005];
    memset(freq, 0, sizeof(freq));
    int n;
    cin>>n;
    for (int i = 0; i < n; i++)
    {
        int m;
        cin>>m;
        freq[m]++;
    }
    int ans=0;
    for (int i = 1; i <= 1000; i++)
    {
        if(freq[ans]<=freq[i]){
            ans=i;
        }
    }
    cout<<ans<<endl;
    return 0;
    
}