#include<stdio.h>
int main()
{
    int n;
    int crust;

    printf("Enter the number of pizza: ");
    scanf("%d", & n);

    printf("\nSelect Crust Type:\n");
    printf("1 For Regular (+$0)\n");
    printf("2 For Thin (+$1)\n");
    printf("3 For Stuffed (+$2)\n");
    printf("Enter choice: ");
    scanf("%d", & crust);

    if(n==3 && crust==3)
    {
        printf("You got a free garlic Bread");
    }
    else
    {
        printf("Thank You For Your Order");
    }
}