/*
* Project name: rps
--------------------------------------------
    ID:9839039
    Name:Samin Mahdipour
    Mail:Uni.mahdipour@gmail.com
--------------------------------------------
*/
#include <stdio.h>
#include <windows.h>
#include <time.h>

int main() {
	int goal;
	int player_choice, bot_choice;
	int player_score = 0, bot_score = 0;

	printf("Enter the Goal:\n");
	scanf("%d", &goal);

	while (player_score < goal && bot_score < goal) {
		// print the scores at the top of the window


		// get player choice
		printf("Press 1 for Rock, Press 2 for Paper, Press 3 for Scissors\n");
		scanf("%d", &player_choice);

		// make a random choice for the computer
		srand(time(NULL));
		bot_choice = rand() % 3 + 1;
        switch (player_choice)
        {
    case 1:
        if(bot_choice==2)
            bot_score++;
        if(bot_choice==3)
            player_score++;
        break;
    case 2:
        if(bot_choice==3)
            bot_score++;
        if(bot_choice==1)
            player_score++;
        break;
    case 3:
        if(bot_choice==1)
            bot_score++;
        if(bot_choice==2)
            player_score++;
        break;
	}

	// print final result
	printf("Your score : %d\t\tBot score : %d\n\n", player_score, bot_score);

    // Check who is the winner and congrats him/her/it!!
	// Write your code here
}
if(bot_score==goal)
    puts("Computer wins!");
if(player_score==goal)
    puts("You win!");
}
