#include <iostream>

bool in_range(int x, int y, int n, int m) {
    return (0 <= x && x < n && 0 <= y && y < m);
}

int main() {
    // 입력
    int n, m;
    std::cin >> n >> m;

    // 동적 할당
    int **rect = new int *[n];
    for (int i = 0; i < n; i++) {
        rect[i] = new int [m];
    }

    // 채우기
    int curr_col = 0, curr_num = 1;
    int x = 0, y = 0;
    while (curr_col < m) {
        if (!in_range(x, y, n, m)) {
            x = 0;
            y = curr_col + 1;
            curr_col ++;
        } else {
            rect[x][y] = curr_num;
            curr_num ++;
            x++;
            y--;
        }
    }

    int curr_row = 1;
    x = 1, y = m - 1;
    while (curr_row < n) {
        if (!in_range(x, y, n, m)) {
            y = m - 1;
            x = curr_row + 1;
            curr_row ++;
        } else {
            rect[x][y] = curr_num;
            curr_num ++;
            x ++;
            y --;
        }
    }

    


    // 출력
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            std::cout << rect[i][j] << " ";
        }
        std::cout << std::endl;
    }

    // 동적 메모리 해제
    for (int i = 0; i < n; i++) {
        delete[] rect[i];
    }
    delete[] rect;

    return 0;
}