#include <bits/stdc++.h>
using namespace std;

string caesarChipper(string s, int n){
    for (int i = 0; i < s.length(); i++)
    {
        if(isalpha(s[i])){
            char base = islower(s[i]) ? 'a' : 'A';
            s[i] = ((s[i]-base+n)%26)+base;
        }
    }
    return s;
}

int main(){
    string s;
    int t;
    cin>>s>>t;
    cout<<caesarChipper(s, t);
}