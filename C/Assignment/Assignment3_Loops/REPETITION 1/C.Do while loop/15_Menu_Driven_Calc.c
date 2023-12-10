/*
Modify the menu driven program for four function calculator. Add a menu item to choose
option exit. The program continues till user chooses option exit.
*/

#include <stdio.h>

int main()
{
    int n1, n2;
    char option;

    do
    {
        printf("\n'+' for addition,\n'-' for subtraction\n'/' for division\n'*' for multiplication");
        printf("\nEnter 'e' or 'E' to exit\nEnter your choice: ");
        scanf(" %c", &option);
        if(option != 'e' && option!= 'E')
	{
		printf("Enter n1: ");
            	scanf("%d", &n1);
          	printf("Enter n2: ");
		scanf("%d", &n2);
        }
        switch (option)
        {
        case '+':
            printf("%d + %d = %d\n", n1, n2, n1 + n2);
            break;
        case '-':
            printf("%d - %d = %d\n", n1, n2, n1 - n2);
            break;
        case '/':
            if (n2 == 0)
            {
                printf("Error: division by zero\n");
            }
            else
            {
                printf("%d / %d = %d\n", n1, n2, n1 / n2);
            }
            break;
        case '*':
            
            printf("%d * %d = %d\n", n1, n2, n1 * n2);
            break;
        case 'e':
        case 'E':
            printf("You have chosen to exit\n");
            break;
        default:
            printf("Error: Invalid input\n");
            break;
        }
    } while (option != 'e' && option != 'E');

    printf("You have successfully exited the program\n");

    return 0;
}
