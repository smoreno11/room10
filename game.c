//contributors
//Suave714

#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include <time.h>
#include <stdio.h>
#include <stdbool.h>
#include <unistd.h>

void generateGold();

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
				int pathNum = 0;
				int choice = 0;
				srand(time(NULL));
				int numbers[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};


	puts("Welcome! You have entered room 32!\n");
	puts("There are 5 Paths around the room.\n");

	for(int i = 0; i < 5; i++){
		puts("Path options.");
		puts("Path 1 says 'Take a chance!'.");
                puts("Path 2 says 'Be aware DO NOT ENTER'.");
                puts("Path 3 says 'Enter at your own RISK'.");
                puts("Path 4 says 'Goodies'.");
                puts("Path 5 is across the main door you entered from. It is a long dark pathway seeming to be endless.\n");
		printf("Please choose a path number from 1 - 5: \n");
		scanf("%d", &pathNum);

		if(pathNum < 1 || pathNum > 5)
		{
			puts("Invalid path!");
			puts("Please chose a path between 1 - 5: ");
			scanf("%d", &pathNum);
		}
		switch(pathNum)
		{
			case 1:
				puts("You chose path 1.\n");
				puts("You have encountered a Wizard at the end of the pathway.");
				puts("The Wizard has 3 chests in front of him.\n");
				puts("The Wizard says:");
				puts("Who is there?");
				puts("Ahhh its a traveler!");
				puts("Welcome!");
				puts("I have something for you.");
			do{
				puts("Choose a chest 1 - 3:");
                                scanf("%d", &choice);
				switch (choice) 
				{
					case 1:
						puts("You open the chest and a puff of smoke hit you in the face!");
						puts("You ask the wizard what was that?");
						puts("He says you will see");
						puts("you feel a bit weird.");
						puts("The Wizard sent you back.\n");
						break;
					case 2:
						generateGold();
						puts("The Wizard sent you back.\n");
						break;
					case 3:
						puts("You currently only have flipflops and you found some old shoes.");
						puts("The Wizard tells you that these shoes are better for you.");
						puts("He convinced you to put them on.");
						puts("The Wizard sent you back.\n");
						break;
					default:
						printf("What do you mean %d! Do you see me a as fool!\n", choice);
						break;
				}
				} while(choice < 1 || choice > 3);
			continue;
		case 2: 
			puts("You chose path 2.\n");
			puts("You follow the path to only reach a dead end.");
			puts("All of a sudden the ceiling started to collapse!");
			puts("You managed to get away nearly escaping death.");
			puts("You returned the way you came from.\n");
			puts("Choose a new path.\n");

			continue;
		case 3: 
			puts("You chose path 3.\n");
			puts("You come across an opening to an under ground cave system.");
			puts("You slowly approach since there is no light.");
			puts("You slip on some damp rocks and almost fall into the cave system.");
			puts("Out of fear of almost falling into the cave system you return.");
			puts("Choose a new path.");
			continue;
		case 4: 
			puts("You chose path 4.\n");
			puts("You see a leprechaun sitting down.");
			puts("As you get closer you see a pot of gold sitting infront of him.\n");
			puts("He says:");
			puts("Oh I have a treat for you!");
			puts("Go ahead and get a hand full of coins out of my pot!");
			generateGold();
			puts("You are very welcome ungreatful human!");
			puts("He send you on your way.");
			puts("You returned.");
			puts("Choose a new path.\n");
			continue;
		case 5: 
			puts("You chose path 5.\n");
			puts("You follow the path for what seems forever.");
			puts("You encounter some bugs here and there for hours.");
			puts("You finally see some light at the end of the path!");
			puts("You came to realize that the wizard had put a trap spell on you.");
			puts("You see a pool of water, you decide to wipe your face and drink some water.");
			puts("The effects wore off!");
			puts("It was all an illusion and a dead end appeared.");
			puts("You returned");
			puts("You are now leaving room 32!");
			continue;
		default:
			puts("Invalid path! Please enter another path.\n");
			break;
	}
	
}				break;
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

void generateGold() {
	int numbers[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
	int randomArrIndex = 0;
	int randomNumber = 0;
	
	randomArrIndex = rand() % 10;
	randomNumber = numbers[randomArrIndex];
	
	printf("You found %d gold coins!\n", randomNumber);
}
















































