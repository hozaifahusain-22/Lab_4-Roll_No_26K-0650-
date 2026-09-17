#include<stdio.h>
int main()
{
    int total;
    int fullfillment;

    printf("Enter the total bill: $");
    scanf("%d",& total);

    printf("Choose Fullfillment Option: ");
    printf("\n1. Pickup");
    printf("\n2. Delivery\n");
    scanf("%d", & fullfillment);

    if(fullfillment==2)
    {
     total+=3.00;
    }

    printf("Your Total Bill is: $%d", total);

}
