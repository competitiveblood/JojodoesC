#include <stdio.h>

int main() 

{
    float side, volume;

    printf("Enter the length of a side of the cube: ");
    scanf("%f", &side);

    volume = side * side * side;

    printf("Volume of the cube is: %f", volume);

    return 0;
}
