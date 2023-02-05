#include <stdio.h>
#include <stdbool.h>

bool isPalindrome(int num) {
  int rev = 0, originalNum = num;
  while (num > 0) {
    rev = rev * 10 + num % 10;
    num /= 10;
  }
  return (rev == originalNum);
}

int main() {
  int n;
  printf("Enter the value of n: ");
  scanf("%d", &n);

  int count = 0, i;
  for (i = 1; count < n; ++i) {
    if (isPalindrome(i)) {
      ++count;
    }
  }
  printf("The nth palindrome is: %d\n", i - 1);
  return 0;
}
