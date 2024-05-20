#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;
    scanf("%d", &n);
    int *intList = (int *)calloc(n, sizeof(int));
    for (int i = 0; i < n; i++) {
        scanf("%d ", &intList[i]);
    }

    int min;
    min = intList[0];
    for (int i = 1; i < n; i++) {
        if (intList[i] < min) {
            min = intList[i];
        }
    }
    
    int cnt = 0;
    for (int i = 0; i < n; i++) {
        if (intList[i] == min) {
            cnt++;
        }
    }

    printf("%d %d", min, cnt);

    return 0;
}