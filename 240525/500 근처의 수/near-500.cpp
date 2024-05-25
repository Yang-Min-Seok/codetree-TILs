#include <iostream>

int main() {
    // 입력
    int num_list[10], max = 0, min = 1000;
    for (int i = 0; i < 10; i++) {
        std::cin >> num_list[i];
    }

    for (int i = 0; i < 10; i++) {
        if (num_list[i] > max && num_list[i] < 500) {
            max = num_list[i];
        }
        if (num_list[i] < min && num_list[i] > 500) {
            min = num_list[i];
        }
    }

    std::cout << max << " " << min;

    return 0;
}