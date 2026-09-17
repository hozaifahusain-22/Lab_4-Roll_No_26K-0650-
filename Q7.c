#include <stdio.h>

int main() {
    float billTotal;
    char hasStudentID;

    printf("Enter the bill total: $");
    scanf("%f", &billTotal);

    printf("Do you have a student ID (Y/N)? ");
    scanf(" %c", &hasStudentID);


    if (hasStudentID == 'Y' || hasStudentID == 'y') {
        billTotal = billTotal - 2.00; 
        printf("Student discount of $2.00 applied.\n");
    }

    if (billTotal < 0.00) {
        billTotal = 0.00; // Adjust to zero
        printf("Bill cannot be negative. Adjusted to $0.00.\n");
    }

    printf("Final bill total: $%.2f\n", billTotal);
}