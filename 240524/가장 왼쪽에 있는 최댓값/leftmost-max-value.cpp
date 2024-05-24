#include <iostream>

int main() {
    // 입력
    int n;
    std::cin >> n;
    
    int *int_list = new int[n];
    for (int i = 0; i < n; i++) {
        std::cin >> int_list[i];
    }

    int max_idx = n;
    while (max_idx > 0) {
        int curr_max = 0;
        int curr_max_idx = -1;
        for (int i = 0; i < max_idx; i++) {
            if (int_list[i] > curr_max) {
                curr_max = int_list[i];
                curr_max_idx = i;
            }
        }
        max_idx = curr_max_idx;
        std::cout << curr_max_idx + 1 << " ";
        curr_max = 0;
        curr_max_idx = -1;
    }


    return 0;
}