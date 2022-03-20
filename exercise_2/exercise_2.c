#include <stdio.h>

int main(void) {
  int numberOne;
  int numberTwo;
  int numberThree;
  int variables = 3;
  int average;
  
  printf("Welcome to the whole number averaging exercise\n");

  printf("\nEnter the first number for the calculation: ");
  scanf("%d", &numberOne);

  printf("Enter the second number for the calculation: ");
  scanf("%d", &numberTwo);

  printf("Enter the third number for the calculation: ");
  scanf("%d", &numberThree);

  average = (numberOne + numberTwo + numberThree)/variables;

  printf("(%d + %d + %d) / %d = %d", numberOne, numberTwo, numberThree, variables, average);
  
  return 0;
}