#include <bits/stdc++.h>
using namespace std;

int main(){
    string S, T;
    cin>>S>>T;
    size_t found = S.find(T);
    while(found!=string::npos){
        S.erase(found, T.length());
        found = S.find(T);
    }
    cout<<S;
    return 0;
}