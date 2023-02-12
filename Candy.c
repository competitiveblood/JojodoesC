#include <stdio.h>
#include <stdlib.h>

int minCandies(int* ratings, int ratingsSize) {
    int *candies = (int *)malloc(ratingsSize * sizeof(int));
    int i, sum = 0;

    // initialize candies array with all 1s
    for (i = 0; i < ratingsSize; i++) {
        candies[i] = 1;
    }

    // traverse from left to right and give more candies to children with higher rating
    for (i = 1; i < ratingsSize; i++) {
        if (ratings[i] > ratings[i - 1]) {
            candies[i] = candies[i - 1] + 1;
        }
    }

    // traverse from right to left and give more candies to children with higher rating
    for (i = ratingsSize - 2; i >= 0; i--) {
        if (ratings[i] > ratings[i + 1]) {
            candies[i] = fmax(candies[i], candies[i + 1] + 1);
        }
    }

    // sum up the total number of candies
    for (i = 0; i < ratingsSize; i++) {
        sum += candies[i];
    }

    free(candies);
    return sum;
}

int main() {
    int ratings[] = {1, 2, 2};
    int ratingsSize = sizeof(ratings) / sizeof(int);
    int result = minCandies(ratings, ratingsSize);
    printf("Minimum number of candies needed: %d\n", result);
    return 0;
}
