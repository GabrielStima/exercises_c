#include <stdio.h>

int main(void) {
  float fixedRatePerDay;
  float feePerKilometerTraveled;
  float discountFixedRatePerDay;
  int numberOfDaysRented;
  int numberOfKilometersDriven;
  float resultRentDay;
  float resultRentalKm;

  printf("Welcome to the car rental calculation exercise\n");
  
  printf("\nEnter the flat rate per day: R$ ");
  scanf("%f", &fixedRatePerDay);

  printf("Enter the rate per kilometer driven: R$ ");
  scanf("%f", &feePerKilometerTraveled);

  printf("Enter the number of days rented: ");
  scanf("%d", &numberOfDaysRented);
    
  printf("Enter the number of kilometers driven: ");
  scanf("%d", &numberOfKilometersDriven);

  resultRentDay = numberOfDaysRented * fixedRatePerDay;
  resultRentalKm = numberOfKilometersDriven * feePerKilometerTraveled;

  discountFixedRatePerDay = resultRentDay * 0.1;
  resultRentDay -= discountFixedRatePerDay;

  printf("\nNumber of days: %d", numberOfDaysRented);
  printf("\nMileage traveled: %d Km", numberOfKilometersDriven);
  printf("\nDiscount Amount: R$ %.2f", discountFixedRatePerDay);
  printf("\nTotal amount of rent: R$ %.2f", resultRentDay + resultRentalKm);
  
  return 0;
}