#include<stdio.h>
#include<stdlib.h>

int main() {
  int input;
  int input2;
  char operation;
  int num;
  int num2;
  int solution1;
  char solution2;

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
      

  solution1 = num / 13;
  num2 = num % 13;
  if(num2 == 12) {
    solution2 = 'C';
  } else if(num2 == 11) {
    solution2 = 'B';
  } else if(num2 == 10) {
    solution2 = 'A';
  } else if(num2 == 0) {
    solution2 = '0';
  } else {
    solution1 = solution1 * 10 + num2;
    solution2 = ' ';
  }

  printf("%d%c\n", solution1, solution2);
  return 0;
}
