#include <stdio.h>

int main(void) {
  int squareSize;
  
  printf("Welcome to the square printer\n");

  printf("\nEnter a number from 1 to 20: ");
  scanf("%d", &squareSize);
  printf("\n");

  for(int indexRow = 0; indexRow < squareSize; indexRow++){
    for(int indexFill = 0; indexFill < squareSize; indexFill++){
      printf("*");
    }
    printf("\n");
  }
  
  return 0;
}