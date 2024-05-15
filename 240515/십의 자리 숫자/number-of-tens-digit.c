#include <stdio.h>
#include <stdbool.h>

int main() {
    int tenthList[10] = {0, };
    int currNum;
    
    while (true) {
        
        scanf("%d ", &currNum);
        
        if (currNum == 0) {
            break;
        }

        currNum /= 10;
        tenthList[currNum]++;
    }

    for (int i = 1; i < 10; i++) {
        printf("%d - %d\n", i, tenthList[i]);
    }

    return 0;
}