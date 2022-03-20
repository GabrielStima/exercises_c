#include <stdio.h>

int main(void) {
  int numberOne;
  int numberTwo;
  int result;
  
  printf("Welcome to the sum of integers exercise\n");

  printf("\nEnter the first number for the sum: ");
  scanf("%d", &numberOne);

  printf("Enter the second number for the sum: ");
  scanf("%d", &numberTwo);

  result = numberOne + numberTwo;

  printf("%d + %d = %d", numberOne, numberTwo, result);
  return 0;
}