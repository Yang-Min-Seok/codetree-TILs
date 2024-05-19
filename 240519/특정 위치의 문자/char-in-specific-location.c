#include <stdio.h>

int main() {
    char strList[6] = {'L', 'E', 'B', 'R', 'O', 'S'};
    char targetStr;
    scanf("%c", &targetStr);
    int idx = -1;

    for (int i = 0 ; i < 6; i++) {
        if (targetStr == strList[i]) {
            idx = i;
            break;
        }
    }

    if (idx == -1) {
        printf("None");
    } else {
        printf("%d", idx);
    }

    return 0;
}