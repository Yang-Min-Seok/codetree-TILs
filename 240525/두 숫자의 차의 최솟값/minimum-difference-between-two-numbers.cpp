#include <iostream>

int main() {
    // 입력
    int n;
    std::cin >> n;

    int *int_list = new int[n];
    for (int i = 0; i < n; i++) {
        std::cin >> int_list[i];
    }

    int min_diff = 99;
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            int curr_diff_1 = int_list[i] - int_list[j];
            int curr_diff_2 = int_list[j] - int_list[i];
            if (curr_diff_1 > 0 && curr_diff_1 < min_diff) {
                min_diff = curr_diff_1;
            } 
            if (curr_diff_2 > 0 && curr_diff_2 < min_diff) {
                min_diff = curr_diff_2;
            } 
        }
    }

    std::cout << min_diff;
    
    return 0;
}