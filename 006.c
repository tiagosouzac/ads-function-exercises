#include <stdio.h>

int shape_type(int b, int h) { return b == h; }

int main() {
  int b, h;
  scanf("%d %d", &b, &h);
  printf("%d\n", shape_type(b, h));

  return 0;
}
