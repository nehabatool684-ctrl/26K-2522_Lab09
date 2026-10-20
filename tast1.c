
#include <stdio.h>

double calculateDiscount(double bill, char membership) {
    double discount_rate = 0.0;

    if (membership == 'P') {
        discount_rate = 0.20;
    } else if (membership == 'G') {
        discount_rate = 0.10;
    } else if (membership == 'S') {
        discount_rate = 0.05;
    }

    // Additional 2% discount for bills above 10000
    if (bill > 10000) {
        discount_rate += 0.02;
    }

    return bill * discount_rate;
}

void calculateFinalBill(double discounted,
                        double *finalBill,
                        double *tax,
                        double *shipping) {
    *tax = discounted * 0.15;
    double taxed = discounted + *tax;

    if (taxed <= 5000) {
        *shipping = 300;
    } else {
        *shipping = 0;
    }

    *finalBill = taxed + *shipping;
}

int main() {
    double shop_bill;
    char membership;
    double discount, discounted_amount;
    double finalBill, tax, shipping;

    printf("Shopping Bill: ");
    scanf("%lf", &shop_bill);

    printf("Membership Status:\n");
    printf("Platinum - P\n");
    printf("Gold - G\n");
    printf("Standard - S\n");
    printf("Enter membership: ");
    scanf(" %c", &membership);

    if (shop_bill < 0 ||
        (membership != 'P' && membership != 'G' &&
         membership != 'S')) {
        printf("Invalid bill amount or membership status.\n");
        return 1;
    }

    discount = calculateDiscount(shop_bill, membership);
    discounted_amount = shop_bill - discount;

    calculateFinalBill(discounted_amount,
                       &finalBill, &tax, &shipping);

    printf("\n----- BILL SUMMARY -----\n");
    printf("Original Bill:     %.2f\n", shop_bill);
    printf("Discount:          %.2f\n", discount);
    printf("Discounted Amount: %.2f\n", discounted_amount);
    printf("Tax (15%%):         %.2f\n", tax);
    printf("Shipping:          %.2f\n", shipping);
    printf("Final Bill:        %.2f\n", finalBill);

    return 0;
}

