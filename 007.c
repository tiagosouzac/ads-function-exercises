#include <math.h>
#include <stdio.h>
#define NUMBERS_QUANTITY 3

int sum(int numbers[]) {
  int higher = numbers[0], lower = numbers[0];

  for (int i = 0; i < NUMBERS_QUANTITY; i++) {
    higher = fmax(numbers[i], higher);
    lower = fmin(numbers[i], lower);
  }

  return higher + lower;
}

int main() {
  int numbers[NUMBERS_QUANTITY];

  for (int i = 0; i < NUMBERS_QUANTITY; i++) {
    scanf("%d", &numbers[i]);
  }

  printf("%d\n", sum(numbers));

  return 0;
}
