#include <stdio.h>

int main(void) {
  int number;

  printf("Welcome to the Odd and Even Number Analysis Program\n");
  
  printf("Enter a number: ");
  scanf("%d", &number);
  
  if(number % 2 == 0){
    printf("\nThe number entered is even");
  }else{
    printf("\nThe number entered is odd");
  }
  
  return 0;
}