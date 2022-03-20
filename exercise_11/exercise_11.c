#include <stdio.h>

int main(void) {
  int publicTotal;
  float incomeGame;
  float percentageSoldPopularPass = 0.1;
  float popularTicketValue = 1;
  float amountCollectedPopularTicket;
  float percentageOfGeneralAdmissionSold = 0.5;
  float valueGeneralTicket = 5;
  float amountCollectedGeneralTicket;
  float percentageOfGrandstandTicketsSold = 0.3;
  float ticketPriceGrandstands = 10;
  float amountCollectedTicketOfGrandstand;
  float ticketPercentageSeatingSold = 0.1;
  float ticketValueSeating = 20;
  float amountCollectedTicketsSeating;

  printf("Welcome to the exercise that takes the total attendance of a stadium and provides the income from the game\n");

  printf("\nEnter the total audience: ");
  scanf("%d", &publicTotal);

  amountCollectedPopularTicket = (publicTotal * percentageSoldPopularPass) * popularTicketValue;

  amountCollectedGeneralTicket = (publicTotal * percentageOfGeneralAdmissionSold) * valueGeneralTicket;

  amountCollectedTicketOfGrandstand = (publicTotal * percentageOfGrandstandTicketsSold) * ticketPriceGrandstands;

  amountCollectedTicketsSeating = (publicTotal * ticketPercentageSeatingSold) * ticketValueSeating;

  incomeGame = amountCollectedPopularTicket + amountCollectedGeneralTicket + amountCollectedTicketOfGrandstand + amountCollectedTicketsSeating;
  
  printf("\nThe income from popular ticket sales was: R$ %.2f", amountCollectedPopularTicket);
  printf("\nIncome from general admission sales was: R$ %.2f", amountCollectedGeneralTicket);
  printf("\nThe income from the sale of grandstand tickets was: R$ %.2f", amountCollectedTicketOfGrandstand );
  printf("\nThe income from the sale of seat tickets was: R$ %.2f", amountCollectedTicketsSeating);
  printf("\n---------------------------------------------------");
  printf("\nThe income from ticket sales was: R$ %.2f", incomeGame);
  
  return 0;
}