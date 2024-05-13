#include <stdio.h>

int main() {
    int n;
    scanf("%d\n", &n);

    int intList[n];
    for (int i = 0; i < n; i++) {
        scanf("%d ", &intList[i]);
    }

    int evenList[n];
    int evenIdx = 0;
    for (int i = 0; i < n; i++) {
        if (intList[i] % 2 == 0) {
            evenList[evenIdx] = intList[i];
            evenIdx++;
        }
    }

    for (int i = 0; i < evenIdx; i++) {
        printf("%d ", evenList[i]);
    }

}