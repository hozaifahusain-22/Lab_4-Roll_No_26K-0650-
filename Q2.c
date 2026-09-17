#include <stdio.h>

int main() {
    int num_pizzas;

    printf("Enter the number of pizzas: ");
    scanf("%d", &num_pizzas);

    if (num_pizzas > 1) {
        printf("Check our multi-pizza deals.\n");
    } else {
        printf("Your total is $8.\n");
    }

}
