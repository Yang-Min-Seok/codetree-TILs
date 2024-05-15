#include <stdio.h>

int main() {
    
    int a1, a2;
    scanf("%d %d", &a1, &a2);

    int intList[10];
    intList[0] = a1;
    intList[1] = a2;

    for (int i = 2; i < 10; i++) {
        intList[i] = 2 * intList[i-2] + intList[i-1];
    }

    for (int i = 0; i < 10; i++) {
        printf("%d ", intList[i]);
    }

    return 0;
}