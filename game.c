//contributors
//

#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include <time.h>
#include <stdio.h>
#include <stdbool.h>
#include <unistd.h>

void enterToContinue();
bool fight(int choose, int strength, int agility, int intelligence);

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
				bool correct = false;
				bool living = false;
				int statPoints1 = rand() % 50;
				int statPoints2 = statPoints1;
				int choiceOfExecution = 0;
				int strength = 0;
				int agility = 0;
				int intelligence = 0;
				int stats[3] = {strength, agility, intelligence};
				char statName[3][15] = {"strength", "agility", "intelligence"};

				puts("\nBefore you step into the door, your mind flashes and you are given the amount of stat points you can invest.");
				
				while(correct == false)
				{	
					statPoints1 = statPoints2;
					for (int i = 0; i < 3; i++)
					{
						printf("You have: %d stat points left for allocation!\n", statPoints1);
						printf("How many points will you allocate to [%s]?:\n", statName[i]);
						scanf(" %d", &stats[i]);
						statPoints1 = statPoints1 - stats[i];
						if (statPoints1 < 0 || (i == 2 && statPoints1 != 0))
						{
							puts("You just can't follow directions can you? Reallocate your points correctly this time.\n");
							stats[0] = 0;
							stats[1] = 0;
							stats[2] = 0;
							i = 3;
						}
						else if (statPoints1 == 0)
						{
							correct = true;
							i = 3;
						}	
							
					}	
				}

				printf("\nGreat! So don't forget, you have %d %s points, %d %s points, and %d %s points. Try not to die!\n", stats[0], statName[0], stats[1], statName[1], stats[2], statName[2]);

				puts("\nFinally, you open the door to reveal the battered world of [Terra], ripe with cultural and political conflict,");
				puts("cancerous rocks that rain from the sky, and magical beasts that can rip countries in half.");
				enterToContinue();
				puts("The city you stepped in was steeped in fire and catastrophic proportions of bloodcurling cries. All that touched your ears was gunfire,");
				puts("explosions, and the screams of the unfortunate.");
				enterToContinue();
				puts("No one seems to be around you, and you're left to your own devices, in the middle of an apocalyptic world in explosive turmoil.");
				enterToContinue();
				puts("You realize that you're standing in the middle of an open street, skyscrapers and houses around you continue to fall apart as you think about your next move.");
				puts("What do you decide to do first?:\n");

				puts("1) Walk forward into the streets with caution.");
				puts("2) Take cover inside a nearby abandoned building.");
				puts("3) Run as fast as you can to look for someone reliable.");
				puts("4) Search for a weapon you might need in the future.");
				puts("5) Lie down and accept the cycle of life.\n");

				while (choiceOfExecution < 1 || choiceOfExecution > 5)
				{
					scanf(" %d", &choiceOfExecution);
					if (choiceOfExecution < 1 || choiceOfExecution > 5 )
					{
						puts("Stop running away from your problems, choose wisely next time....\n");
					}
				}

				strength = stats[0];
				agility = stats[1];
				intelligence = stats[2];

				living = fight(choiceOfExecution, strength, agility, intelligence);

				if(living)
				{
					puts("\nFinally, a gateway opens, its lights seeking your touch. The doorknob, although cold, feels soft and inviting, and you open the door,");
					puts("leading you back to the dark room of 55 doors....");
					enterToContinue();
				}
				else
				{
					puts("\nAlthough your body in no more in the world of Terra, you somehow feel sensation yet again. Once again, your body reanimates and you");
					puts("are back inside the dark room with 55 doors....\n");
					enterToContinue();
				}

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

bool fight(int choose, int strength, int agility, int intelligence)
{
	int liveOrDie = 0;
	bool alive = false;

	switch(choose)
	{
		case 1:
		{
			puts("\nA sudden warmth washes over your body, and as you look around you see a huge fireball soaring through the sky, aimed directly at you.");
			puts("You panic, but  decide to...\n");

			puts("1) Run as fast as you can.");
			puts("2) Embrace death.\n");

			scanf(" %d", &liveOrDie);

			if (liveOrDie == 1 && agility > 15)
			{
				puts("Your sudden burst of speed surprises even you, and you somehow tough out the burning embers as your legs carry you to safety.");
				enterToContinue();
				puts("Feeling enough energy to continue, you walk around more, gradually seeing more of the city you find yourself in.");
				enterToContinue();
				puts("After a few hours, as your legs, weary from running from the chaos, you reach safety.");
				alive = true;
				break;
			}
			else if (liveOrDie == 2 && strength > 20)
			{
				puts("You realize you're much stronger in this world than the last, and tank the fireball, only sustaining minor injuries.");
				enterToContinue();
				puts("After feeling your true strength in this world, you continue to walk around, just a little more confident.");
				enterToContinue("Pushing through the fire and the flames throughout the city, your tenacity surprises you, and you somehow reach safety.");
				alive = true;
				break;
			}
			else
			{
				puts("You can't escape the fireball, and it hits you with the heat of a thousand suns. \nIf God existed in this world, even he could not put you back together.");
			}

			break;
		}
		
		case 2:
		{
			puts("\nYou escape the open streets and hide in a dilapidated building, hoping its ruins will provide sanctuary from the chaos outside.");
			puts("Suddenly, you hear footsteps, a slight pitter patter that arouses your senses.");
			enterToContinue();
			puts("In front of you, just 10 meters ahead, a girl with silver hair and dressed in black and red, smiles and holds up what seems to be a detonator.");
			puts("You can't help but think that there's nothing she wants from you, but still she smiles as holds the detonator up, what do you do?\n");

			puts("1) Reason out with her and talk her out of blowing up the building.");
			puts("2) Take a gamble and run from her, hoping she isn't crazy enough to blow both of you up.\n");

			scanf(" %d", &liveOrDie);

			if (liveOrDie == 1 && intelligence > 30)
			{
				puts("You speak to her, trying to buy time while also gaining information. After realizing you aren't who she is looking for, she lets you go,"); 
				puts("clicking her tongue in the meanwhile.");
				enterToContinue();
				puts("After she leaves, you immediately flee from the building, realizing it's rigged with explosives, and walk further into the distance to find sanctuary.");
				enterToContinue();
				puts("You're intuition saves you, and as you create distance from the intial confrontation, you find your way to safety.");
				alive = true;
				break;
			}
			else if (liveOrDie == 2 && strength == 20 && agility == 30)
			{
				puts("As you turn your back to run away, shockwaves from explosions from every direction bombard your body. She pressed the detonator, but");
				puts("your trust in your own strength and speed don't betray you. After barely making it out of the building, you find that that silver haired");
				puts("girl is nowhere to be seen, and take your time finding someplace safer.");
				enterToContinue();
				puts("You put your newfound physical abilities to work and push through the rubble and debris scattered around the city, exhaustion soon setting in.");
				enterToContinue();
				puts("As you carry your body forward, not knowing exactly where you're going, you somehow find safety.");
				alive = true;
				break;
			}
			else
			{
				puts("The moment you turn your back to run away, your ears catch shockwaves from every direction, the pillars of the building you stand in,");
				puts("magnificently to the symphony of explosions. The girl stands there, laughing, before she jumps away like a superhuman, leaving you to");
				puts("die a crispy death.");
			}

			break;

		}
		
		case 3:
		{
			puts("\nYou take a moment to scan your surroundings, but then run as fast as you can in one direction, surely this city you're in has some reliable");
			puts("people. Still, you can't rest without finding safety, and finally after what seems like hours of running in circles, you come across a black figure.");
			enterToContinue();
			puts("As you get closer, you realize that it's a man in a black hoodie, and there are other people behind him, all gesturing to each other.");
			puts("However, the moment they see you, they immediately bring up their guns, point it directly at you, and question you, cautious of your intentions.");
			puts("'Are you with the Reunion Movement?'\n");

			puts("1) Tell the truth and hope they won't hurt you.");
			puts("2) Lie and act as if you are a part of the movement.\n");

			scanf(" %d", &liveOrDie);

			if (liveOrDie == 1)
			{
				puts("Hearing you speak your peace, they retract their guns. Knowing you aren't a part of the Reunion Movement that started the break out of Infected");
				puts("Militia, they decide to guide you through the city to safety. Their group name, [Rhodes Island], puts you at ease.");
				enterToContinue();
				puts("Their leaders speak with conviction and hold their heads high. Even in this god-forsaken world, they look to the sky with a childlike innocence");
				puts("that belies their true strength.");
				enterToContinue();
				puts("As you follow them through the streets, one of their leaders, the Doctor, turns around to speak to you directly — his hooded figure clad in black makes your stomach turn.");
				puts("'You are not from this world. I bid you farewell as you return to where you came from....");
				enterToContinue();
				puts("Suddenly, he points to the right, his hand leading the way to safety.");
				alive = true;
				break;
			}
			else if (liveOrDie == 2 && intelligence > 10)
			{
				puts("Without another word, they give the order and a woman wielding a huge chainsaw jumps from behind, soaring through the sky and landing on your back.");
				puts("It seems that the Reunion are not their friends, but seeing that they didn't immediately shoot you, you decide to gamble again and finally tell the truth.");
				enterToContinue();
				puts("Although they don't doubt your words, they also make it known that further lies will only end up all the worse for you. Still, they decide you aren't");
				puts("a threat and guide you to safety, their group name, [Rhodes Island], giving you a certain warmth.");
				enterToContinue();
				puts("After a tense meeting, their two leaders, Amiya and the Doctor, lead you to an alleyway, the safety you so desperately wanted.");
				alive = true;
				break;
			}
			else
			{
				puts("Seeing as they don't take kindly to you, you decide to run away, but a huge behemoth of a man blocks your way. His body, shaped by countless battles,");
				puts("puts the fear of God into you, and you try to steal a gun off the floor.");
				puts("'Ace, stop playing around.'");
				puts("You instantly fall to the floor, not knowing what happened, but only seeing red....");
			}

			break;


		}

		case 4:
		{
			puts("You find a gun, worn down and all the more alien to you than the world you were in. Still, it can't be a bad thing can it?");
			enterToContinue();
			puts("Walking around the area, you find a group of people with horns on their heads, bathing in the fire around the city. It seems like they");
			puts("reveled in the destruction, and you think to yourself, maybe they are the source of this chaos.");
			enterToContinue();
			puts("Seeing the gun in your hands and the broken state of the city, you think about your next move.");
			puts("Will you rise to the challenge and be the spear that illuminates the land, or will you cower and fend only for yourself?\n");

			puts("1) Walk slowly and carefully, and distance yourself from the group.");
			puts("2) Take justice along the hand and confront the evildoers yourself.\n");

			scanf(" %d", &liveOrDie);

			if (liveOrDie == 1 && agility > 15 && intelligence > 15)
			{
				puts("Knowing the situation is way out of your control, you decide to try to live another day. Only a fool would challenge");
				puts("those psychopaths. Weaving in and out of the buildings, you escape their gaze and finally make it out safely.");
				alive = true;
				break;
			}
			else
			{
				puts("The moment they see you, your body begins to burn hot, and you start to run away as if the sun was chasing you.");
				enterToContinue();
				puts("Your legs stop working, and you trip, your back thumping against the floor. All you can see in front of you is a single woman.");
				puts("Wrapped in red and black, her robes disguised a long sword, the flames around her englufing her weapon and her entire being.");
				enterToContinue();
				puts("You can feel her pitying you as her eyes stare daggers into your soul, her glare sharp with a ferocity unmatched.");
				puts("Your body burns to a crisp as your ashes fall to the wind, carrying it as far into the sky as it could, not a single memory of yours etched into the world.");
			}

			break;
		}

		case 5:
		{
			puts("You lie down, the cold hard ground making itself a bed for your soul. Even though the sky around is lit in fire and bathed in the cries of the");
			puts("unfortunate, the chaos suits you. You wouldn't mind dying in a place like this.");
			enterToContinue();
			
			break;
		}
	}

	return alive;
}

void enterToContinue()
{	
	char discard;
	char input;

	while((discard = getchar()) != EOF && discard != '\n'){}

	while(1)
	{
		printf("Press enter to continue.\n");
		input = getchar();
		if (input == '\n')
		{	
			break;
		}
	}
}
















































