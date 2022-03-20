#include <stdio.h>

int main(void) {
  #define inchToMillimeter 25.4;

  float temperatureInFahrenheit;
  float amountOfRainInInches;
  float temperatureInCelsius;
  float amountOfRainInMillimeters;

  printf("Welcome to the Temperature and Rainfall Conversion Exercise\n");
  
  printf("\nWhat is the current temperature in Fahrenheit: ");
  scanf("%f", &temperatureInFahrenheit);
  printf("How much rain in inches: ");
  scanf("%f", &amountOfRainInInches);

  temperatureInCelsius = (temperatureInFahrenheit - 32) / 1.8;
  
  amountOfRainInMillimeters = amountOfRainInInches * inchToMillimeter;
  
  printf("\nThe temperature in Celsius is: %.2f C", temperatureInCelsius);
  printf("\nThe amount of rain in millimeters: %.2f mm", amountOfRainInMillimeters);
  
  return 0;
}