#include <stdio.h>

int main(void) {
  int numberOne;
  int numberTwo;

  printf("Welcome to the comparator between numbers for return of the largest\n");
  
  printf("\nType the number One: ");
  scanf("%d", &numberOne);
  printf("Type the number Two: ");
  scanf("%d", &numberTwo);

  if(numberOne > numberTwo){
    printf("\nNumber one is the bigger: %d", numberOne); 
  }else if(numberOne < numberTwo){
    printf("\nNumber two is the bigger: %d", numberTwo);
  }else{
    printf("\nThe numbers are the same");
  }

 return 0;
}