//CSC321
//Ama White
//Final Project

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include <stdlib.h>

void countdown(int x);

int main(void) {
	int input;
	int guess;
	int weaponSelection;
	int countDown;
	char lastWords;

	printf("Welcome to My Room - Mwah ha ha!\n");
	printf("Choose a number between 1 and 5 and see if you can escape your imminent doom!\n");
	scanf("%d", &input);

	switch (input) {
		case 1 :
			printf("You have fallen in a dark pit with no way out!\n");
			printf("If you guess the right number between 1 and 10, then you will have a second chance!\n");
			int randomNum = rand() % 10 + 1;
			scanf("%d", &guess);
			if (randomNum != guess) {
				printf("Game Over I win\n!");
				break;
			} else {
				printf("You live another day!\n");
				break;
			}

		case 2 :
			printf("A dragon comes out of seemingly nowhere!\n");
			char weapons[4][20] = {"banana", "sword", "balloon gun", "slingshot"};
			printf("You find a weapon closet next to the door! Inside there's a banana, a sword, a ballon gun and a slingshot.\n");
			printf("Select a weapon (1 - 4): \n");
			scanf("%d", &weaponSelection);
			if (weaponSelection - 1 == 0) {
				printf("What are you gonna do with a banana?\n");	
				printf("Game Over!\n");
				break;
			} else if (weaponSelection - 1 == 1) {
			        printf("You slay the dragon with your mighty sword!\n");	       
				break;
			} else if (weaponSelection - 1 == 2) {
				printf("You made a dragon balloon with your balloon gun and distracted the dragon! RUN!\n");
				break;
			} else if (weaponSelection - 1 == 3) {
				printf("Have you heard of Goliath? Well, look at you, David. With just a slingshot!\n");
				break;
			} else {
				printf("Wrong choice! Never fist fight a dragon!\n");
				break;
			}

		case 3 :
			printf("You have escaped! Good job and good luck!\n");
			break;

		case 4 :
			printf("A witch turns you into a towel!\n");
			printf("Do you have any last words? The witch asks.\n");
			scanf("%s", &lastWords);
			printf("Okay then! Pick a number.\n");
			scanf("%d", &countDown);
			countdown(countDown);
			printf("Game over!\n");
			break;

		case 5 :
			printf("You get stabbed from behind!\n");
			printf("Game over!\n");
			break;

		default :
			printf("Wrong button silly!\n");
			break;

		}

	return EXIT_SUCCESS;
}

void countdown(int x) {
	for (int i = 0; i < x; x--) {
		printf("%d\n", x);
	}
}
