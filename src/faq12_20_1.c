#include <stdio.h>

int main() {
  int n;
  char str[80];
  printf("enter a number: ");
  scanf("%d", &n);
  printf("enter a string: ");
  gets(str);
  printf("you typed %d and \"%s\"\n", n, str);
  return 0;
}
