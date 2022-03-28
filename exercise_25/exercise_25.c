#include <stdio.h>
#include <string.h>

int main(void) {
  float currentSalary;
  float salaryReadjusted;
  char jobTitle[20];

  printf("Welcome to the salary adjustment program\n");
  
  printf("\nEnter your current salary: R$ ");
  scanf("%f", &currentSalary);

  printf("Enter your job title: ");
  scanf("%s", jobTitle);
  
  if(strcmp(jobTitle, "manager") == 0){
    salaryReadjusted = (currentSalary * 0.1) + currentSalary;
  }else if(strcmp(jobTitle, "engineer") == 0){
    salaryReadjusted = (currentSalary * 0.2) + currentSalary;
  }else if(strcmp(jobTitle, "technical") == 0){
    salaryReadjusted = (currentSalary * 0.3) + currentSalary;
  }else{
    salaryReadjusted = (currentSalary * 0.05) + currentSalary;
  }

  printf("\nPrevious salary: R$ %.2f", currentSalary);
  printf("\nThe value of the adjustment will be: R$ %.2f", salaryReadjusted - currentSalary);
  printf("\nCurrent salary: R$ %.2f", salaryReadjusted);
  
  return 0;
}