void zigzag(int arr[], int n) {
    int i, temp;
    bool flag = true; // flag is used to indicate whether the next element should be greater or lesser

    for (i = 0; i < n - 1; i++) {
        if (flag) { // if the flag is true, we expect the next element to be greater
            if (arr[i] > arr[i+1]) { // if the current element is greater than the next element, swap them
                temp = arr[i];
                arr[i] = arr[i+1];
                arr[i+1] = temp;
            }
        } else { // if the flag is false, we expect the next element to be lesser
            if (arr[i] < arr[i+1]) { // if the current element is lesser than the next element, swap them
                temp = arr[i];
                arr[i] = arr[i+1];
                arr[i+1] = temp;
            }
        }
        flag = !flag; // toggle the flag after each iteration
    }
}




int main() {
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int n = sizeof(arr) / sizeof(arr[0]);

    zigzag(arr, n);

    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
