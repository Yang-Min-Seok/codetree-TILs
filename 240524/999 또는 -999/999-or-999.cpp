#include <iostream>

int main() {
    int curr_int, int_list[100], i = 0;

    while (true) {
        scanf("%d", &curr_int);
        if (curr_int == -999 || curr_int == 999) {
            break;
        }
        int_list[i] = curr_int;
        i++;
    }

    int min = int_list[0], max = int_list[0];
    for (int j = 1; j < i; j++) {
        if (int_list[j] < min) {
            min = int_list[j];
        }
        if (int_list[j] > max) {
            max = int_list[j];
        }
    }

    std::cout << max << " " << min << std::endl;

    return 0;
}