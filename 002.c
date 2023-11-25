#include <stdio.h>

int higher_number(int first, int second) {
  if (first > second) {
    return -1;
  } else if (second > first) {
    return 1;
  } else {
    return 0;
  }
}

int main() {
  int first, second, result;
  scanf("%d %d", &first, &second);

  result = higher_number(first, second);

  if (result == -1) {
    printf("%d é maior que %d\n", first, second);
  } else if (result == 1) {
    printf("%d é maior que %d\n", second, first);
  } else {
    printf("Os dois números são iguais\n");
  }

  return 0;
}
