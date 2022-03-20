#include <stdio.h>

int main(void) {
  #define PI 3.14
  #define costOfAluminumPerSquareMeter 100

  float tinRadius;
  float heightOfTheCan;
  float totalCanAreaInSquareCentimeter;
  float totalCanAreaInSquareMeter;
  float totalCostOfTheCan;

  printf("Welcome to the exercise to calculate the price of a cylindrical aluminum can\n");
  
  printf("\nWhat is the radius of the can in CM: ");
  scanf("%f", &tinRadius);
  printf("How tall is the can in CM: ");
  scanf("%f", &heightOfTheCan);

  totalCanAreaInSquareCentimeter = 2*PI*tinRadius*(tinRadius + heightOfTheCan);

  totalCanAreaInSquareMeter = totalCanAreaInSquareCentimeter / 10000;

  totalCostOfTheCan = totalCanAreaInSquareMeter * costOfAluminumPerSquareMeter;

  printf("\nEach can has a total aluminum of %.3f per m²", totalCanAreaInSquareMeter);
  printf("\nWith that each can will cost R$ %.2f", totalCostOfTheCan); 

  return 0;
}