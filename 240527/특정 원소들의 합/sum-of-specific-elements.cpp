#include <iostream>

int main() {
    int sum = 0, curr_num;
    
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            std::cin >> curr_num;
            if (j <= i) {
                sum += curr_num;
            }
        }
    }

    std::cout << sum;

    return 0;
}