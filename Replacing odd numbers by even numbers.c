#include <stdio.h>

void replaceOddWithEven(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        if (arr[i] % 2 != 0) {
            arr[i] += 1;
        }
    }
}

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int size = sizeof(arr) / sizeof(arr[0]);

    replaceOddWithEven(arr, size);

    printf("The modified array is: \n");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    return 0;
