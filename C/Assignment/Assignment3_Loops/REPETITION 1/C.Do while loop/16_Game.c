/*
Write a program to develop a very simple version of the ''guess the magic number" game. The
program generates a random magic number between 1 and 1000. Ask user to guess the
number. If guess is correct then print message “congrats! You won.” if the guess is less than
magic number print the message ** left ** otherwise print the message ** right **. Repeat the
procedure till player give accurate guess. Give maximum 10 chances to user.
Note: generates the magic number using the standard random number generator rand( ), which
returns an arbitrary number between 0 and RAND_MAX (which defines an integer value that
is 32,767 or larger). The rand( ) function requires the header <stdlib.h>
*/

#include <stdio.h>
#include <stdlib.h>
#include<time.h>
int main()
{
    int magic_number = 0, chance = 10, input_number;
    int max_range = 1000;
    srand(time(NULL));
    //this will generate random number between 1 to 1000
    magic_number = rand() % max_range + 1;


    printf("*******welcome to the game******");
    printf("\n you have to a guess a number which is known as MAGIC NUMBER ");
    printf("\n you have to have to geuss the number in 10 attepmts \nif you fail you lose");
    printf("\n________________Let's  START______________\n");
    for (chance = 1; chance <= 10; chance++)
    {
        printf("\nenter the number= ");
        scanf("%d", &input_number);
        printf("\nattempts left %d", 10 - chance);
        if (magic_number == input_number)
            break;
        else if (magic_number > input_number)
            printf("\nguess any higher value than entered value");
        else
            printf("\nguess slightly smaller value than entered value");
    }
    if (chance <= 10)
        printf("\nGreetings you have geussed the number in just %d attempts", 10 - chance);
    else
    {
        printf("\nsorry you have used 10 attempts\nbetter luck next time");
    }

    printf("\n%d was the magic number", magic_number);

    return 0;
}
