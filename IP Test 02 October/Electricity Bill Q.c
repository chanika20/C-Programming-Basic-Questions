//Chanika20
#include <stdio.h>

int main(void) {

  // Declaring varibales

  char customerType;
  int units;
  float finalBillAmount;
  float additionalCharge;

  // Domestic Customer - 1
  // Samurdhi Customer - 2

  printf("Customer Type (1/2) :");
  scanf("%c", &customerType);

  printf("Number of Units :");
  scanf("%d", &units);

  // For Domestic Customer

  if (customerType == '1' && units <= 100) {
    finalBillAmount = units * 10;
    printf("Final Bill Amount : %.2f", finalBillAmount);
  }

  if (customerType == '1' && units > 100) {
    finalBillAmount = ((100 * 10) + (units - 100) * 30) *
                      1.2; // + additional surcharge of 20%
    printf("Final Bill Amount : %.2f", finalBillAmount);
  }
  // For Samurdhi Customer

  if (customerType == '2' && units <= 100) {
    finalBillAmount = units * 10;
    printf("Final Bill Amount : %.2f", finalBillAmount);
  }
  if (customerType == '2' && units > 100) {
    finalBillAmount = (units - 100) * 30.00 + (100 * 10);
    printf("Final Bill Amount : %.2f", finalBillAmount);
  }
  // when a wrong customer Type is Entered
  else {
    printf("Invalid Customer Type !!");
  }
  return 0;
}
// End of the main Function
