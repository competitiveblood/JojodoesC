#include <stdio.h>

#define ARRAY_SIZE 5

int main()
{
  int array1[ARRAY_SIZE] = {1, 2, 3, 4, 5};
  int array2[ARRAY_SIZE] = {1, 2, 3, 4, 5};
  int i, equal;

  // Check if the arrays are equal
  equal = 1;  // Assume the arrays are equal
  for (i = 0; i < ARRAY_SIZE; i++) {
    if (array1[i] != array2[i]) {
      equal = 0;  // The arrays are not equal
      break;
    }
  }

  if (equal) {
    printf("The arrays are equal.\n");
  } else {
    printf("The arrays are not equal.\n");
  }
