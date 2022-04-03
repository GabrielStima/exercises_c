#include <stdio.h>

int main(void) {
  int index = 0;
  int numbers[9];
  int firstMajorNumber = 0;
  int secondMajorNumber = 0;
  int sizeOfArray = sizeof(numbers)/sizeof(numbers[0]);

  printf("Welcome to the largest number checker\n\n");

  while(index <= sizeOfArray){
    printf("Enter a whole number of your preference: ");
    scanf("%d", &numbers[index]);

    if(firstMajorNumber < numeros[index]){
      secondMajorNumber = firstMajorNumber;
      firstMajorNumber = numeros[index];
    }
    
    index++;
  }

    printf("\nThe largest value entered was: %d", firstMajorNumber);
    printf("\nThe second highest value entered was: %d", secondMajorNumber);
  
  return 0;
}