#include <iostream>
#include <vector>
#include <functional>
using namespace std;

int M, N;
vector<vector<int>> board;

int getValue(int x, int y) {
    if (board[x][y] == 0) {
        return 0;
    }

    vector<vector<bool>> visited(M, vector<bool>(N, false));
    int count = 0;

    function<void(int, int)> dfs = [&](int r, int c) {
        visited[r][c] = true;
        count++;

        int dx[] = {-1, 1, 0, 0};
        int dy[] = {0, 0, -1, 1};

        for (int i = 0; i < 4; ++i) {
            int newRow = r + dx[i];
            int newCol = c + dy[i];
            if (newRow >= 0 && newRow < M && newCol >= 0 && newCol < N &&
                !visited[newRow][newCol] && board[newRow][newCol] == board[x][y]) {
                dfs(newRow, newCol);
            }
        }
    };

    dfs(x, y);

    if (count < 2) {
        return 0;
    } else {
        return count * (count - 1);
    }
}

int main() {
    cin >> M >> N;

    board.resize(M, vector<int>(N));
    for (int i = 0; i < M; ++i) {
        for (int j = 0; j < N; ++j) {
            cin >> board[i][j];
        }
    }

    int B, K;
    cin >> B >> K;

    cout << getValue(B, K) << endl;

    return 0;
}
