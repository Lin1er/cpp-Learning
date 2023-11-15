#include <bits/stdc++.h>
using namespace std;

int faktorialGanjilGenap(int n) {
    if (n == 0) {
        return 1;
    }
    if (n % 2 == 0) {
        return (n/2) * faktorialGanjilGenap(n - 1);
    }
    return (n) * faktorialGanjilGenap(n - 1);
}

int main() {
    int n;
    cin>>n;
    cout<<faktorialGanjilGenap(n);
}