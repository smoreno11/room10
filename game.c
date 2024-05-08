//contributors
// Dedman

#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include <time.h>
#include <stdio.h>
#include <stdbool.h>
#include <unistd.h>

void exploreLocation(int locationChoice);

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
				srand(time(NULL));

				int choice   		  = 0;
				int galacticDate	= rand() % 3000 + 7000;
				char exploreAgain = 'y';

				printf("You choose the door 15. Welcome to the Infinite Frontier! Galactic date: %d\n", galacticDate);
				printf("\nIn the vast expanse of the cosmos, humanity's thirst for exploration knows no bounds. ");
				printf("Our story begins aboard the ISS Explorer, a state-of-the-art spacecraft embarking ");
				printf("on a daring mission to chart uncharted territories and uncover the mysteries of the universe.\n");

				printf("\nAs a member of the crew, you play a crucial role in this epic journey. ");
				printf("Your mission is to explore the Infinite Frontier, a region of space teeming with exotic worlds, ");
				printf("cosmic anomalies, and enigmatic phenomena waiting to be discovered.\n");
				printf("\nAre you ready to embark on an adventure of a lifetime? Let's begin!\n");

				while(tolower(exploreAgain) != 'n')
				{
					puts("\nChoose a location to explore:");
					puts("\t1. Unknown Planet");
					puts("\t2. Stellar Anomaly");
					puts("\t3. Rogue Asteroid Belt");
					puts("\t4. Enigmatic Black Hole");
					puts("\t5. Cosmic Mirage\n");
					puts("Enter your choice: ");
					scanf("%d", &choice);
	
					exploreLocation(choice);

					puts("\nDo you want to explore another location? (y/n):");
					scanf(" %c", &exploreAgain);
				}

				printf("Thanks %s for exploring the Infinite Frontier!\n", name);
				printf("\n");
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

/*
 * Function written by Dedman
 */
void exploreLocation(int locationChoice)
{
	const char *locationDescriptions[] = {
			"You arrive at an Unknown Planet...\n"
			"As you descend through the planet's turbulent atmosphere, you're greeted by a breathtaking landscape teeming with exotic flora and fauna.\n"
			"As you venture deeper into the planet's depths, you uncover ancient ruins hinting at a civilization long forgotten.\n"
			"You discover a lush, verdant world teeming with life. Strange creatures roam the land, and vibrant plant life thrives in the planet's rich soil.\n"
			"You also encounter a strange alien species and learn about their culture.\n"
			"After spending days with the alient species, you collect samples of the local flora and fauna for further study.\n"
			"You then return to the ISS Explorer with newfound knowledge and a sense of wonder.\n",

			"You encounter a Stellar Anomaly...\n"
			"While traversing a desolate region of space, you stumble upon a peculiar anomaly—a swirling\n"
			"vortex of cosmic energy unlike anything you've ever seen. Drawn by curiosity, you cautiously approach the anomaly, bracing yourself for the unknown.\n"
			"You encounter strange phenomena such as time loops, spatial distortions, and quantum anomalies.\n"
			"As you navigate through the Stellar Anomaly, you must rely on your wits and ingenuity to survive the unpredictable dangers.\n"
			"What awaits you on the other side is beyond your wildest imagination.\n"
			"You uncover ancient artifacts and mysterious technologies that challenge your understanding of the universe.\n"
			"After a harrowing journey through the Stellar Anomaly, you emerge with newfound knowledge and a deeper appreciation for the mysteries of the cosmos.\n"
			"You return to the ISS Explorer with valuable data and insights into the nature of cosmic anomalies, expanding humanity's understanding of the universe.\n",

			"You navigate through a Rogue Asteroid Belt...\n"
			"As you pilot the ISS Explorer through a treacherous asteroid belt, you must dodge massive space rocks hurtling towards you at breakneck speeds.\n"
			"Your reflexes are put to the test as you navigate through the chaotic debris field, narrowly avoiding collisions with rogue asteroids.\n"
			"You discover valuable resources hidden within the asteroids, including rare minerals and precious metals.\n"
			"You also encounter a group of space pirates who attempt to plunder your ship, forcing you to engage in a thrilling space battle.\n"
			"After a fierce confrontation, you emerge victorious and continue your journey through the asteroid belt.\n"
			"You uncover a hidden asteroid base filled with ancient relics and forgotten treasures, shedding light on the history of the cosmos.\n"
			"You return to the ISS Explorer with a cargo hold full of valuable resources and artifacts, ready to continue your adventures in the cosmos.\n",

			"You study an Enigmatic Black Hole...\n"
			"As you approach the event horizon of the black hole, you feel the immense gravitational pull tugging at your ship, threatening to tear it apart.\n"
			"You witness the distortion of spacetime as you venture closer to the singularity, observing the bizarre effects of the black hole's immense gravity.\n"
			"You discover a hidden pocket of spacetime within the black hole, a realm of infinite possibilities and mind-bending phenomena.\n"
			"You encounter strange entities and cosmic beings that defy comprehension, challenging your understanding of the universe.\n"
			"After a harrowing journey through the black hole, you emerge with newfound knowledge and a deeper appreciation for the mysteries of the cosmos.\n"
			"You return to the ISS Explorer with valuable data and insights into the nature of black holes, expanding humanity's understanding of the universe.\n",

			"You encounter a Cosmic Mirage...\n"
			"As you traverse the vast expanse of space, you stumble upon a cosmic mirage—a shimmering illusion that defies explanation.\n"
			"Drawn by curiosity, you venture closer to the mirage, unsure of what lies beyond the shimmering veil.\n"
			"You are enveloped by a surreal dreamscape, a realm of infinite possibilities and surreal landscapes.\n"
			"You encounter strange creatures and ethereal beings that challenge your perception of reality.\n"
			"After a surreal journey through the cosmic mirage, you awaken with a newfound sense of wonder and a deeper appreciation for the mysteries of the universe.\n"
			"You return to the ISS Explorer with memories of the cosmic mirage, forever changed by the experience.\n"
		};

	if (locationChoice < 1 || locationChoice > sizeof(locationDescriptions) / sizeof(locationDescriptions[0]))
	{
		printf("Invalid choice! Please choose a valid location to explore.\n");
		return;
	}

	printf("%s", locationDescriptions[locationChoice - 1]);
}
