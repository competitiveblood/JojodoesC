#include <stdio.h>

int superUgly(int n, int primes[], int len) {
    int ugly[n];
    int idx[len];
    int val[len];
    int i, j, minVal;

    ugly[0] = 1;
    for (i = 0; i < len; i++) {
        idx[i] = 0;
        val[i] = primes[i];
    }

    for (i = 1; i < n; i++) {
        minVal = val[0];
        for (j = 1; j < len; j++) {
            if (val[j] < minVal) {
                minVal = val[j];
            }
        }

        ugly[i] = minVal;

        for (j = 0; j < len; j++) {
            if (minVal == val[j]) {
                idx[j]++;
                val[j] = ugly[idx[j]] * primes[j];
            }
        }
    }

    return ugly[n-1];
}

int main() {
    int primes[] = {2, 7, 13, 19};
    int len = sizeof(primes) / sizeof(primes[0]);
    int n = 10;

    printf("The first %d super ugly numbers are:\n", n);
    for (int i = 1; i <= n; i++) {
        printf("%d ", superUgly(i, primes, len));
    }
    printf("\n");

    return 0;
}
