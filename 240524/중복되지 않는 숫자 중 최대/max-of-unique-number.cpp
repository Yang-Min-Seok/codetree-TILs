#include <iostream>

bool is_only(int *array, int n, int curr_i, int curr_num) {
    for (int i = 0; i < n; i++) {
        if (i != curr_i && array[i] == curr_num) {
            return false;
        }
    }
    return true;
}

int main() {
    // 입력
    int n;
    std::cin >> n;

    int *array = new int[n];
    for (int i = 0; i < n; i++) {
        std::cin >> array[i];
    }

    int max = 0;
    bool found = false;
    for (int i = 0; i < n; i++) {
        if (max < array[i] && is_only(array, n, i, array[i])) {
            max = array[i];
            found = true;
        }
    }
    if (!found) {
        std::cout << "-1" << std::endl;
        return 0;
    }

    std::cout << max << std::endl;
    return 0;
}