#include <stdio.h>

int main() {
    float totalBill;
    int hour;
    float discount ;
    float finalBill ;

    printf("Enter the current total bill: $");
    scanf("%f", &totalBill);

    printf("Enter the current hour (0-23): ");
    scanf("%d", &hour);

     discount = totalBill * 0.10;
    finalBill = totalBill - discount;

    if (hour >= 11 && hour <= 14) {
               
        printf("It's lunch hour! 10%% discount applied.\n");
       
        printf("Discounted total: $%.2f\n", finalBill);
        
    }  
    else {
        printf("No discount available at this time.\n");
        printf("Total bill: $%.2f\n", totalBill);
    }

}