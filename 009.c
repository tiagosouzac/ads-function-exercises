#include <math.h>
#include <stdio.h>

float get_delta(float a, float b, float c) { return pow(b, 2) - 4 * a * c; }

float positive(float a, float b, float delta) {
  return (-b + sqrt(delta)) / (2 * a);
}

float negative(float a, float b, float delta) {
  return (-b - sqrt(delta)) / (2 * a);
}

void calculate_bhaskara(float a, float b, float c) {
  float delta = get_delta(a, b, c);

  if (delta < 0) {
    printf("Não existem raízes\n");
  } else if (delta == 0) {
    printf("%.2f\n", positive(a, b, delta));
  } else {
    printf("X': %.2f X'': %.2f\n", positive(a, b, delta),
           negative(a, b, delta));
  }
}

int main() {
  float a, b, c;
  scanf("%f %f %f", &a, &b, &c);
  calculate_bhaskara(a, b, c);

  return 0;
}
