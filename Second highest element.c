#include <stdio.h>

void second_greatest(int arr[], int n) {
  int i, max1, max2;
  max1 = max2 = -1000000;
  for (i = 0; i < n; i++) {
    if (arr[i] > max1) {
      max2 = max1;
      max1 = arr[i];
    } else if (arr[i] > max2 && arr[i] != max1) {
      max2 = arr[i];
    }
  }
  printf("The second greatest element is: %d\n", max2);
}

int main() {
  int arr[] = {12, 23, 34, 78, 43, 65, 29};
  int n = sizeof(arr) / sizeof(arr[0]);
  second_greatest(arr, n);
  return 0;
}
