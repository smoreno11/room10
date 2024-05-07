//contributors
//

#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include <time.h>
#include <stdio.h>
#include <stdbool.h>
#include <unistd.h>

void multiplicationGame();

int main(int argc, char* argv[])
{
	int choice = 0;
	char name[30] = "bob";

	srand(time(NULL));

	printf("Please enter your name: ");
	scanf("%s", name);

	printf("Hello %s welcome to the RPG Game!\n", name);

	while (choice != 99)
	{
		puts("You find yourself in a dark room and you are not sure how you got here.");
		puts("As you look around you see the room has 55 doors, each labeled with a number.");
		puts("The room starts filling with water and you must choose a door to open or you will likely drown. you may quit anytime by selecting option 99.");
		puts("What door do you choose?");
		scanf("%d", &choice);

		switch (choice)
		{
		case 1:
		{
			puts("room1");
			break;
		}
		case 2:
		{
			puts("room2");
			break;
		}
		case 3:
		{
			puts("room3");
			break;
		}
		case 4:
		{
			puts("room4");
			break;
		}
		case 5:
		{
			puts("room5");
			break;
		}
		case 6:
		{
			puts("room6");
			break;
		}
		case 7:
		{
			puts("room7");
			break;
		}
		case 8:
		{
			puts("room8");
			break;
		}
		case 9:
		{
			puts("room9");
			break;
		}
		case 10:
		{
			puts("room10");
			break;
		}
		case 11:
		{
			puts("room11");
			break;
		}
		case 12:
		{
			puts("room12");
			break;
		}
		case 13:
		{
			puts("room13");
			break;
		}
		case 14:
		{
			puts("room14");
			break;
		}
		case 15:
		{
			puts("room15");
			break;
		}
		case 16:
		{
			puts("room16");
			break;
		}
		case 17:
		{
			puts("room17");
			break;
		}
		case 18:
		{
			puts("room18");
			break;
		}
		case 19:
		{
			puts("room19");
			break;
		}
		case 20:
		{
			puts("room20");
			puts("You've entered room 20, the BEST room in this RPG.\n");
			puts("You will face a series of 3 challenges(mini-games) in order to proceed. \n");
			puts("First a simple riddle, second a number guessing challenge, and third a multiplication problem. \n");

			//RIDDLE GAME - GAME 1

			printf("Welcome to the Riddle Game!\n");
			printf("Here is your first riddle(answer in all lowercase, no adjectives) \n");

			#define NUM_RIDDLES 8
			//riddle list, coordinates with the answers list
			char* riddles[NUM_RIDDLES] = {
				"David’s parents have three sons: Snap, Crackle, and what’s the name of the third son?",
				"What invention lets you look right through a wall?",
				"What can you catch, but not throw?",
				"The person who makes it has no need of it; the person who buys it has no use for it. The person who uses it can neither see nor feel it. What is it?",
				"What has a head, a tail, is brown, and has no legs?",
				"If you drop me I’m sure to crack, but give me a smile and I’ll always smile back. What am I",
				"What gets wetter as it dries?",
				"I’m tall when I’m young, and I’m short when I’m old. What am I"
			};

			char* answers[] = {
				"david",
				"window",
				"cold",
				"coffin",
				"penny",
				"mirror",
				"towel",
				"candle"
			};

			int numRiddles = sizeof(riddles);
			srand(time(NULL));
			int randomIndex = rand() % NUM_RIDDLES;

			bool solved = false;
			while (!solved) {
				printf("\nRiddle: %s\n", riddles[randomIndex]);

				char userAnswer[50];
				// 3 tries
				for (int attempts = 1; attempts <= 3; attempts++) {
					printf("Attempt #%d: Enter your answer (or type 'new' for a new riddle): ", attempts);
					scanf("%s", userAnswer);
					// give new riddle 
					if (strcmp(userAnswer, "new") == 0) {
						randomIndex = rand() % numRiddles;
						break;
					}
					// compare answer to user input
					if (strcmp(userAnswer, answers[randomIndex]) == 0) {
						printf("Correct! You solved the riddle!\n");
						solved = true;
						break;
					}
					else {
						printf("Sorry, that's incorrect. Try again.\n");
					}
				}

				if (!solved) {
					printf("Sorry, you've run out of attempts. The correct answer is: %s\n", answers[randomIndex]);
					printf("Would you like to try another riddle? (yes/no): ");

					char choice[4];
					scanf("%s", choice);

					if (strcmp(choice, "no") == 0) {
						break;
					}
					else if (strcmp(choice, "yes") == 0) {
						randomIndex = rand() % numRiddles;
					}
					else {
						printf("Invalid input. Exiting riddle game.\n");
						break;
					}
				}
			}
			printf("Congratulations on completeting STAGE 1 of the BEST room(room 20), only 2 stages remaining: \n");
			
			//NUMBER GUESSING GAME - GAME 2
			printf("Welcome to the Number Guessing Game!\n");
			printf("I'm thinking of a number between 1 and 100. Can you guess it?\n");

			int secretNumber = rand() % 100 + 1;
			int guess;
			int attempts = 0;

			do {
				printf("Enter your guess: ");
				scanf("%d", &guess);
				attempts++;

				if (guess < secretNumber) {
					printf("Too low! Try again.\n");
				}
				else if (guess > secretNumber) {
					printf("Too high! Try again.\n");
				}
				else {
					printf("Congratulations! You guessed the number %d in %d attempts!\n", secretNumber, attempts);
					printf("You have now completed STAGE 1 & STAGE 2 of the BEST ROOM(room 20), proceed to STAGE 3!\n");
				}
			} while (guess != secretNumber);


			//Multiplication GAME - GAME 3 
			printf("Welcome to the Multiplication Math Game!\n");
    		printf("I'm going to give you a simple multiplication problem. Can you solve it?\n");

			multiplicationGame();

			printf("Congratulations on completing all 3 stages!\n");
			printf(" __   __            _    _ _        \n");
			printf(" \\ \\ / /           | |  | (_)       \n");
			printf("  \\ V /___  _   _  | |  | |_ _ __   \n");
			printf("   \\ // _ \\| | | | | |\\| | | '_ \\  \n");
			printf("   | | (_) | |_| | \\  /\\  / | | | | \n");
			printf("   \\_/\\___/ \\__,_|  \\/  \\/|_|_| |_| \n");
			printf("\n");
			printf("You will now return to the main Cave. Come again to the BEST ROOM (room 20) anytime! \n\n");

			break;
		}
		case 21:
		{
			puts("room21");
			break;
		}
		case 22:
		{
			puts("room22");
			break;
		}
		case 23:
		{
			puts("room23");
			break;
		}
		case 24:
		{
			puts("room24");
			break;
		}
		case 25:
		{
			puts("room25");
			break;
		}
		case 26:
		{
			puts("room26");
			break;
		}
		case 27:
		{
			puts("room27");
			break;
		}
		case 28:
		{
			puts("room28");
			break;
		}

		case 29:
		{
			puts("room29");
			break;
		}
		case 30:
		{
			puts("room30");
			break;
		}
		case 31:
		{
			puts("room31");
			break;
		}
		case 32:
		{
			puts("room32");
			break;
		}

		case 33:
		{
			puts("room33");
			break;
		}
		case 34:
		{
			puts("room35");
			break;
		}

		case 36:
		{
			puts("room36");
			break;
		}

		case 37:
		{
			puts("room37");
			break;
		}

		case 38:
		{
			puts("room38");
			break;
		}
		case 39:
		{
			puts("room39");
			break;
		}
		case 40:
		{
			puts("room40");
			break;
		}
		case 41:
		{
			puts("room41");
			break;
		}
		case 42:
		{
			puts("room42");
			break;
		}
		case 43:
		{
			puts("room43");
			break;
		}
		case 44:
		{
			puts("room44");
			break;
		}
		case 45:
		{
			puts("room45");
			break;
		}
		case 46:
		{
			puts("room46");
			break;
		}
		case 47:
		{
			puts("room47");
			break;
		}
		case 48:
		{
			puts("room48");
			break;
		}
		case 49:
		{
			puts("room49");
			break;
		}
		case 50:
		{
			puts("room50");
			break;
		}
		case 51:
		{
			puts("room51");
			break;
		}
		case 52:
		{
			puts("room52");
			break;
		}
		case 53:
		{
			puts("room53");
			break;
		}
		case 54:
		{
			puts("room54");
			break;
		}
		case 55:
		{
			puts("room55");
			break;
		}
		case 99:
		{
			puts("You have escaped");
			break;
		}
		default:
		{
			puts("invalid choice");
		}
		}
	}
	puts("Game Over");
	return EXIT_SUCCESS;
}

void multiplicationGame() {
    int num1, num2, userAnswer, correctAnswer;

    do {
        // Generate two random numbers between 1 and 10
        num1 = rand() % 10 + 1;
        num2 = rand() % 10 + 1;

        // Display the multiplication problem
        printf("What is %d * %d?\n", num1, num2);

        // Get the user's answer
        printf("Your answer: ");
        scanf("%d", &userAnswer);

        // Calculate the correct answer
        correctAnswer = num1 * num2;

        // Check if the user's answer is correct
        if (userAnswer == correctAnswer) {
            printf("Congratulations! %d * %d = %d. You got it right!\n", num1, num2, correctAnswer);
        } else {
            printf("Sorry, that's incorrect. %d * %d = %d.\n", num1, num2, correctAnswer);
            printf("Try again.\n");
        }
    } while (userAnswer != correctAnswer);
}















































