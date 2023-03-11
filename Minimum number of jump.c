#include <stdio.h>

int minJumps(int arr[], int n)
{
    if (n <= 1)
        return 0;

    int maxReach = arr[0];
    int step = arr[0];
    int jump = 1;

    for (int i = 1; i < n; i++) {
        if (i == n - 1)
            return jump;

        maxReach = (maxReach > i + arr[i]) ? maxReach : i + arr[i];

        step--;

        if (step == 0) {
            jump++;

            if (i >= maxReach)
                return -1;

            step = maxReach - i;
        }
    }

    return -1;
}

int main()
{
    int arr[] = { 2, 3, 1, 1, 4 };
    int n = sizeof(arr) / sizeof(arr[0]);

    printf("Minimum number of jumps required to reach the end of the array: %d\n", minJumps(arr, n));

    return 0;
}
