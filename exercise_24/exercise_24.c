#include <stdio.h>

int main(void) {
  float grades[3];
  float totalSumOfGrades = 0;
  float media;
  int index = 0;

  printf("Welcome to a student's grade point average program\n");
  
  printf("\nEnter the student's first grade: ");
  scanf("%f", &grades[0]);

  printf("Enter the student's second grade: ");
  scanf("%f", &grades[1]);

  printf("Enter the student's third grade: ");
  scanf("%f", &grades[2]);

  while(index <= 2){
    totalSumOfGrades += grades[index];
    index++;
  };

  media = totalSumOfGrades / 3;
    
  if(media >= 6){
    printf("\nThe student is PASSING with an average: %.2f", media);
  }else{
    printf("\nThe student is REPROVED with an average: %.2f", media);
  }
  
  return 0;
}