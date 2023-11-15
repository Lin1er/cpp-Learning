#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    int num;
    cin >> n;
    unordered_map<int, int> umap;
    for (int i = 0; i < n; i++){
        cin>>num;
        umap[num]++;
    }
    int max_value;
    for(const auto& pair : umap){
        max_value = max(max_value, pair.first);
    }

    cout<<max_value;
}