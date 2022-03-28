#include <stdio.h>

int main(void) {
  int numberOne;
  int numberTwo;
  int numberThree;
  int biggerNumber = 0;
  int minorNumber = 0;

  printf("Welcome to the number comparator for the return of major and minor\n");
  
  printf("\nType the number One: ");
  scanf("%d", &numberOne);
  printf("Type the number Two: ");
  scanf("%d", &numberTwo);
  printf("Type the number Three: ");
  scanf("%d", &numberThree);
  
  if((numberOne == numberTwo) && (numberTwo == numberThree)){
    printf("\nAll numbers are equal");
  }
  if((numberOne == numberTwo) && (numberTwo != numberThree)){
    if(numberTwo > numberThree){
      biggerNumber = numberTwo;
      minorNumber = numberThree;
    }else{
      minorNumber = numberTwo; 
      biggerNumber = numberThree;
    }
  }
  if((numberOne != numberTwo) && (numberTwo == numberThree)){
    if(numberOne > numberTwo){
      biggerNumber = numberOne;
      minorNumber = numberTwo;
    }else{
      minorNumber = numberOne; 
      biggerNumber = numberTwo;
    }
  }
  if((numberOne != numberTwo) && (numberTwo != numberThree)){  
    if((numberOne > numberTwo) && (numberTwo > numberThree)){
      biggerNumber = numberOne;
      minorNumber = numberThree;
    }
    if((numberOne < numberTwo) && (numberTwo < numberThree)){
      biggerNumber = numberThree;
      minorNumber = numberOne;
    }
    if((numberOne > numberTwo) && (numberTwo < numberThree)){ 
      minorNumber = numberTwo;
      if(numberOne > numberThree){
        biggerNumber = numberOne;
      }else{
        biggerNumber = numberThree;
      }
    }
    if((numberOne < numberTwo) && (numberTwo > numberThree)){
        biggerNumber = numberTwo;
        if(numberOne > numberThree){
          minorNumber = numberThree;
        }else{
          minorNumber = numberOne; 
        }
      }
  }
  
  printf("\nHighest number entered: %d", biggerNumber);
  printf("\nLowest number entered: %d", minorNumber);
  
 return 0;
}