#include <stdio.h>
#include <string.h>

int main() 

{
    char s[100]; // assuming the maximum size of the string is 100
    int m, n, countO = 0, maxCount = 0;
    scanf("%s%d", s, &m);
    n = strlen(s);
    for (int i = 0; i < n; i++) {
        if (s[i] == 'A') {
            maxCount = (countO > maxCount) ? countO : maxCount;
            countO = 0;
        } else { // s[i] == 'O'
            if (m > 0) {
                m--;
            } else {
                countO++;
            }
            maxCount = (i == n-1 && countO > maxCount) ? countO : maxCount;
        }
    }
    printf("%d\n", maxCount);
    return 0;
}
