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
      

  /* convert the calculator's output to base13 
     The conversion is done in two steps: first, the first numeral is decided upon by dividing the calculator's output by 13. This function produces an integer.
     Then the second numeral is defined as output modulo 13. But because this can be bigger than 9, we need it to print A, B or C sometimes. This function produces a character.
     The final solution is produced by concatenating the integer from the first operation and the character from the second one. Therefore the final  output is a string, not a number.*/
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
