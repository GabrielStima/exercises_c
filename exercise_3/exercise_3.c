#include <stdio.h>

int main(void) {
  float dollarQuoteInReais;
  float valueInDollars;
  float conversionResult;

  printf("Welcome to the exercise to convert from dollar to real\n");
  
  printf("\nEnter the dollar exchange rate in reais: R$ ");
  scanf("%f", &dollarQuoteInReais);

  printf("Enter the value of the product in dollars: $ ");
  scanf("%f", &valueInDollars);
  
  conversionResult = dollarQuoteInReais * valueInDollars;
  
  printf("The conversion of the product to real is: R$ %.2f", conversionResult);
  
  return 0;
}