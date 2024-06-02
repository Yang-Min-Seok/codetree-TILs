#include <iostream>
#include <string>
using namespace std;

void fill_square(int** square, int n)
{
    for (int i = 1; i < n; i++) {
        for (int j = 1; j < n; j++) {
            square[i][j] = square[i-1][j-1] + square[i][j-1] + square[i-1][j];
        }
    }
}

void set_square(int** square, int n) 
{
    for (int i = 0; i < n; i++) {
        square[i][0] = 1;
        square[0][i] = 1;
    }
}

int main() 
{
    
    // input
    int n;
    cin >> n;
    int** square = new int* [n];
    for (int i = 0; i < n; i++) {
        square[i] = new int [n] {0};
    }

    // set_square
    set_square(square, n);

    // fill_square
    fill_square(square, n);

    // print
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << square[i][j] << " ";
        }
        cout << endl;
    }

    // free memory
    for (int i = 0; i < n; i++) {
        delete[] square[i];
    }
    delete[] square;

    return 0;
}