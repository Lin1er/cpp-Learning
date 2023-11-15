#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    if(1<=n && n<=90){   
        long long fib1 = 0, fib2 = 1, nextTerm, batasan = 2;
        cout << fib1 << " " << fib2 << " ";
        nextTerm = fib1 + fib2;
        while (batasan < n) {
            cout << nextTerm << " ";
            fib1 = fib2;
            fib2 = nextTerm;
            nextTerm = fib1 + fib2;
            batasan++;
        }
        cout << endl;
    }
    return 0;   
}
