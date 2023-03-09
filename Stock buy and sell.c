#include <stdio.h>

int main() {
    int n, i;
    float prices[100], profit = 0, loss = 0, min_price;

    printf("Enter the number of days: ");
    scanf("%d", &n);

    printf("Enter the stock prices: ");
    for (i = 0; i < n; i++) {
        scanf("%f", &prices[i]);
    }

    min_price = prices[0];
    for (i = 1; i < n; i++) {
        if (prices[i] < min_price) {
            min_price = prices[i];
        } else if (prices[i] - min_price > profit) {
            profit = prices[i] - min_price;
        } else if (min_price - prices[i] > loss) {
            loss = min_price - prices[i];
        }
    }

    if (profit > loss) {
        printf("Buy on day %d and sell on day %d for a profit of $%.2f\n", 
            i - 1 - (int)(profit / (prices[i - 1] - min_price)), i - 1, profit);
    } else {
        printf("There is no profit. You should not buy or sell the stock.\n");
    }

    return 0;
}
