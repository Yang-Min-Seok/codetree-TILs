#include <iostream>
#include <limits>

int main() {
    
    // 입력
    int n;
    std::cin >> n;
    int* array = new int[n];

    for (int i = 0; i < n; i++) {
        std::cin >> array[i];
    }

    int max_max = std::numeric_limits<int>::min();
    int max_min = std::numeric_limits<int>::min();
    int max_idx = 0;

    for (int i = 0; i < n; i++) {
        if (array[i] > max_max) {
            max_max = array[i];
            max_idx = i;
        }
    }

    for (int i = 0; i < n; i++) {
        if (array[i] > max_min && max_idx != i) {
            max_min = array[i];
        }
    }

    std::cout << max_max << " " << max_min << std::endl;

    return 0;
}