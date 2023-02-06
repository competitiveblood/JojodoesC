#include <stdio.h>

int main() {
    char str[100];
    int i;

    printf("Enter a string: ");
    gets(str);

    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] >= 'a' && str[i] <= 'z') {
            str[i] = str[i] - 32;
        }
    }

    printf("String in uppercase: %s\n", str);
    return 0;
}
