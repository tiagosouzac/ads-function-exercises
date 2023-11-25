#include <stdio.h>

int sum(int first_number, int last_number, int ratio) {
  return ((first_number + last_number) * ratio) / 2;
}

int main() {
  int first_number, last_number, ratio;
  scanf("%d %d %d", &first_number, &last_number, &ratio);

  printf("%d\n", sum(first_number, last_number, ratio));

  return 0;
}
