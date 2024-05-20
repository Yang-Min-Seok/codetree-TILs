#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

bool check(int *original, int *part, int originalLen, int partLen) {
    
    for (int i = 0; i <= originalLen - partLen; i++) {
        
        bool flag = true;
        int bIdx = 0;
        
        for (int j = i; j < i + partLen; j++) {
            if (original[j] != part[bIdx]) {
                flag = false;
            }
            bIdx++;
        }

        if (flag == true) {
            return true;
        }

    }

    return false;
}

int main() {
    
    // 입력
    int n1, n2;
    scanf("%d %d", &n1, &n2);

    // 동적 할당
    int *a = (int *)calloc(n1, sizeof(int));
    int *b = (int *)calloc(n2, sizeof(int));

    for (int i = 0; i < n1; i++) {
        scanf("%d ", &a[i]);
    }
    for (int i = 0; i < n2; i++) {
        scanf("%d ", &b[i]);
    }

    // 확인
    if(check(a, b, n1, n2)) {
        printf("Yes");
    } else{
        printf("No");
    }

    return 0;
}