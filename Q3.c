#include <stdio.h>

int main() {
    int quantity;
    int total_cost ;

    printf("Enter pizza quantity (1, 2, or 3): ");
    scanf("%d", &quantity);

    if (quantity == 1) {
        total_cost = 8;
    } 
    else if (quantity == 2) {
        total_cost = 15;
    } 
    else if (quantity == 3) {
        total_cost = 21;
    } 
    else {
        printf("Invalid quantity! Quantity must be between 1-3.\n");
    }

    // Print the final package total along with the quantity if the input is valid
    if (total_cost > 0) {
        printf("\n--- Order Summary ---\n");
        printf("Quantity ordered: %d\n", quantity);
        printf("Total package cost: $%d\n", total_cost);
    }

}
