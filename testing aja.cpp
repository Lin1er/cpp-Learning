#include <iostream>
#include <unordered_map>
#include <vector>
using namespace std;

int main() {
    int N;
    cin >> N;

    unordered_map<int, int> frequency;
    int maxFrequency = 0;

    for (int i = 0; i < N; i++) {
        int num;
        cin >> num;
        frequency[num]++;
        maxFrequency = max(maxFrequency, frequency[num]);
    }

    vector<int> modes;
    for (auto& pair : frequency) {
        if (pair.second == maxFrequency) {
            modes.push_back(pair.first);
        }
    }

    for (int mode : modes) {
        cout << mode << " ";
    }
    
    return 0;
}