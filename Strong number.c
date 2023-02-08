#include <stdio.h>

int factorial(int num) {
    int fact = 1;
    for (int i = 1; i <= num; i++) {
        fact *= i;
    }
    return fact;
}

int isStrongNumber(int num) {
    int originalNum = num;
    int sum = 0;
    while (num) {
        int lastDigit = num % 10;
        sum += factorial(lastDigit);
        num /= 10;
    }
    return (originalNum == sum);
}

int main() {
    int num = 145;
    if (isStrongNumber(num)) {
        printf("%d is a strong number", num);
    } else {
        printf("%d is not a strong number", num);
    }
    return 0;
}
