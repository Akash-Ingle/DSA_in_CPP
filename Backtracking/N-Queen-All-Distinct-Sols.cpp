// #include <iostream>
// using namespace std;

// bool isSafe(int **arr, int x, int y, int n) {
//     for (int row = 0; row < x; row++) {
//         if (arr[row][y] == 1)
//             return false;
//     }

//     int row = x, col = y;
//     while (row >= 0 && col >= 0) {
//         if (arr[row][col] == 1)
//             return false;
//         row--;
//         col--;
//     }

//     row = x, col = y;
//     while (row >= 0 && col < n) {
//         if (arr[row][col] == 1)
//             return false;
//         row--;
//         col++;
//     }

//     return true;
// }

// void printBoard(int **arr, int n) {
//     for (int i = 0; i < n; i++) {
//         for (int j = 0; j < n; j++) {
//             cout << arr[i][j] << " ";
//         }
//         cout << endl;
//     }
//     cout << endl;
// }

// void nQueen(int **arr, int x, int n) {
//     if (x >= n) {
//         printBoard(arr, n);
//         return;
//     }

//     for (int col = 0; col < n; col++) {
//         if (isSafe(arr, x, col, n)) {
//             arr[x][col] = 1;
//             nQueen(arr, x + 1, n);
//             arr[x][col] = 0; // Backtracking
//         }
//     }
// }

// int main() {
//     int n;
//     cin >> n;

//     int **arr = new int *[n];
//     for (int i = 0; i < n; i++) {
//         arr[i] = new int[n];
//         for (int j = 0; j < n; j++) {
//             arr[i][j] = 0;
//         }
//     }

//     nQueen(arr, 0, n);

//     // Deallocate memory
//     for (int i = 0; i < n; i++) {
//         delete[] arr[i];
//     }
//     delete[] arr;

//     return 0;
// }


#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

bool isSafe(int **arr, int x, int y, int n) {
    for (int row = 0; row < x; row++) {
        if (arr[row][y] == 1)
            return false;
    }

    int row = x, col = y;
    while (row >= 0 && col >= 0) {
        if (arr[row][col] == 1)
            return false;
        row--;
        col--;
    }

    row = x, col = y;
    while (row >= 0 && col < n) {
        if (arr[row][col] == 1)
            return false;
        row--;
        col++;
    }

    return true;
}

void printBoard(int **arr, int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
    printf("\n");
}

void nQueen(int **arr, int x, int n) {
    if (x >= n) {
        printBoard(arr, n);
        return;
    }

    for (int col = 0; col < n; col++) {
        if (isSafe(arr, x, col, n)) {
            arr[x][col] = 1;
            nQueen(arr, x + 1, n);
            arr[x][col] = 0; // Backtracking
        }
    }
}

int main() {
    int n;
    scanf("%d", &n);

    int **arr = (int **)malloc(n * sizeof(int *));
    for (int i = 0; i < n; i++) {
        arr[i] = (int *)malloc(n * sizeof(int));
        for (int j = 0; j < n; j++) {
            arr[i][j] = 0;
        }
    }

    nQueen(arr, 0, n);

    // Deallocate memory
    for (int i = 0; i < n; i++) {
        free(arr[i]);
    }
    free(arr);

    return 0;
}
