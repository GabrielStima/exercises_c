#include <stdio.h>

int main(void) {
  int numberOfDaysWorked;
  float numberOfHoursWorkedDay;
  float numberOfHoursWorkedInTheMonth;
  float hourValue;
  float discountTransportVoucherInPercent = 0.06;
  float discountTransportVoucher;
  float grossSalary;

  printf("Welcome to the salary calculation exercise\n");
  
  printf("\nEnter the number of days worked: ");
  scanf("%d", &numberOfDaysWorked);

  printf("Enter the number of hours worked per day: ");
  scanf("%f", &numberOfHoursWorkedDay);

  printf("Enter your hourly value in REAL: R$ ");
  scanf("%f", &hourValue);
  
  numberOfHoursWorkedInTheMonth = numberOfDaysWorked * numberOfHoursWorkedDay;

  grossSalary = numberOfHoursWorkedInTheMonth * hourValue;

  discountTransportVoucher = grossSalary * discountTransportVoucherInPercent;
  
  printf("Your salary this month is: %.2f", grossSalary - discountTransportVoucher);
  return 0;
}