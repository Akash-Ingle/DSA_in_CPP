#include <iostream>
#include <vector>
using namespace std;

bool isSafe(const vector<vector<string>>& board, int x, int y, int n) {
    for (int row = 0; row < x; row++) {
        if (board[row][y] == "Q")
            return false;
    }

    int row = x, col = y;
    while (row >= 0 && col >= 0) {
        if (board[row][col] == "Q")
            return false;
        row--;
        col--;
    }

    row = x, col = y;
    while (row >= 0 && col < n) {
        if (board[row][col] == "Q")
            return false;
        row--;
        col++;
    }

    return true;
}

void printBoard(const vector<vector<string>>& board) {
    int n = board.size();
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << board[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;
}

void nQueen(vector<vector<string>>& board, int x, int n) {
    if (x >= n) {
        printBoard(board);
        return;
    }

    for (int col = 0; col < n; col++) {
        if (isSafe(board, x, col, n)) {
            board[x][col] = "Q";
            nQueen(board, x + 1, n);
            board[x][col] = "."; // Backtracking
        }
    }
}

int main() {
    int n;
    cin >> n;

    vector<vector<string>> board(n, vector<string>(n, "."));

    nQueen(board, 0, n);

    return 0;
}
