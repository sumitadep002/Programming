/*
write a program that will calculate the price for a quantity entered from the keyboard, given 
that the unit price is Rs 5 and there is a discount of 10 percent for quantities over 30 and a 15 
percent discount for quantities over 50
*/

#include<stdio.h>
int main()
{
    int quantity=0,unit=5;

    printf("enter the quantity: ");
    scanf("%d",&quantity);

    printf("\n");

    if(quantity>30 && quantity<=50)
        printf("%0.2f",quantity*unit*0.9);
    else if(quantity>50)
        printf("%0.2f",quantity*unit*0.85);
    else
        printf("%d",quantity*unit);   
        
    printf("\n");
    return 0;
}
