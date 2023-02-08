#include <stdio.h>
#include <math.h>

int main()
{
    int n, a, b, c;
    printf("Enter a number: ");
    scanf("%d", &n);
    for (a = 1; a <= n; a++) {
        for (b = a; b <= n; b++) {
            c = sqrt(a*a + b*b);
            if (c*c == a*a + b*b && c <= n) {
                printf("%d, %d, %d\n", a, b, c);
            }
        }
    }
    return 0;
}
