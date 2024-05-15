#include <stdio.h>

int main() {
    
    int numList[7] = {0, };
    int currNum;

    for (int i = 0; i < 10; i++) {
        scanf("%d ", &currNum);
        numList[currNum]++;
    }

    for (int i = 1; i < 7; i++) {
        printf("%d - %d\n", i, numList[i]);
    }

    return 0;
}