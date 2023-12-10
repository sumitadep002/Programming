/*
Write a program to find maximum of three numbers using
a. If – else
b. conditional operator
*/

#include<stdio.h>
int main()
{
    int number1,number2,number3;

    printf("enter a: ");
    scanf("%d",&number1);

    printf("enter b: ");
    scanf("%d",&number2);

    printf("enter c: ");
    scanf("%d",&number3);

    if((number1 && number2) == number3)
    printf("\nall three numbers are same");
    else
    {
        if(number1>number2)
        {
            if(number1>number3)
            printf("%d > (%d and %d )",number1,number2,number3);
            else
            printf("%d > (%d and %d)",number3,number1,number2);
        }
        else
        {
            if(number2>number3)
            printf("%d > (%d and %d )",number2,number1,number3);
            else
            printf("%d > (%d and %d)",number3,number1,number2);
        }
    }




    printf("\nnow using ternary or conditional operator:\n");

    (number1&&number2)==number3 ? (printf("\nall three numbers are same")) : (number1>number2 ? (number1>number3 ? printf("%d > (%d and %d )",number1,number2,number3) : printf("%d > (%d and %d)",number3,number1,number2)) : (number2>number3 ? printf("%d > (%d and %d )",number2,number1,number3) : printf("%d > (%d and %d)",number3,number1,number2)));
printf("\n");
    return 0;
}
