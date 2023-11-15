#include <iostream>
#include <cmath>

using namespace std;

int applyFunction(int A, int B, int K, int x) {
    if (K == 0) {
        return x;
    }
    return applyFunction(A, B, K - 1, abs(A * x + B));
}

int main() {
    int A, B, K, x;
    cin >> A >> B >> K >> x;
    cout << applyFunction(A, B, K, x) << endl;
    return 0;
}
