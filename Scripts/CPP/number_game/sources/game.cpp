#include <iostream>
#include <stdlib.h> 
#include <time.h> 
#include "../headers/game.h"

Player player;

void play_again()
{
    printf("Would you like to play again (y/n)? ");
    
    std::cin >> player.response;
    if (player.response == 'y')
    {
        player.guess_count = 0;
        player.count = 1;
        printf("\n");
        game();
    } else if (player.response == 'n')
    {
        std::cin.clear();
        std::cin.ignore();
        printf("Byeeeeeeeee\n");
        system("sleep 2");
        system("clear");    
        quick_exit(1);
    } else if (player.response != 'y' || player.response != 'n')
    {
        std::cin.clear();
        std::cin.ignore();
        std::cout << "INVALID INPUT." << std::endl;
        play_again();
    }else
    {
        printf("\n");
        quick_exit(0);
    }

}

void game()
{   
    srand(time(0));
    player.random = rand() % 100;

    printf("Lets play a game. I'm thinking of a number. You have 7 tries to guess what it is.\n");
    guess_checker();
    play_again();
}

void guess_checker()
{
    for (int i = 0; i < 7; i++)
    {
        printf("Guess #%d: ",player.count);
        player.count++;
        std::cin >> player.guess;
        if (std::cin.fail())
        {
            std::cin.clear();
            std::cin.ignore();
            std::cout << "INVALID INPUT" << std::endl;
            play_again();
            break;
        }
        if (player.guess > player.random && player.guess_count < 7)
        {
            printf("Your guess of %d is too high.\n",player.guess);
            player.guess_count++;
        } 
        if (player.guess < player.random && player.guess_count < 7)
        {
            printf("Your guess of %d is too low.\n",player.guess);
            player.guess_count++;
        }
        if (player.guess == player.random && player.guess_count < 7)
        {
            printf("Correct! You win!\n");
            printf("The random number was: %d\n",player.random);
            break;
        }
        if (player.guess_count >= 7)
        {
            printf("You lose!\n");
            printf("The random number was: %d\n",player.random);
            break;
        }
 
    }
}

