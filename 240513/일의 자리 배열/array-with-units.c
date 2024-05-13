#include <stdio.h>

int main() {
    int a, b;
    scanf("%d %d", &a, &b);

    int intList[10];
    intList[0] = a;
    intList[1] = b;

    for (int i = 2; i < 10; i++) {
        intList[i] = (intList[i-2] + intList[i-1]) % 10;
    }

    for (int i = 0; i < 10; i++) {
        printf("%d ", intList[i]);
    }
    
    return 0;
}