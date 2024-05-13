#include <stdio.h>

int main() {
    int n;
    scanf("%d\n", &n);

    int intList[n];
    for (int i = 0; i < n; i++) {
        scanf("%d ", &intList[i]);
    }

    for (int i = 0; i < n; i++) {
        printf("%d ", intList[i] * intList[i]);
    }
    
    return 0;
}