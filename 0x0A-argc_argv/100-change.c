#include <stdio.h>
#include <stdlib.h>

int minimumCoins(int cents) {
    if (cents < 0) {
        return 0;
    }

    int coinValues[] = {25, 10, 5, 2, 1};
    int numCoins = sizeof(coinValues) / sizeof(coinValues[0]);
    int count = 0;

    for (int i = 0; i < numCoins; i++) {
        count += cents / coinValues[i];
        cents %= coinValues[i];
    }

    return count;
}

int main(int argc, char *argv[]) {
    if (argc != 2) {
        printf("Error\n");
        return 1;
    }

    int cents = atoi(argv[1]);

    int minCoins = minimumCoins(cents);
    printf("%d\n", minCoins);

    return 0;
}

