#include <stdio.h>
#define NUMBERS_QUANTITY 3

int is_even(int number) { return number % 2 == 0; }

int count_even_numbers(int numbers[]) {
  int count = 0;

  for (int i = 0; i < NUMBERS_QUANTITY; i++) {
    if (is_even(numbers[i])) {
      count++;
    }
  }

  return count;
}

int main() {
  int numbers[NUMBERS_QUANTITY], result;

  for (int i = 0; i < NUMBERS_QUANTITY; i++) {
    scanf("%d", &numbers[i]);
  }

  result = count_even_numbers(numbers);
  printf("São %d números pares\n", result);

  return 0;
}
