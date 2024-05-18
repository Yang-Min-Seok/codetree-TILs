#include <stdio.h>

int main() {
    int hospitalList[4] = {0};
    
    for (int i = 0; i < 3; i++) {
        char symptom;
        int temperature;
        scanf(" %c %d", &symptom, &temperature);
        if (symptom == 'Y' && temperature >= 37) {
            hospitalList[0]++;
        } else if (symptom == 'N' && temperature >= 37) {
            hospitalList[1]++;
        } else if (symptom == 'Y') {
            hospitalList[2]++;
        } else {
            hospitalList[3]++;
        }
    }

    for (int i = 0; i < 4; i++) {
        printf("%d ", hospitalList[i]);
    }

    if (hospitalList[0] >= 2) {
        printf("E");
    }

    return 0;
}