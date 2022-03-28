#include <stdio.h>

int main(void) {
  int age;

  printf("Welcome to the blood donation permit program\n");
  
  printf("\nEnter your age: ");
  scanf("%d", &age);

  if((age >= 16) && (age <= 69)){
    printf("\nCongratulations, you can donate blood.");
  }else{
    printf("\nToo bad, you can't donate blood.");
  }
  return 0;
}