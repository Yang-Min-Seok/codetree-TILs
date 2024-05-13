#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int intList[10];
    int cnt = 0;
    for (int i = 0; i < 10; i++) {
        if (cnt == 2) {
            break;
        }

        intList[i] = n * (i + 1);
        printf("%d ", intList[i]);
        
        if (intList[i] % 5 == 0) {
            cnt += 1;
        } 
    }

    return 0;
}