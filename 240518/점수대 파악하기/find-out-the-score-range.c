#include <stdio.h>
#include <stdbool.h>

int main() {
    int scoreList[11] = {0};
    int score;

    while (true) {
        scanf("%d ", &score);
        if (score == 0) {
            break;
        }
        score /= 10;
        scoreList[score]++;
    }

    for (int i = 10; i > 0; i--) {
        printf("%d - %d\n", i * 10, scoreList[i]);
    }

    return 0;
}