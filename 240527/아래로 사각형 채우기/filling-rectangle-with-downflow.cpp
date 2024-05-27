#include <iostream>

int main() {
    int n;
    std::cin >> n;

    int **square = new int *[n];
    for (int i = 0; i < n; i++) {
        square[i] = new int [n];
    }

    for (int i = 0; i < n; i++) {
        int curr_int = i + 1;
        for (int j = 0; j < n; j++) {
            square[i][j] = curr_int;
            curr_int += n;
        }
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            std::cout << square[i][j] << " ";
        }
        std::cout << std::endl;
    }

    return 0;
}