#include <stdio.h>
#include <ctype.h>

int main() {
    char c;
    printf("Enter a character: ");
    scanf("%c", &c);
    if (islower(c)) {
        printf("%c\n", toupper(c));
    } else {
        printf("%c\n", tolower(c));
    }
    return 0;
}
