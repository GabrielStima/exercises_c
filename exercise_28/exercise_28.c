#include <stdio.h>

int main(void) {
  int typedValue;
  
  printf("Welcome to the multiplication table program\n");
  
  printf("\nEnter an integer number: ");
  scanf("%d", &typedValue);
  printf("\n");

  for(int index = 1; index <= 10; index++){
    printf("%d x %d = %d\n", typedValue, index, typedValue*index);
  }
  
  return 0;
}