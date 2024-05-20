#include <stdio.h>

int main() {
    int intList[10] = {0};
    for (int i = 0; i < 10; i++) {
        scanf("%d ", &intList[i]);
    }

    int max = intList[0];
    for (int i = 1; i < 10; i++) {
        if (intList[i] > max) {
            max = intList[i];
        }
    }

    printf("%d", max);
    return 0;
}