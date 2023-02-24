#include <stdio.h>

void reverse(int arr[], int start, int end) {
    int temp;
    while (start < end) {
        temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }
}

void reverseInGroups(int arr[], int n, int k) {
    int i;
    for (i = 0; i < n; i += k) {
        if (i + k <= n) {
            reverse(arr, i, i + k - 1);
        } else {
            reverse(arr, i, n - 1);
        }
    }
}

int main() {
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int n = sizeof(arr) / sizeof(arr[0]);
    int k = 3;
    int i;
    
    printf("Original array: ");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    
    return 0;
    
    
    
    
    
    reverseInGroups(arr, n, k);
    
    printf("Reversed array in groups of %d: ", k);
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    
