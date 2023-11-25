#include <math.h>
#include <stdio.h>

float delta(float a, float b, float c) { return pow(b, 2) - 4 * a * c; }

int main() {
  float a, b, c;
  scanf("%f %f %f", &a, &b, &c);
  printf("%.2f\n", delta(a, b, c));

  return 0;
}
