#include <iostream>

int main() {
    int n, m;
    std::cin >> n >> m;

    int **rectangle1 = new int*[n];
    int **rectangle2 = new int*[n];

    for (int i = 0; i < n; i++) {
        rectangle1[i] = new int[m];
        rectangle2[i] = new int[m];
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            std::cin >> rectangle1[i][j];
        }
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            std::cin >> rectangle2[i][j];
        }
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (rectangle1[i][j] == rectangle2[i][j]) {
                std::cout << 0 << " ";
            } else {
                std::cout << 1 << " ";
            }
        }
        std::cout << std::endl;
    }


    return 0;
}