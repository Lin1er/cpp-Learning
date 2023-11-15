#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int fib1 = 0, fib2 = 1, nextTerm, batasan = 3;

    cout << fib1 << " " << fib2 << " ";

    nextTerm = fib1 + fib2;
    while (batasan <= n) {
        cout << nextTerm << " ";
        fib1 = fib2;
        fib2 = nextTerm;
        nextTerm = fib1 + fib2;
        batasan++;
    }

    cout << endl;
    return 0;
}
