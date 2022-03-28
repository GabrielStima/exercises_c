#include <stdio.h>

int main(void) {
  float monthlySalary;
  float monthlyExpense;
  float monthlyBalance;

  printf("Welcome to the calculation program salary VS expenses\n");
  
  printf("\nEnter your salary: R$ ");
  scanf("%f", &monthlySalary);
  
  printf("Enter your monthly spending: R$ ");
  scanf("%f", &monthlyExpense);

  monthlyBalance = monthlySalary - monthlyExpense;
  
  if(monthlyBalance >= 0){
    printf("\nSpending within budget");
    if(monthlyBalance == 0){
      printf("\nYour expenses are at the limit of your budget with no money to save this month.");
    }else{
    printf("\nThis month you have $ %.2f to save.", monthlyBalance);
    }
  }else{
    printf("\nBudget blown out");
    printf("\nThis month you are R$ %.2f in debt.", monthlyBalance);
  }  
  return 0;
}