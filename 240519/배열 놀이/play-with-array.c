#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void getNum(int *intList, int idx) {
    printf("%d\n", intList[idx]);
}

void getIdx(int *intList, int n, int num) {

    for (int i = 0; i < n; i++) {
        if (intList[i] == num) {
            printf("%d\n", i+1);
            return;
        }
    }
    printf("0\n");
    return;

}

void getNumsBetween(int *intList, int s, int e) {
    for (int i = s; i <= e; i++) {
        printf("%d ", intList[i]);
    }
    printf("\n");
}

int main() {
    int n, q;
    scanf("%d %d", &n, &q);

    // 배열 동적 할당
    int *intList = (int *)calloc(n, sizeof(int));
    for (int i = 0; i < n; i++) {
        scanf("%d ", &intList[i]);
    }

    char input[100];
    int order, num1, num2;
    for (int i = 0; i < q; i++) {
        // 입력 라인을 문자열로 읽기
        fgets(input, sizeof(input), stdin);
        
        // 입력된 문자열을 공백으로 분리하여 필요한 변수에 할당
        int numArgs = sscanf(input, "%d %d %d", &order, &num1, &num2);

        if (numArgs == 2) {
            if (order == 1) {
                getNum(intList, num1 - 1); // 1-based to 0-based index
            } else if (order == 2) {
                getIdx(intList, n, num1);
            }
        } else if (numArgs == 3) {
            if (order == 3) {
                getNumsBetween(intList, num1 - 1, num2 - 1); // 1-based to 0-based index
            }
        }
    }

    free(intList);

    return 0;
}