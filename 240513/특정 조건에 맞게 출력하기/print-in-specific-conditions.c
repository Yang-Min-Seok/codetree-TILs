#include <stdio.h>
#include <stdbool.h>

void printIntList(int *ansList, int endIdx) {
    
    for (int i = 0; i < endIdx; i++) {
        if (ansList[i] % 2) {
            printf("%d ", ansList[i] + 3);
        } else{
            printf("%d ", ansList[i] / 2);
        }
    }
    
}

int main() {
    int intList[100];
    
    int idx = 0;
    int currInt;
    while (true) {
        scanf("%d ", &currInt);
        if (currInt == 0) {
            printIntList(intList, idx);
            break;
        }
        intList[idx] = currInt;
        idx++;
    }

    return 0;
}