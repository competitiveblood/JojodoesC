#include <stdio.h>

int main() {
    int n, i, sum = 0;
    int arr[100];
    int *ptr;

    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    printf("Enter the elements of the array: ");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    ptr = arr;

    for (i = 0; i < n; i++) {
        sum = sum + *ptr;
        ptr++;
    }

    printf("Sum of elements of the array: %d\n", sum);
    return 0;
}
