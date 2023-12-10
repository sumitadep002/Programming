#include<stdio.h>

int main()
{
    float number1, number2;
    char operation;

    do {
        printf("\nEnter number1: ");
        scanf("%f", &number1);

        printf("\nEnter number2: ");
        scanf("%f", &number2);

        printf("\n(1) + for addition\n(2) - substraction\n(3) * for multiplcation\n(4) / for division\n(5) e for exit\n");
        
        printf("\nEnter your choice: "); 	
        scanf(" %c", &operation); // Add a space before %c to consume leading whitespace

        printf("\n");
        
        switch(operation)
        {
            case '+': printf("%0.2f + %0.2f = %0.2f\n", number1, number2, number1 + number2); break;
            case '-': printf("%0.2f - %0.2f = %0.2f\n", number1, number2, number1 - number2); break;
            case '*': printf("%0.2f * %0.2f = %0.2f\n", number1, number2, number1 * number2); break;
            case '/': 
                if (number2 != 0) {
                    printf("%0.2f / %0.2f = %0.2f\n", number1, number2, number1 / number2);
                } else {
                    printf("Error: Division by zero!\n");
                }
                break;
            case 'e':
            case 'E':
                break;
            default: printf("Invalid operator!\n"); break;
        } 
    } while (operation != 'e' && operation != 'E');

    printf("\nYou have successfully exited the program.\n");

    return 0;
}

