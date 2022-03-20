#include <stdio.h>

int main(void) {
  int powerConsumptionRate;
  int hoursOn;
  float valueOfKilowattHour;
  int totalEnergySpent;
  float amountPayable;

  printf("Welcome to the exercise to calculate the electric power consumption of a refrigerator\n");
  
  printf("\nEnter the approximate power in KWh: ");
  scanf("%d", &powerConsumptionRate);

  printf("Enter how many hours the device has been on: ");
  scanf("%d", &hoursOn);

  printf("Enter the kW hour value: ");
  scanf("%f", &valueOfKilowattHour);

  totalEnergySpent = powerConsumptionRate * hoursOn;

  amountPayable = (valueOfKilowattHour * powerConsumptionRate) * hoursOn;
  
  printf("\nTotal energy consumed by the device: %d KWh", totalEnergySpent);
  printf("\nand the amount spent is: R$ %.2f", amountPayable);
  
  return 0;
}