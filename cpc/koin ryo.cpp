#include <iostream>
#include <cmath>

bool canTransactionBeDone(long long N) {
    while (N % 5 == 0) {
        N /= 5;
    }
    return N == 1;
}

int main() {
    long long N;
    std::cin >> N;

    if (canTransactionBeDone(N)) {
        std::cout << "YES" << std::endl;
    } else {
        std::cout << "NO" << std::endl;
    }

    return 0;
}
