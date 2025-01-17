#include <stdio.h>

int main() {
  int n;
  while (1) {
    printf("enter a number: ");
    if (scanf("%d", &n) == 1)
      break;
    printf("try again: ");
  }
  printf("you typed %d\n", n);
  return 0;
}
