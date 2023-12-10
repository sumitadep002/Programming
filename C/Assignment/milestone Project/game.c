#include <stdio.h>
#include <stdlib.h>

#define ROCK 1
#define PAPER 2
#define SCISSOR 3
#define PLAYER1_WIN 1
#define PLAYER2_WIN 2
#define DRAW 0

int rock_pper_scissor(int player1, int player2)
{
    int result;

    if (player1 == ROCK && player2 == PAPER)
        result = PLAYER2_WIN;
    else if (player1 == ROCK && player2 == SCISSOR)
        result = PLAYER1_WIN;

    else if (player1 == PAPER && player2 == ROCK)
        result = PLAYER1_WIN;
    else if (player1 == PAPER && player2 == SCISSOR)
        result = PLAYER2_WIN;

    else if (player1 == SCISSOR && player2 == ROCK)
        result = PLAYER2_WIN;
    else if (player1 == SCISSOR && player2 == PAPER)
        result = PLAYER1_WIN;

    else
        result = DRAW;

    return result;
}

int get_user_input()
{
    int choice;
    do
    {
        printf("1.Rock\n");
        printf("2. Paper\n");
        printf("3. Scissor\n");
        scanf("%d", &choice);
        if (!(choice >= 1 && choice <= 3))
            printf("ERROR -- Invalid input, should be 1 or 2 or 3");
    } while (!(choice >= 1 && choice <= 3));
    return choice;
}

void print_word(int v)
{
    if (v == ROCK)
    {
        printf("Rock\n");
    }
    else if (v == PAPER)
    {
        printf("Paper\n");
    }
    else if (v == SCISSOR)
    {
        printf("Scissor\n");
    }
}

int main()
{
    int user_score = 0;
    int computer_score = 0;

    srand(42);

    int quit = 0;
    int response;

    while (!(quit))
    {
        int user_input = get_user_input();
        int computer_choice = (rand() % 3) + 1;

        printf("User chose: ");
        print_word(user_input);
        printf("Computer Chose: ");
        print_word(computer_choice);

        int result = rock_paper_scissor(user_input, computer_choice);
        if (result == DRAW)
        {
            printf("It is a draw\n");
        }
        else if (result == PLAYER1_WIN)
        {
            printf("user wins and computer lost\n");
            user_score++;
        }
        else if (result == PLAYER2_WIN)
        {
            printf("computer wins and user lost");
            computer_score++;
        }

        int response;
        printf("if you want to continue input any integer, 0 to terminate. ");
        scanf("%d", &response);
        if ((response == 0))
            quit = 1;
    }

    printf("final score...\n");
    printf("computer score = %d\n", computer_score);
    printf("user score = %d\n", user_score);

    return 0;
}