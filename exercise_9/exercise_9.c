#include <stdio.h>

int main(void) {
  char names[3];
  int ages[3];
  float weights[3];
  float ageAverage = 0;
  float weightAverage = 0;
  int index;

  printf("Welcome to the exercise to calculate and print the average age and weight of three people.\n");
  
  for(index = 0; index <= 2; index++)
  {
    printf("\nWhat is your name: ");
    scanf("%s", &names[index]);

    printf("What is your age: ");
    scanf("%d", &ages[index]);

    printf("What is your weight: ");
    scanf("%f", &weights[index]);

    printf("---------------------------------------------------");
  }

  for(index = 0; index <= 2; index++)
  {
    ageAverage += ages[index];
    weightAverage += weights[index];
  }
  
  ageAverage = ageAverage / 3;
  weightAverage = weightAverage / 3;
  
  printf("\nYour average age is: %.2f", ageAverage);
  printf("\nYour average weight is: %.2f", weightAverage);
  
  return 0;
}