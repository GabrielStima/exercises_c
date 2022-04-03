#include <stdio.h>

int main(void) {
  int minimumValue;
  int maximumValue;
  int interval;

  printf("Welcome to the interval counter\n");
  
  printf("\nWhat is the minimum value of the interval: ");
  scanf("%d", &minimumValue);
  printf("What is the maximum value of the interval: ");
  scanf("%d", &maximumValue);
  printf("\n");
  
  interval = minimumValue;
  
  while(interval < maximumValue){
    if((minimumValue < interval) && (maximumValue > interval)){
      printf("%d ", interval);      
    }
    interval++;
  }
  
  return 0;
}