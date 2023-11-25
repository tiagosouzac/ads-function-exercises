#include <stdio.h>

float interest_charged(float value, int months, float fees) {
  return value * months * (fees / 100);
}

int main() {
  float value, fees;
  int months;

  scanf("%f %d %f", &value, &months, &fees);

  printf("R$ %.2f\n", interest_charged(value, months, fees));

  return 0;
}
