#include <bits/stdc++.h>
using namespace std;

// int main(){
//     int n, q;
//     cin>>n;
//     vector<long long> berat(n);
//     for(int i=0;i<n;i++) cin>>berat[i];
//     cin>>q;
//     for (int i = 0; i < q; i++){
//         long long x, y;
//         int hasil=0;
//         cin>>x>>y;
//         for (int j = 0; j < n; j++){
//             if(berat[j]>x&&berat[j]<=y)  hasil++;
//         }
//         cout<<hasil<<endl;
//     }
//     return 0;
// }

int main(){
    int n, q;
    cin>>n;
    vector<long long> berat(n);
    for(int i=0;i<n;i++) cin>>berat[i];
    cin>>q;
    while(q--){
        int x, y;
        cin>>x>>y;
        auto lower = lower_bound(berat.begin(), berat.end(), x+1);
        auto upper = upper_bound(berat.begin(), berat.end(), y);
        cout<<upper-lower<<endl;
    }
}