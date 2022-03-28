#include <stdio.h>
#include <string.h>

int main(void) {
  float reservoirHeight;
  float reservoirWidth;
  float reservoirLength;
  float dailyReservoirConsumption;
  float reservoirCapacity;
  float autonomyDays;
  int autonomyRating;
  char classification[3][50] = {"High consumption","Moderate consumption","Reduced consumption"};

  printf("Welcome to the program for calculating the consumption of a reservoir\n");
  
  printf("\nEnter the value of the height in cm: ");
  scanf("%f", &reservoirHeight);  

  printf("Enter the value of the width in cm: ");
  scanf("%f", &reservoirWidth);

  printf("Enter the length value in cm: ");
  scanf("%f", &reservoirLength);  

  printf("Type the average DAILY consumption value of the tank in liters: ");
  scanf("%f", &dailyReservoirConsumption);  

  reservoirCapacity = (reservoirHeight * reservoirWidth * reservoirLength) / 1000;
  autonomyDays = reservoirCapacity / dailyReservoirConsumption;

  if(autonomyDays < 2){
    autonomyRating = 0;
  }else if((autonomyDays >= 2) && (autonomyDays <= 7)){
    autonomyRating = 1;
  }else{
    autonomyRating = 2;
  }

  printf("\nThe capacity of the reservoir in liters is: %.3f", reservoirCapacity);
  printf("\nThis reservoir will be consumed in %.1f days", autonomyDays);
  printf("\nThe consumption of this reservoir is %s", classification[autonomyRating]);

  return 0;
}