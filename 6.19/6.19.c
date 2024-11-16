#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int i, dice1, dice2, sum;
    int frequency[13] = {0};

    srand(time(NULL));
    for (i = 0; i < 36000; i++) {
        dice1 = rand() % 6 + 1;
        dice2 = rand() % 6 + 1;
        sum = dice1 + dice2;
        frequency[sum]++;
    }

    for (i = 2; i <= 12; i++) {
        printf("Sum %d: %d\n", i, frequency[i]);
    }
    system("pause");
    return 0;
}


