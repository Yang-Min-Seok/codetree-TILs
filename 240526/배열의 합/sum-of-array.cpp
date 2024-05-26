#include <iostream>

int main() {

    int num, num_sum;
    for (int i = 0; i < 4; i++) {
        num_sum = 0;
        for (int j = 0; j < 4; j++) {
            std::cin >> num;
            num_sum += num;
        }
        std::cout << num_sum << std::endl;
    }

    return 0;
}