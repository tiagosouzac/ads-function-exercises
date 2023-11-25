#include <math.h>
#include <stdio.h>

int delta(int a, int b, int c) { return pow(b, 2) - 4 * a * c; }

int main() {
  int a, b, c, result;
  scanf("%d %d %d", &a, &b, &c);

  result = delta(a, b, c);
  printf("%d\n", result);

  return 0;
}
