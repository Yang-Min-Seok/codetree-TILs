#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;
    scanf("%d", &n);

    // 동적 할당
    int *intList = (int *)calloc(n, sizeof(int));
    for (int i = 0; i < n; i++) {
        scanf("%d ", &intList[i]);
    }

    // scan
    int twoCnt = 0;
    for (int i = 0; i < n; i++) {
        if (twoCnt == 3) {
            printf("%d", i);
            break;
        } else if (intList[i] == 2) {
            twoCnt++;
        }
    }

    return 0;
}