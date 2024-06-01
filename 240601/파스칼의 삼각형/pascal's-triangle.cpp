#include <iostream>
#include <string>
using namespace std;

void fill_triangle(int** triangle, int n) {
    for (int i = 2; i < n; i++) {
        for (int j = 1; j < n; j++) {
            if (j < i) {
                triangle[i][j] = triangle[i-1][j-1] + triangle[i-1][j];
            }
        }
    }
}

void set_triangle(int** triangle, int n) {
    for (int i = 0; i < n; i++) {
        triangle[i][0] = 1;
        for (int j = 0; j < n; j++) {
            if (i == j) {
                triangle[i][j] = 1;
            }
        }
    }
}

int main() {
    // input
    int n;
    cin >> n;
    int** triangle = new int* [n];
    for (int i = 0; i < n; i++) {
        triangle[i] = new int [n];
    }

    // set triangle
    set_triangle(triangle, n);

    // fill triangle (n > 2)
    if (n > 2) {
        fill_triangle(triangle, n);
    }
    
    // print
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (i >= j) {
                cout << triangle[i][j] << " ";
            }
        }
        cout << endl;
    }

    // delete
    for (int i = 0; i < n; i++) {
        delete[] triangle[i];
    }
    delete[] triangle;

    return 0;
}