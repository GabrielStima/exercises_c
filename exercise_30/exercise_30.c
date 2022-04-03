#include <stdio.h>

int main(void) {
  int minimumValue;
  int maximumValue;
  int interval;
  int tyoeOfLoop;

  printf("Welcome to the factorial counter\n");
  
  printf("\nWhat is the minimum value of the interval: ");
  scanf("%d", &minimumValue);

  interval = minimumValue;

  printf("What is the maximum value of the interval: ");
  scanf("%d", &maximumValue);

  printf("What type of loop do you want the system to use, type:\n\n");
  printf("1-FOR; ");
  printf("2-WHILE; ");
  scanf("%d", &tyoeOfLoop);
  printf("\n");

  
  if(tyoeOfLoop == 1){
    for(interval; interval < maximumValue; interval++){
      if((interval > minimumValue) && (interval < maximumValue)){
        int valueForFactor = interval;
        int result = 1;
        for(valueForFactor; valueForFactor >= 1; valueForFactor--){
          if (valueForFactor > 1){
            printf("%i x ", valueForFactor);
            result *= valueForFactor;
          }else{
            printf("%i = %i\n", valueForFactor, result);
          }
        }
      }
    }
  }else if(tyoeOfLoop == 2){
    while(interval < maximumValue){
      if((interval > minimumValue) && (interval < maximumValue)){
        int valueForFactor = interval;
        int result = 1;
        for(valueForFactor; valueForFactor >= 1; valueForFactor--){
          if (valueForFactor > 1){
            printf("%i x ", valueForFactor);
            result *= valueForFactor;
          }else{
            printf("%i = %i\n", valueForFactor, result);
          }
        }
      }
      
      interval++;
    }
  }
  else{
    printf("You have entered an invalid option. Please try again");
  }

  return 0;
}