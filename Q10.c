#include<stdio.h>
int main()
{
    int size,qty,crust,hour,fulfillment,freeGarlicBread,basePrice;
    float total,crustFee,cheeseFee,happyHourDiscount,studentDiscount,deliveryFee;
    char cheeseChoice, studentChoice;
    
    printf("\n1. Small");
    printf("\n1. Medium ");
    printf("\n3. Large \n");

    scanf("%d", & size);

    if(size==1)
    {
        printf("Small Size Selected");
    }
    else if(size==2)
    {
        printf("Medium Size Selected");
    }
    else if(size==3)
    {
        printf("Large Size Selected");
    }
    else
    {
        printf("Invalid Size");
    }

   printf("How many pizzas (1-3): ");
    scanf("%d", &qty);

    if (qty == 1) {
       basePrice = 8.00;
        printf("1 pizza: $8.00\n");
    } else if (qty == 2) {
       basePrice = 15.00;
        printf("2 pizzas: $15.00 (Save $1.00!)\n");
    } else if (qty == 3) {
        basePrice = 21.00;
        printf("3 pizzas: $21.00 (Save $3.00!)\n");
    } else {
        printf("Invalid quantity.\n");
    }
    total=basePrice;

    printf("Select crust (1.Regular, 2.Thin, 3.Stuffed): ");
    scanf("%d", &crust);
 
    if (crust == 1) {
        crustFee = 0.00;
        printf("Regular crust selected (+$0.00)\n");
    } else if (crust == 2) {
        crustFee = 1.00;
        printf("Thin crust selected (+$1.00)\n");
    } else if (crust == 3) {
        crustFee = 2.00;
        printf("Stuffed crust selected (+$2.00)\n");
        } else {
        printf("Invalid crust choice.\n");

    }
    total += crustFee;

     printf("Extra cheese (Y/N): ");
    scanf(" %c", &cheeseChoice);
 
    if (cheeseChoice == 'Y' || cheeseChoice == 'y') {
        cheeseFee = 1.50;
        total += cheeseFee;
        printf("Extra cheese added (+$1.50)\n");
    } else if (cheeseChoice == 'N' || cheeseChoice == 'n') {
        cheeseFee = 0.0;
        total += cheeseFee;
    } else {
        printf("Invalid input for cheese option.\n");
    }
 printf("Enter current hour (0-23): ");
    scanf("%d", &hour);

    if (hour >= 11 && hour <= 14) {
        happyHourDiscount = total * 0.10;
        total -= happyHourDiscount;
        printf("Happy Hour 10%% discount applied! (-$%.2f)\n", happyHourDiscount);
    }

    printf("Student ID (Y/N): ");
    scanf(" %c", &studentChoice);
 
    if (studentChoice == 'Y' || studentChoice == 'y') {
        studentDiscount = 2.00;
        total -= studentDiscount;
        printf("Student discount applied! (-$2.00)\n");
    }
    if (total < 0) {
        total = 0.00;
    }
    if (qty == 3 && crust == 3) {
        printf("You get free garlic bread!\n");
    } else {
        printf("Thank you for your order!\n");
    }

    printf("Choose Fulfillment Option: ");
    printf("\n1. Pickup");
    printf("\n2. Delivery\n");
    scanf("%d", & fulfillment);

    if (fulfillment == 2) {
        deliveryFee = 3.00;
        total += deliveryFee;
        printf("Delivery selected (+$3.00)\n");
    } else if (fulfillment == 1) {
     deliveryFee=0.0;
     total += deliveryFee;
    } else {
        printf("Invalid fulfillment option.\n");
    }

    printf("----------------------------------------\n");
    printf("Base Price:$%d", basePrice);
    printf("\nCrust Surcharge:$%.2f", crustFee);
 
    if (cheeseChoice == 'Y' || cheeseChoice == 'y')
        printf("\nExtra Cheese:$%.2f", cheeseFee);
 
    if (happyHourDiscount > 0)
        printf("\nHappy Hour Discount:$%.2f", happyHourDiscount);
 
    if (studentChoice == 'Y' || studentChoice == 'y')
        printf("\nStudent Discount:$%.2f", studentDiscount);
 
    if (fulfillment == 2)
        printf("\nDelivery Fee:$%.2f", deliveryFee);
 
    printf("\n----------------------------------------\n");
 
    if (freeGarlicBread) {
        printf("BONUS: Free Garlic Bread included!\n");
        printf("\n----------------------------------------\n");
    }
 
    printf( "\nFINAL TOTAL:$%.2f", total);
    printf("\n========================================\n");
   printf("Thank you for dining with us!\n");
    printf("Have a slice-tastic day!\n");
      printf("\n========================================\n");
}