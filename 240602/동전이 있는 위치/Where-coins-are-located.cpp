#include <iostream>
#include <string>
using namespace std;

void set_square(int** square, int r, int c) 
{
    square[r][c] = 1;
}

int main() 
{
    // input
    int n, m;
    cin >> n >> m;
    int** square = new int* [n];
    for (int i = 0; i < n; i++) {
        square[i] = new int [n] {0};
    }
    int r, c;
    for (int i = 0; i < m; i++) {
        cin >> r >> c;
        r--;
        c--;
        // set_square
        set_square(square, r, c);
    }

    // print
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << square[i][j] << " ";
        }
        cout << endl;
    }

    // delete
    for (int i = 0; i < n; i++) {
        delete[] square[i];
    }
    delete[] square;

    return 0;
}