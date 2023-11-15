#include <bits/stdc++.h>
using namespace std;

int fungsi(int xi, int xj, int yi, int yj, int d){
    return pow(abs(xj-xi), d) + pow(abs(yj-yi), d);
}
int main(){
    int n, d;
    cin>>n>>d;
    int x[n], y[n];
    for (int i = 0; i < n; i++){
        cin>>x[i]>>y[i];
    }
    
    int min = INT_MAX;
    int max = INT_MIN;

    for (int i = 0; i < n; i++){
        for (int j = i+1; j < n; j++){
            int res = fungsi(x[i], x[j], y[i], y[j], d);
            if(res<min) min=res;
            if(res>max) max=res;
        }
    }
    cout<<min<<" "<<max;
}