#include <stdio.h>

int main() {
    int n, i, arr[100], sum = 0;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    printf("Enter the elements of the array: ");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    for (i = 0; i < n; i++) {
        if (arr[i] % 2 == 0) {
            sum = sum + arr[i];
        }
    }
    printf("Sum of even terms: %d\n", sum);
    return 0;

