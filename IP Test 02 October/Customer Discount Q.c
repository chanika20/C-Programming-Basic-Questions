// chanika20
#include <stdio.h>

int main(void) {

  // Declaring Variables

  char customerType;
  float billAmount;
  float discount;
  float finalBillAmount;

  printf("loyaltyCustomer = 1\n");
  printf("NonLoyaltyCustomer = 2\n");

  printf("Customer Type (1/2) :");
  scanf("%c", &customerType);

  printf("Bill Amount :");
  scanf("%f", &billAmount);
  
  // if Bill Amount is less than or eqaul to 2500 for loyalty customer
  if (customerType == '1' && billAmount <= 2500) {

    discount = billAmount * 0.05;
    printf("Discount Amount : %.2f", discount);

    finalBillAmount = billAmount - discount;
    printf("\nFinal Bill Amount : %.2f", finalBillAmount);
  }
  // if Bill Amount is greater than  to 2500 for loyalty customer
  else if  (customerType == '1' && billAmount > 2500) {

    discount = billAmount * 0.1;
    printf("Discount Amount : %.2f", discount);

    finalBillAmount = billAmount - discount;
    printf("\nFinal Bill Amount : %.2f", finalBillAmount);
  }
  // if Bill Amount is greater than  to 5000 for Nonloyalty customer
  else if (customerType == '2' && billAmount > 5000) {

    discount = billAmount * 0.1;
    printf("Discount Amount : %.2f", discount);

    finalBillAmount = billAmount - discount;
    printf("\nFinal Bill Amount : %.2f", finalBillAmount);
  }
  // if Bill Amount is less than or equal to 5000 for Nonloyalty customer
  else if (customerType == '2' && billAmount <= 5000) {

    discount = 0; // No Discount
    printf("Discount Amount : %.2f", discount);

    finalBillAmount = billAmount - discount;
    printf("\nFinal Bill Amount : %.2f", finalBillAmount);
  }
  // when a wrong customer Type is Entered
   else {
    printf("Invalid Customer Type !!");
  }
  return 0;
}
// End of the main funtcion
