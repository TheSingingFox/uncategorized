#include<stdio.h>
#include<stdlib.h>

int main() {
  int input;
  int input2;
  char operation;
  int num;
  int solution;

  printf("Do you want to convert a number (=) or add (+), subtract (-), multiply (*) or divide (/) two?\n");
  scanf("%c", &operation);

  if(operation == '=') {
    printf("Enter a value: ");
    scanf("%d", &input);
    num = input;
  } else {
    printf("Enter the first value: ");
    scanf("%d", &input);
    printf("Enter the second value: ");
    scanf("%d", &input2);
    if(operation == '+') {
      num = input + input2;
    } else if(operation == '-') {
      num = input - input2;
    } else if(operation == '*') {
      num = input * input2;
    } else if(operation == '/') {
      num = input / input2;
    }
  }
      

  solution = (num / 13) * 10 + num % 13;

  printf("%d\n", solution);
  return 0;
}
