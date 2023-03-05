#include <stdio.h>

int main() 
{
    int arr[] = { 1, 5, 3, 8, 7, 2 };
    int n = sizeof(arr) / sizeof(arr[0]);
    int left_sum = 0;
    int right_sum = 0;
    int equilibrium_index = -1;

    // calculate the sum of all elements in the array
    for (int i = 0; i < n; i++) {
        right_sum += arr[i];
    }

    // iterate through the array to find the equilibrium point
    for (int i = 0; i < n; i++) {
        right_sum -= arr[i]; // update right sum
        if (left_sum == right_sum) { // check if we found the equilibrium point
            equilibrium_index = i;
            break;
        }
        left_sum += arr[i]; // update left sum
    }

    if (equilibrium_index != -1) {
        printf("Equilibrium point found at index %d\n", equilibrium_index);
    } else {
        printf("No equilibrium point found in the array\n");
    }

    return 0;
}
