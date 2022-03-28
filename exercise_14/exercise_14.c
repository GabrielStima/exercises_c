#include <stdio.h>

int main(void) {
  float weight;
  float height;
  float imc;
  
  printf("Welcome to BMI exercise\n");
  
  printf("\nEnter your weigth: ");
  scanf("%f", &weight);
  printf("Enter your heigth: ");
  scanf("%f", &height);

  imc = weight/(height*height);
  
  if(imc <= 18.5){    
    printf("\nYour IMC is %.2f and your classification is Underweight", imc);    
  }else if (imc == 18.5 || imc <= 24.9){
    printf("\nYour IMC is %.2f and your classification is Normal Weight", imc);  
  }else if (imc == 25 || imc <= 29.9) {
    printf("\nYour IMC is %.2f and your classification is Overweight", imc);  
  }else if (imc == 30 || imc <= 34.9) {
    printf("\nYour IMC is %.2f and your classification is Obesity Grade I", imc);  
  }else if (imc == 35 || imc <= 39.9) {
    printf("\nYour IMC is %.2f and your classification is Obesity Grade II", imc);  
  }else if (imc >= 40) {
    printf("\nYour IMC is %.2f and your classification is Obesity Grade III or Morbid", imc);  
  }

  return 0;
}