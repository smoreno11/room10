//contributors
//Ama 

#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include <time.h>
#include <stdio.h>
#include <stdbool.h>
#include <unistd.h>

int selectRandom(int lower, int upper, int count);

int main(int argc, char *argv[])
{
	int choice = 0;
	char name[30] = "bob";

	srand(time(NULL));
	
	printf("Please enter your name: ");
	scanf("%s",name);

	printf("Hello %s welcome to the RPG Game!\n",name);

	while(choice != 99)
	{
		puts("You find yourself in a dark room and you are not sure how you got here.");
		puts("As you look around you see the room has 55 doors, each labeled with a number.");
		puts("The room starts filling with water and you must choose a door to open or you will likely drown. you may quit anytime by selecting option 99.");
		puts("What door do you choose?");
		scanf("%d",&choice);

		switch(choice)
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
				srand(time(NULL));
int choice;
int napChoice;
int goBack;
char *inventory[4];

puts("You hurry to close the door behind you, in hopes of keeping the water isolated to the previous room.");
puts("For a moment everything looks like a blur from all the commotion; finally, your eyes adjust.");
puts("You look around the room and see an old dresser, a mattress on the floor with papers scattered around it and a wooden desk.");
puts("What would you like to do:\n  1) Search the dresser for clues\n 2) Check the mattress\n 3) Go through the papers");
puts("4) Search the desk for clues\n 5) Go back through the door you came through");
puts("What do you decide?");
scanf("%d", &choice);

while (choice != 0)
	if (choice == 1) {
		puts("You walk across the room to the dresser and hear something scurrying underneath it.");
		puts("You drop to your knees to catch a peek at whatever that was.");
		puts("Staring at me with its beady eyes and little hands, was a raccoon the size of a kaola.");
		puts("It lunges at you from under the dresser and hisses angrily.");
		puts("You raise your arm in defense and get scratched by the raccoon's dirty paws.");
		puts("You jump up and climb on to the dresser. As you sit on the dresser, you check your wound.");
		puts("The raccoon got you pretty good; you're bleeding quite a lot. You begin to rummage through the drawers of the dresser.");
		puts("You find the following items: a rag, a taser, a blanket and a key.");

		inventory[3] = "key";
		inventory[2] = "blanket";
		inventory[1] = "taser";
		inventory[0] = "rag";

		puts("You wrap your arm with the rag that you found. The bleeding seems to have slowed. Though you're feeling a little light headed.");

		inventory[0] = "empty";

		puts("You check to see if the taser is functioning, and with a little bit of luck, it is!");
		puts("You descend from the dresser top, carefully, so as to not trigger the raccoon's wrath.");
		puts("Immediately the raccoon is upon you and you are waving your arms through to defend yourself. The taser!");
		puts("Thus the fight begins between you and the raccoon!");

		int health = 100;

		for (int i = 0; i < 10; i++) {
			int damage = selectRandom(1, 10, 10);

			health -= damage;
		}

		inventory[1] = "empty";

		printf("Your remaining health is: %d\n", health);

		if (health <= 0) {
			puts("You've been badly damaged by the raccoon. You slowly begin to lose consciousness.");
			break;
		}

		puts("Congratulations! You killed the raccoon.");
		puts("What would you like to do?");
		scanf("%d", &choice);
	} else if (choice == 2) {
		puts("You walk across the room to the mattress. Do you want to take a 30 minute nap? 1) Yes \n 2) No \n");
		scanf("%d", &napChoice);

		if (napChoice == 1) {
			puts("*You take a 30 minute nap and your health is restored to 100%*");
			puts("Your health is now 100%.");

			inventory[2] = "empty";
		} else if (napChoice == 2) {
			puts("You skip the nap.");
		}

		puts("You begin to look around the mattress. You observe there is a stain that looks like blood near the head of the mattress.");
		puts("What would you like to do?");
		scanf("%d", &choice);
	} else if (choice == 3) {
		puts("You walk across the room to the search the papers scattered on the bed. You noticed some of the papers have blood on them.");
		puts("You begin to pick up the pieces of paper, scanning them for any information on what's going on.");
		puts("You notice some wrote help me in what seems to be blood. The tips of the page are wet. Did they try to push this message to the previous room you was in?");
		puts("You collect that paper and two other pieces of paper with information about a man named Del on it.");
		inventory[0] = "help";
		inventory[1] = "del";
		inventory[2] = "info";

		puts("What would you like to do?");
		scanf("%d", &choice);
	} else if (choice == 4) {
		puts("You walk across the room to the old wooden desk. There's two drawers and a crack through the writing desk. You look into the crack and notice a piece of paper stuffed inside.");
		puts("You read the note and it tells you that Del was trapped in the room with the raccoon who has rabies. The raccoon wasn't edible because of the rabies so Del slowly wasted away due to malnutrition.");
		puts("The paper also tells you about the key in your inventory. It unlocks the door you came in from. Del kept the door locked because the previous room randomly fills with water.");
		puts("What would you like to do?");
		scanf("%d", &choice);
	} else if (choice == 5) {
		if (strcmp("key", inventory[3]) == 0) {
			puts("You walk across the room to the door you came from. You put your ear to the door. Nothing. Odd. You need to get help for the rabies infection.");
			puts("Do you want to go back? 1) Yes \n 2) No \n");
			scanf("%d", &goBack);

			if (goBack == 1) {
				break;
			} else {
				puts("What would you like to do?");
				scanf("%d", &choice);
				}
		} else {
			puts("Would you like to return to the previous room? 1) Yes \n 2) No \n");
			scanf("%d", &goBack);

			if (goBack == 1) {
				break;
			} else {
					puts("What would you like to do?");
					scanf("%d", &choice);
				}
		}
	}
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

             int selectRandom(int lower, int upper, int count) {
            lower = 1;
            upper = 10;
            count = 10;

            for (int i = 0; i < count; i++) {
                int num = (rand() % (upper - lower)) + lower;
                return ("%d", num);
            }
        }















































