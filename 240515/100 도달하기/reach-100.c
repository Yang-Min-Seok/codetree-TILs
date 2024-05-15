#include <stdio.h>

void printIntList(int *intList, int currIdx) {
    for (int i = 0; i <= currIdx; i++) {
        printf("%d ", intList[i]);
    }
}

int main() {
    
    int n;
    scanf("%d", &n);

    int intList[100] = {0};
    intList[0] = 1;
    intList[1] = n;

    for (int i = 2; i < 100; i++) {
        intList[i] = intList[i-2] + intList[i-1];
        if (intList[i] > 100) {
            printIntList(intList, i);
            break;
        }
    }
    return 0;
}