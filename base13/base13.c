#include<stdio.h>
#include<stdlib.h>

int main() {
  int num;
  int solution;

  printf("Enter a value: ");
  scanf("%d", &num);
  solution = (num / 13) * 10 + num % 13;

  printf("%d\n", solution);
  return 0;
}
