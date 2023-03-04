#include <stdio.h>

void sort012(int arr[], int n) {
    int lo = 0;
    int hi = n - 1;
    int mid = 0;

    while (mid <= hi) {
        switch (arr[mid]) {
            case 0:
                // swap arr[lo] and arr[mid]
                arr[lo] ^= arr[mid];
                arr[mid] ^= arr[lo];
                arr[lo] ^= arr[mid];

                lo++;
                mid++;
                break;

            case 1:
                mid++;
                break;

            case 2:
                // swap arr[mid] and arr[hi]
                arr[mid] ^= arr[hi];
                arr[hi] ^= arr[mid];
                arr[mid] ^= arr[hi];

                hi--;
                break;
        }
    }
}

int main() {
    int arr[] = {0, 1, 2, 1, 2, 0, 1, 0, 2};
    int n = sizeof(arr) / sizeof(arr[0]);

    sort012(arr, n);

    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
