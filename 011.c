#include <stdio.h>

void dividers(int number) {
  for (int i = 1; i <= number; i++) {
    if (number % i == 0) {
      printf("%d ", i);
    }
  }

  printf("\n");
}

int main() {
  int number;
  scanf("%d", &number);
  dividers(number);

  return 0;
}
