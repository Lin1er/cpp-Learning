#include <iostream>
#include <string>

using namespace std;

int main() {
    string S1, S2, S3, S4;
    cin >> S1 >> S2 >> S3 >> S4;
 
    size_t index = S1.find(S2);

    S1.erase(index, S2.length());

    index = S1.find(S3);

    S1.insert(index + S3.length(), S4);

    cout << S1 << endl;

    return 0;
}
