#include <iostream>

int main() {
    
    int square1[3][3], square2[3][3];
    
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            std::cin >> square1[i][j];
        }
    }

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            std::cin >> square2[i][j];
        }
    }

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            std::cout << square1[i][j] * square2[i][j] << " ";
        }
        std::cout << std::endl;
    }
    
    return 0;
}