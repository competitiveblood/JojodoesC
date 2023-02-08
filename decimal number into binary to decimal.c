#include <stdio.h>
#include <math.h>

// Function to convert decimal to binary
int decimalToBinary(int n)
{
    int binary = 0;
    int i = 1;
    while (n != 0) {
        int rem = n % 2;
        n /= 2;
        binary += rem * i;
        i *= 10;
    }
    return binary;
}

// Function to convert binary to decimal
int binaryToDecimal(int n)
{
    int decimal = 0;
    int base = 1;
    int rem;
    while (n > 0) {
        rem = n % 10;
        n /= 10;
        decimal += rem * base;
        base *= 2;
    }
    return decimal;
}

int main()
{
    int n;
    printf("Enter a decimal number: ");
    scanf("%d", &n);
    printf("Binary equivalent of %d is %d\n", n, decimalToBinary(n));
    
    int b;
    printf("Enter a binary number: ");
    scanf("%d", &b);
    printf("Decimal equivalent of %d is %d\n", b, binaryToDecimal(b));

    return 0;
}
