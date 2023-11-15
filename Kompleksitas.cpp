#include <iostream>
#include <cmath>

using namespace std;

bool isPrime(int num) {
    if (num <= 1) {
        return false;
    }
    for (int i = 2; i <= sqrt(num); ++i) {
        if (num % i == 0) {
            return false;
        }
    }
    return true;
}

int main() {
    int N;
    cin >> N;
    int num[N];

    for (int i = 0; i < N; ++i) {
        cin >> num[i];
    }

    for (int i = 0; i < N; i++)
    {
        if (isPrime(num[i])) {
            cout << "YA" << endl;
        } else {
            cout << "BUKAN" << endl;
        }
    }
    return 0;
}
