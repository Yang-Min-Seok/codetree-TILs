#include <stdio.h>

int main() {
    
    int n;
    scanf("%d\n", &n);

    int countList[10] = {0, };
    for (int i = 0; i < n; i++) {
        int currNum;
        scanf("%d ", &currNum);
        countList[currNum]++;
    }

    for (int i = 1; i < 10; i++) {
        printf("%d\n", countList[i]);
    }

    return 0;
}