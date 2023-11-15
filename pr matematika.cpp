#include <bits/stdc++.h>
using namespace std;

int main(){
    float A1, B1, C1, D1;
    float A2, B2, C2, D2;
    float A3, B3, C3, D3;
    char p;

    cin>>p>>A1>>p>>B1>>p>>p>>p>>C1>>p>>D1>>p;
    cin>>p>>A2>>p>>B2>>p>>p>>p>>C2>>p>>D2>>p;
    cin>>p>>A3>>p>>B3>>p>>p>>p>>C3>>p>>D3>>p;

    cout<<(A1+B1)*(C1-D1)<<" "<<(A2+B2)*(C2-D2)<<" "<<(A3+B3)*(C3-D3);
    return 0;
}