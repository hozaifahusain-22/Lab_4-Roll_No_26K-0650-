#include <stdio.h>

int main()
 {
    float total_cost;
    int crust_choice;
    float surcharge ;

    printf("Enter the current total cost of the order ($): ");
    scanf("%f", &total_cost);

    printf("\nSelect Crust Type:\n");
    printf("1 For Regular (+$0)\n");
    printf("2 For Thin (+$1)\n");
    printf("3 For Stuffed (+$2)\n");
    printf("Enter choice: ");
    scanf("%d", &crust_choice);

    if (crust_choice == 1) {
        surcharge = 0.0;
    } else if (crust_choice == 2) {
        surcharge = 1.0;
    } else if (crust_choice == 3) {
        surcharge = 2.0;
    } else {
        printf("Invalid choice selected! Defaulting to $0 surcharge.\n");
        surcharge = 0.0;
    }

    total_cost += surcharge;

    printf("\nThe new updated bill total is: $%.2f\n", total_cost);

}
