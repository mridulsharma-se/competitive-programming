#include <bits/stdc++.h>
using namespace std;

int main() {
    int mat[5][5];

    for(int i = 0; i < 5; i++) {
        for(int j = 0; j < 5; j++) {
            cin >> mat[i][j];
        }
    }
    int row, col;
    for(int i = 0; i < 5; i++) {
        for(int j = 0; j < 5; j++) {
            if(mat[i][j] == 1) {
                row = i;
                col = j;
            }
        }
    }
    int moves = abs(2 - row) + abs(2 - col);
    cout << moves << "\n";

    return 0;
}