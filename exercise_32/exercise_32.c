#include <stdio.h>

int main(void) {
  int index = 0;
  int numbers[9];
  int biggerNumber = 0;
  int sizeOfArray = sizeof(numbers)/sizeof(numbers[0]);

  printf("Welcome to the largest number checker\n\n");

  while(index <= sizeOfArray){
    printf("Enter a whole number of your preference: ");
    scanf("%d", &numbers[index]);

    if(biggerNumber < numbers[index]){
      biggerNumber = numbers[index];
    }
    
    index++;
  }

  printf("\nThe largest value entered was: %d", biggerNumber);
  
  return 0;
}