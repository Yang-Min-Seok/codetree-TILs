#include <iostream>
#include <iomanip>

#define row 2
#define col 4

int main() {
    int int_array[2][4];
    
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            std::cin >> int_array[i][j];
        }
    }

    float avg;
    for (int i = 0; i < row; i++) {
        avg = 0;
        for (int j = 0; j < col; j++) {
            avg += int_array[i][j]; 
        }
        std::cout << std::fixed << std::setprecision(1) << avg / col << " ";
    }
    std::cout << std::endl;

    for (int i = 0; i < col; i++) {
        avg = 0;
        for (int j = 0; j < row; j++) {
            avg += int_array[j][i];
        }
        std::cout << std::fixed << std::setprecision(1) << avg / row << " ";
    }
    std::cout << std::endl;

    avg = 0;
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            avg += int_array[i][j];
        }
    }
    std::cout << std::fixed << std::setprecision(1) << avg / (row * col) << " ";

    return 0;
}