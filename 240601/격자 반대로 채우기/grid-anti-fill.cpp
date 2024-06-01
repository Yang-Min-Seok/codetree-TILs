#include <iostream>
#include <string>
using namespace std;
#define NORTH 1
#define SOUTH 0

bool in_range(int x, int y, int n) {
    return 0 <= x && x < n && 0 <= y && y < n;
}

void fill_in(int **square, int n) {
    
    int curr_dir = NORTH, curr_num = 1, x = n-1, y = n-1;
    while (curr_num <= n * n) {
        // fill in
        square[x][y] = curr_num++;
        
        // next step
        int nx, ny;

        if (curr_dir == NORTH) { // in case of north
            nx = x - 1;
            ny = y;
            if (!in_range(nx, ny, n)) {
                y--;
                curr_dir = SOUTH;
            } else {
                x--;
            }
        } else { // in case of south
            nx = x + 1;
            ny = y;
            if (!in_range(nx, ny, n)) {
                y--;
                curr_dir = NORTH;
            } else{
                x++;
            }
        }
    }

}

void delete_square(int **square, int n) {
    for (int i = 0; i < n; i++) {
        delete[] square[i];
    }
    delete[] square;
}

void print_square(int** square, int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << square[i][j] << " ";
        }
        cout << endl;
    }
}

int main() {
    // input
    int n;
    cin >> n;
    int** square = new int* [n];
    for (int i = 0; i < n; i++) {
        square[i] = new int[n];
    }

    // fill in
    fill_in(square, n);

    // output
    print_square(square, n);

    // delete
    delete_square(square, n);

    return 0;
}