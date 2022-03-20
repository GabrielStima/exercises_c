#include <stdio.h>

int main(void) {
  int years;
  int months;
  int daysAfterMonthStart;
  int yearsOnDays;
  int monthsOnDays;

  printf("Welcome to the exercise to convert your age into days.\n");
  
  printf("\nHow old are you: ");
  scanf("%d", &years);
  printf("How many months have passed since the beginning of the year: ");
  scanf("%d", &months);
  printf("How many days have passed since the beginning of the month: ");
  scanf("%d", &daysAfterMonthStart);

  yearsOnDays = years * 365;
  monthsOnDays = months * 30;

  printf("\nYou were born APPROXIMATELY %d days ago", yearsOnDays + monthsOnDays + daysAfterMonthStart);
  
  return 0;
}