#include <stdio.h>

int main(void) {
  float monthlySalary;
  float readjustmentPercentage;
  float adjustmentValueInReais;
  float salaryWithAdjustment;

  printf("Welcome to the Salary Adjustment Calculation Exercise\n");
  
  printf("\nEnter your current salary: ");
  scanf("%f", &monthlySalary);

  printf("Enter the readjustment percentage in integer: ");
  scanf("%f", &readjustmentPercentage);

  adjustmentValueInReais = monthlySalary * (readjustmentPercentage / 100);

  salaryWithAdjustment = adjustmentValueInReais + monthlySalary;
  
  printf("Your salary with the readjustment is: R$ %.2f", salaryWithAdjustment);
  
  return 0;
}