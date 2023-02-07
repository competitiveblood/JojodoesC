#include <stdio.h>
#include <ctype.h>

int main()

{
    char name[100];
    int i;

    printf("Enter your full name: ");
    scanf("%[^\n]s", name);

    printf("Abbreviation: %c", toupper(name[0]));

    for (i = 0; name[i] != '\0'; i++) {
        if (name[i] == ' ') {
            printf("%c", toupper(name[i + 1]));
        }
    }

    return 0;
}



