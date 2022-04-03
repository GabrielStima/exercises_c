#include <stdio.h>

int main(void) {
  int minimumValue;
  int maximumValue;
  int interval;
  int typeOfLoop;

  printf("Welcome to the counter of even numbers within an interval\n");
  
  printf("\nWhat is the minimum value of the interval: ");
  scanf("%d", &minimumValue);

  interval = minimumValue;

  printf("What is the maximum value of the interval: ");
  scanf("%d", &maximumValue);

  printf("What type of loop do you want the system to use, type:\n\n");
  printf("1-FOR; ");
  printf("2-WHILE; ");
  printf("3-WHILE-DO\n\n");
  scanf("%d", &typeOfLoop);
  printf("\n");

  
  if(typeOfLoop == 1){
    for(interval; interval < maximumValue; interval++){
      if((interval > minimumValue) && (interval < maximumValue)){
        if((interval % 2) == 0){
          printf("%d ", interval);
        }
      }
    }
  }else if(typeOfLoop == 2){
    while(interval < maximumValue){
      if((interval > minimumValue) && (interval < maximumValue)){
        if((interval % 2) == 0){
          printf("%d ", interval);
        }
      }
      interval++;
    }
  }else if(typeOfLoop == 3){
    do{
      if((interval > minimumValue) && (interval < maximumValue)){
        if((interval % 2) == 0){
          printf("%d ", interval);
        }
      }
      interval++;
    }while(interval < maximumValue);
  }else{
    printf("You have entered an invalid option. Please try again");
  }

  return 0;
}