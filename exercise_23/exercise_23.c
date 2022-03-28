#include <stdio.h>

int main(void) {
  float salary;
  float newSalary;

  printf("Welcome to the salary adjustment program\n");
  
  printf("\nEnter your salary: ");
  scanf("%f", &salary);

  if(salary <= 2000){
    newSalary = salary + (salary * 0.5);
  }else{
    newSalary = salary + (salary * 0.3);
  }
    printf("With the adjustment your current salary is R$ %.2f", newSalary);
  
  return 0;
}