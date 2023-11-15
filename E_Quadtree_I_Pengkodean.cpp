#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

vector<vector<int>> m;
int nJawaban;
vector<string> jawaban;

bool homogen(int r, int c, int k) {
    int val = m[r][c];
    for (int i = r; i < r + k; i++) {
        for (int j = c; j < c + k; j++) {
            if (m[i][j] != val) return false;
        }
    }
    return true;
}

void quadTree(int r, int c, int k, string s) {
    if (homogen(r, c, k)) {
        if (m[r][c] == 1) {
            jawaban.push_back("1" + s);
            nJawaban++;
        }
    } else {
        quadTree(r, c, k / 2, s + "0");
        quadTree(r, c + (k / 2), k / 2, s + "1");
        quadTree(r + (k / 2), c, k / 2, s + "2");
        quadTree(r + (k / 2), c + (k / 2), k / 2, s + "3");
    }
}

int main() {
    int r, c;
    cin >> r >> c;

    int maxRc = max(r, c);
    int pow2 = pow(2, ceil(log2(maxRc)));

    m.resize(pow2, vector<int>(pow2, 0));

    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            cin >> m[i][j];
        }
    }

    nJawaban = 0;
    quadTree(0, 0, pow2, "");
    cout << nJawaban << endl;
    for (int i = 0; i < nJawaban; i++) {
        cout << jawaban[i] << endl;
    }

    return 0;
}
