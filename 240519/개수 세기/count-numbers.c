#include <stdio.h>

int main() {
    int n, m;
    scanf("%d %d\n", &n, &m);
    
    int cnt = 0;
    int currNum;
    for (int i = 0; i < n; i++) {
        scanf("%d ", &currNum);
        if (currNum == m) {
            cnt++;
        }
    }

    printf("%d", cnt);

    return 0;
}