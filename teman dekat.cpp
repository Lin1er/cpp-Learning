#include <bits/stdc++.h>
using namespace std;

struct Siswa{
    int x, y;
};

pair<int,int> fungsiTeman(Siswa raw[], int n, int d){
    int maxAns=INT_MIN;
    int minAns=INT_MAX;
    for (int i = 0; i < n; i++){
        for (int j = i+1; j < n; j++){
            int hasil=pow(abs(raw[j].x-raw[i].x), d) +pow(abs(raw[j].y-raw[i].y), d);
            maxAns=max(hasil, maxAns);
            minAns=min(hasil, minAns);
        }
    }
    return {minAns, maxAns};
}

int main(){
    int n, d;
    cin>>n>>d;
    Siswa siswa[n];
    for (int i = 0; i < n; i++){
        cin>>siswa[i].x>>siswa[i].y;
    }
    pair<int, int> hasil= fungsiTeman(siswa, n, d);
    cout<<hasil.first<<" "<<hasil.second;
}