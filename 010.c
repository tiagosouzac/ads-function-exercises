#include <stdio.h>

int is_even(int number) { return number % 2 == 0; }

int even_sum(int first, int last) {
  int total = 0;

  for (int i = first + 1; i < last; i++) {
    if (is_even(i)) {
      total += i;
    }
  }

  return total;
}

int main() {
  int first, last;
  scanf("%d %d", &first, &last);
  printf("%d\n", even_sum(first, last));

  return 0;
}
