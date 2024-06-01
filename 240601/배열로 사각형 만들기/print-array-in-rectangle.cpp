#include <iostream>
#include <string>
using namespace std;

int main() {
    int square[5][5];
    for (int i = 0; i < 5; i++) {
        square[i][0] = 1;
        square[0][i] = 1;
    }

    for (int i = 1; i < 5;i++) {
        for (int j = 1; j < 5; j++) {
            square[i][j] = square[i-1][j] + square[i][j-1];
        }
    }

    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            cout << square[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}