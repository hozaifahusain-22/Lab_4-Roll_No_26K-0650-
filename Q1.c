#include<stdio.h>
int main()
{
    int size;
    printf("\n1. Small");
    printf("\n1. Medium ");
    printf("\n3. Large \n\n");

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
}