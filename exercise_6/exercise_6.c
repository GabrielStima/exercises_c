#include <stdio.h>

int main(void) {
  int yearsOfLife;
  int beatPerMinute = 60;
  int beatPerHour = beatPerMinute * 60;
  int beatPerDay = beatPerHour * 24;
  int daysPerYear = 365;
  int beatsPerYear = daysPerYear * beatPerDay;

  printf("Welcome to the Heartbeat Exercise\n");
  
  printf("\nFor how many years will your heart beat: ");
  scanf("%d", &daysPerYear);

  printf("So know that your heart will beat %d during these years ", beatsPerYear * daysPerYear);
  
  return 0;
}