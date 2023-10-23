#include <stdio.h>
#include <stdlib.h>

int main() {
  int n;

  // Generate a random number
  n = rand() % RAND_MAX;

  // Check if the number is positive or negative
  if (n > 0) {
    printf("%d is positive\n", n);
  } else if (n == 0) {
    printf("%d is zero\n", n);
  } else {
    printf("%d is negative\n", n);
  }

  return 0;
}
