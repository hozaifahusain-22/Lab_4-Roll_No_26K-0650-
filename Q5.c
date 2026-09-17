#include<stdio.h>
int main()
{
    char extra_cheese;
    float total_cost;
    float surcharge ;

    printf("Enter the current total cost of the order ($): ");
    scanf("%f", &total_cost);

    printf("Do you want Extra Cheese: ");
    scanf(" %c", & extra_cheese);

    if(extra_cheese =='Y' || extra_cheese =='y')
    {
      surcharge= 1.50;
    }
    else if (extra_cheese =='N' || extra_cheese =='n')
   { 
      surcharge= 0.0;
   }
    else
    {
      printf("Invalid choice selected! Defaulting to $0 surcharge.\n");
      surcharge= 0.0;
    }
    total_cost += surcharge;

    printf("\nThe new updated bill total is: $%.2f\n", total_cost);

}