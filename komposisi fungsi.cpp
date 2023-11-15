#include <iostream>
using namespace std;
int A, B, x;

int fungsi(int k){
    if(k==0) cout<<0;
    else if(k==1) return abs(A*x+B);
    else return abs(A*fungsi(k-1)+B);
}

int main(){
    int K;
    cin>>A>>B>>K>>x;
    cout<<fungsi(K);
}