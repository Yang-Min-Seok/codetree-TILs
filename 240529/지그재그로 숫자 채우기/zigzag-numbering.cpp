#include <iostream>

int main() {
    int n, m;
    std::cin >> n >> m;
    int **rect = new int *[n];
    for (int i = 0; i < n; i++) {
        rect[i] = new int[m];
    }

    int curr_num = 0;
    for (int i = 0; i < n; i++) {
        if (i % 2) {
            for (int j = n-1; j >= 0; j--) {
                rect[j][i] = curr_num;
                curr_num ++;
            }
        } else {
            for (int j = 0; j < n; j++) {
                rect[j][i] = curr_num;
                curr_num ++;
            }
        }
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            std::cout << rect[i][j] << " ";
        }
        std::cout << std::endl;
    }

    return 0;
}