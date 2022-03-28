#include <stdio.h>

int main(void) {
  int number;

  printf("Welcome to the system of numbers divisible by 3 and 5 at the same time\n");
  
  printf("\nEnter a number: ");
  scanf("%d", &number);

  if((number % 3 == 0) && (number % 5 == 0)){
    printf("\nThis number IS divisible by 3 and 5 at the same time");
  }else{
    printf("\nThis number IS NOT divisible by 3 and 5 at the same time");
  }
  return 0;
}