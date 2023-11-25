#include <stdio.h>

void count_until(int target) {
  for (int i = 1; i <= target; i++) {
    printf("%d ", i);
  }

  printf("\n");
}

int main() {
  int number;
  scanf("%d", &number);
  count_until(number);

  return 0;
}
