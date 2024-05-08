//contributors
//Elias Dawarpana

#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include <time.h>
#include <stdio.h>
#include <stdbool.h>
#include <unistd.h>

void FinalArea(int level);

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
				printf("Welcome to room 13!\n");
				printf("The room of The Evil Future...\n");
				printf("Dear Player, the goal of this room is to make it back to the present!\n");
				printf("Select a road to follow and make your way back to the present...\nRoad 1: Shadowed Alley\nRoad 2: Desolation Boulevard\nRoad 3: Abyssal Passage\nRoad 4: Echoing Ruins Route\nRoad 5: Darkened Pathway\nPlease type in the number of the Road:");
				int x = 0;
				int w = 0;
				srand(time(NULL));
				int rNum = rand() % 10;
				int levels[] = 
				{
					1, 2, 3, 4, 5, 6, 7, 8, 9, 10
				};
				scanf("%d", &x);
				while (x != 4)
				{
					if (x == 1)
					{
						printf("\nYou walked down the Shadowed Alley and came across a dysfunctional robot that warps you to a jail cell...\nPlease Try again!\n\n");
					}
					else if (x == 2)
					{
						printf("\nYou reached the Desolation Boulevard and see a hologram of a pile of money, as you walk to grab it a robot grabs you and arrests you for illegal time travel...\nPlease try again!\n\n");
					}
					else if (x == 3)
					{
						printf("\nYou reached the Abyssal Passage, you come across an AI powered time machine, it asks you to place your fingerprint in the reader, it warps you back in time to the start area...\nPlease try again!\n\n");
					}
					else if (x == 5)
					{
						printf("\nYou reached the Dark Pathway, an area with no robot, as you make your way through the pathway you see a few aliens building something and they chase you away back to the starting area.\nPlease try again!\n\n");
					}
					printf("\nYou are back to the starting area, Select a road to follow and make your way back to the present...\nRoad 1: Shadowed Alley\nRoad 2: Desolation Boulevard\nRoad 3: Abyssal Passage\nRoad 4Echoing Ruins Route\nRoad 5: Darkened Pathway\nPlease type in the number of the Road:");
					scanf("%d", &x);
				}
				FinalArea(levels[rNum]);
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

void FinalArea(int level)
{
   printf("\nYou have made it through the Echoing Ruins Route, you come across a giant Robot Guard Monster that is guarding a fully functioning time machine, as you go to approach it, the robot awakens and says: INTRUDER!!!\n\nYou are given a holographic weapon menu that will spit out a ray gun weapon...\n");
   printf("The screen spins from a few levels and then reads: 'You have received the: Level %d ray gun!'\n", level);
   printf("As you grab the weapon the giant Robot Guard tries to attack you and you use The level %d ray gun to destroy the robot!\n", level);
   printf("You make your way to the time machine, panting heavily and set the date to the day you were in front of all the rooms...\nYou made it back!\n\nROOM CLEAR!\n\n");
   return;
}















































