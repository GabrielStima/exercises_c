#include <stdio.h>

int main(void) {
  int numberOne;
  int numberTwo;

  printf("Welcome to the number comparator\n");
  
  printf("\nType the number One: ");
  scanf("%d", &numberOne);
  printf("Type the number Two: ");
  scanf("%d", &numberTwo);

  if(numberOne == numberTwo){
   printf("\nThey are the same");
  }else{
   printf("\nThey are different");
  }

  return 0;
}