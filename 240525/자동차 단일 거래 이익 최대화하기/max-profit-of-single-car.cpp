#include <iostream>

int main() {
    // 입력
    int n;
    std::cin >> n;

    int *price_list = new int[n];
    for (int i = 0; i < n; i++) {
        std::cin >> price_list[i];
    }

    int max_income = 0;
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            int curr_income = price_list[j] - price_list[i];
            if (curr_income > max_income) {
                max_income = curr_income;
            }
        }
    }

    std::cout << max_income;

    return 0;
}