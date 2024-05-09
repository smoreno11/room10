//contributors

//Dom I.

//Elias Dawarpana

//Patrick Polanco


#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include <time.h>
#include <stdio.h>
#include <stdbool.h>
#include <unistd.h>
#include <math.h>

void coinFlip();
void JanKenPon();
void drawStraws();
void numberGuess();
void blackJack();
int cardPull();
void rollTheDice_Highest();
void rollTheDice_Race();

void FinalArea(int level);
bool trap_d10();

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
                bool survived = trap_d10();
                if(!survived)
                {
                    puts("You Died.");
                    return EXIT_SUCCESS;

                }
                else
                {
                    puts("You escaped the trap unharmed.");
                }

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
				srand(time(NULL));
				int game = 0;
				
				printf("You and your party meet a silent apparition, and through a voice in the room, gestures to play a game.\n");
				printf("Which game do you play to beat the figure? [Type the number of the game you want to play]\n");
				printf("-------------------\n");
				printf("{1} Coin Flip\n");
				printf("{2} Rock Paper Scissors\n");
				printf("{3} Draw straws\n");
				printf("{4} Guess the number\n");
				printf("{5} Black Jack\n");
				printf("{6} Roll the dice\n");
				
				scanf("%d", &game);
				
				while (game < 1 || game > 7) {
					
					if (game < 1 || game > 7){
						printf("Game number out of range. Enter another number.\n");
						scanf("%d", &game);
					}
					
				}

				printf("\n");

				if (game == 1) {
					coinFlip();
				}
				else if (game == 2) {
					JanKenPon();
				}
				else if (game == 3) {
					drawStraws();
				}
				else if (game == 4){
					numberGuess();
				}
				else if (game == 5){
					blackJack();
				}
				else if (game == 6){
					int diceGame = 0;
					printf("Which type of dice game do you wish to play?\n");
					printf("Enter {1} for 'Highest Number'\n");
					printf("Enter a different one for 'Reach the Number'\n");
					scanf("%d", &diceGame);

					if (diceGame == 1) {
						rollTheDice_Highest();
					}
					else {
						rollTheDice_Race();
					}
				}
				printf("\n");
				printf("The appartion begins laughing, and you brace fearing what trick is next. \n");
				printf("The laughing turns out to be a ruse of amusement; a sound of delight. \n");
				printf("It waves, thanking you for taking the time out of your way to play a game with it. \n");
				printf("As you leave, it whines, and begins to follow you out of the room. \n");
				printf("Your party is now plus one! Who knows what other fateful encounters await! \n");
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

<<<<<<< HEAD
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
=======
void FinalArea(int level)
{
   printf("\nYou have made it through the Echoing Ruins Route, you come across a giant Robot Guard Monster that is guarding a fully functioning time machine, as you go to approach it, the robot awakens and says: INTRUDER!!!\n\nYou are given a holographic weapon menu that will spit out a ray gun weapon...\n");
   printf("The screen spins from a few levels and then reads: 'You have received the: Level %d ray gun!'\n", level);
   printf("As you grab the weapon the giant Robot Guard tries to attack you and you use The level %d ray gun to destroy the robot!\n", level);
   printf("You make your way to the time machine, panting heavily and set the date to the day you were in front of all the rooms...\nYou made it back!\n\nROOM CLEAR!\n\n");
   return;
>>>>>>> 780a840558f8a95c0867fcb6c3814bf41db74d22
}
































void coinFlip() {
  int call = 0;

  printf("You know how this one goes: call heads{1} or tails{2}: ");
  scanf("%d", &call);
    
  if (call == 1 || call == 2) {
    printf("The coin flips!\n");
    
  }
  else {
    printf("You call an invalid number, so your opponent calls instead!\n");
    call = (rand() % 2) + 1;
    
    if (call == 1){
      printf("Your opponent calls tails!\n");
    }
    else {
      printf("Your opponent calls heads!\n");
    }
  }

    int coin = (rand() % 2) + 1;

  if (coin == 1 && call == 1) {
    printf("It's heads! Right on the dime!\n");
  }
  else if (coin == 1 && call == 2) {
    printf("It's heads. Maybe call better shots for a change.\n");
  }
  else if (coin == 2 && call == 1) {
    printf("It's tails. Can't make cents out of it? Too bad!\n");
  }
  else if (coin == 2 && call == 2) {
    printf("It's tails! You're cool as mint!\n");
  }
  
}
void JanKenPon() {
  int rps1 = 0;
  
  printf("Roshambeau! Call Rock{1} Paper{2} or Scissors{3}: \n");
  scanf("%d", &rps1);

  while (rps1 < 1 || rps1 > 3) {
    printf("You can't call 'Laser Gun.' Pick a valid option. \n");
    scanf("%d", &rps1);
  }

  int rps2 = (rand() % 3) + 1;

  if (rps1 == 1) {
    printf("You throw out Rock, ");

    if (rps2 == 1) {
      printf("but so does your opponent! Maybe make it up with a Fist-Bump? \n");
    }
    if (rps2 == 2) {
      printf("but your opponent throws Paper! It's got you covered! \n");
    }
    if (rps2 == 3) {
      printf("and destroy your opponent's Scissors! What a smashing good time! \n");
    }
  }
  else if (rps1 == 2) {
    printf("You throw out Paper, ");

    if (rps2 == 1) {
      printf("and cover your opponent's rock! Your foe really took that one for granite! \n");
    }
    if (rps2 == 2) {
      printf("but so does your opponent! No one's write, so it's a draw! \n");
    }
    if (rps2 == 3) {
      printf("but it's cut by Scissors! How tear-able! \n");
    }
  }
  else if (rps1 == 3) {
    printf("You throw out Scissors, ");

    if (rps2 == 1) {
      printf("but it's crushed by a Rock! Not a very sharp idea. \n");
    }
    if (rps2 == 2) {
      printf("and you slash your opponent's Paper! Now you're a cut above! \n");
    }
    if (rps2 == 3) {
      printf("but so does your opponent! Lesson learned: don't run with Scissors. \n");
    }
    
  }
  
  if (rps1 == rps2) {
    printf("Try again since it's a tie? \n");
    printf("[Enter {0} to try again] \n");
    printf("[Type any other number to forfit] \n");
    scanf("%d", &rps1);

    if (rps1 == 0) {
      printf("\n");
      JanKenPon();
    }
  }
  
}
void drawStraws() {
  
  int strawSet = 0;
  int youStraw = 0;
  int foeStraw = 0;

  printf("Your traveling companion friend comes out acting as a referee, and takes out 3 straws.\n");
  printf("From left to right there are straws labled 1-3.\n");
  printf("Each straw has a unique length. Pick the longest straw to win.\n");

  printf("Pick a numbered straw from 1-3: ");
  scanf("%d", &youStraw);
  printf("\n");

  while (youStraw < 1 || youStraw > 3) {
    printf("That straw is in Nowhere Land, pick a valid straw: ");
    scanf("%d", &youStraw);
    printf("\n");
  }

  foeStraw = (rand() % 2) + 1;

  while (youStraw == foeStraw) {
    foeStraw = (rand() % 2) + 1;
  }

  printf("|You: %d| |Foe: %d|\n", youStraw, foeStraw);

  youStraw -= 1;
  foeStraw -= 1;

  printf("The lengths of the straws are now revealed: ");

  strawSet = (rand() % 6) + 1;
  
  int straws[] = {0, 0, 0};
  
  if (strawSet == 1) {
    straws[0] = 1;
    straws[1] = 2;
    straws[2] = 3;
  }
  else if (strawSet == 2) {
    straws[0] = 2;
    straws[1] = 1;
    straws[2] = 3;
  }
  else if (strawSet == 3) {
    straws[0] = 2;
    straws[1] = 3;
    straws[2] = 1;
  }
  else if (strawSet == 4) {
    straws[0] = 1;
    straws[1] = 3;
    straws[2] = 2;
  }
  else if (strawSet == 5) {
    straws[0] = 3;
    straws[1] = 1;
    straws[2] = 2;
  }
  else {
    straws[0] = 3;
    straws[1] = 2;
    straws[2] = 1;
  }
  
  printf("[%d] [%d] [%d]", straws[0], straws[1], straws[2]);
  printf("\n");

  int s1 = straws[youStraw];
  int s2 = straws[foeStraw];

  printf("|You: %d| |Foe: %d|\n", s1, s2);
  printf("\n");

  if (s1 > s2) {
    printf("You got the longer straw! What victory drink would work best for it?\n");
  }
  else {
    printf("The last straw, you've gotten. Disappointed, you are?\n");
  }
  
}
void numberGuess() {
  int targetNo = rand() % 10;
  int yourGuess = -1;
  int foeGuess = -1;
  
  printf("Your traveling companion friend comes out acting as a referee and picks a number from 0-9. Closest number wins. \n");
  printf("Write your number down, your opponent will do the same: ");
  scanf("%d", &yourGuess);

  do {
    foeGuess = rand() % 10;
  } while (foeGuess == yourGuess);

  printf("The numbers are then revealed: ");
  printf("|You = %d| |Foe = %d| |Target = %d|\n", yourGuess, foeGuess, targetNo);

  if (abs(yourGuess - targetNo) < abs(foeGuess - targetNo)) {
    printf("Your guess is ");

    if (yourGuess == targetNo) {
      printf("the same as the target! Spot on! \n");
    }
    else {
      printf("closer! Nice forsight! \n");
    }
    
  }
  else if (abs(yourGuess - targetNo) > abs(foeGuess - targetNo)) {
    printf("Your opponent");
    
    if (foeGuess == targetNo) {
      printf(" guessed the number! That's gotta hurt! \n");
    }
    else {
      printf("'s guess is closer. That sucks. \n");
    }
    
  }
  else {
    printf("Both guesses are equally close, the game restarts. \n");
    printf("\n");
    numberGuess();
  }
  
}
void blackJack() {

  int youTotal = 0;
  int foeTotal = 0;
  bool youStop = false;
  bool foeStop = false;
  
  printf("You will first be given two cards dealt in front of you. \n");
  printf("Through a series of Yes or No, the first one to 21 wins. \n");
  printf("But DO NOT go over 21, or it's a bust. \n");
  printf("Aces can be 1 or 11, and cannot appear in the starting hand.\n");
  printf("\n");

  printf("Your first two cards is are: ");

  for (int i = 0; i < 2; i++) {
    youTotal += cardPull(0);
    printf(" ");
  }

  printf("= %d\n", youTotal);
  
  printf("Your foe's first two cards is are: ");

  for (int i = 0; i < 2; i++) {
    foeTotal += cardPull(0);
    printf(" ");
  }

  printf("= %d\n", foeTotal);
  
  int hit = 0;

  while ((youTotal < 21 && foeTotal < 21)) {

    if (youStop == false) {
      printf("\nDraw another card? Type '1' for yes, or another number to stop: ");
      scanf("%d", &hit);
    }
    
    if (hit == 1) {
      printf("You draw a ");
      youTotal += cardPull(1);
      printf(" for a total of %d", youTotal);
      printf("\n");
    }
    else {
      printf("You stop at %d", youTotal);
      printf("\n");
      youStop = true;
    }
    
    if (foeTotal < 17 && foeStop == false) {
      printf("Your foe draws a ");
      foeTotal += cardPull(0);
      printf(" for a total of %d", foeTotal);
      printf("\n");
    }
    else {
      printf("Your foe stops at %d", foeTotal);
      printf("\n");
      foeStop = true;
    }

    if (youStop == true && foeStop == true) {
      break;
    }
    
  }

  printf("\n");

  if (youTotal > 21 && foeTotal > 21) {
    printf("Double bust! Shameful.\n");
  }
  else if (foeTotal > 21) {
    printf("You know who to call, your foe's been busted!\n");
  }
  else if (youTotal > 21) {
    printf("You bust! Your foe triumphs!\n");
  }
  else {
    if (abs(21 - youTotal) < abs(21 - foeTotal)) {
      printf("You win! What a great deal!\n");
    }
    else if (abs(21 - youTotal) > abs(21 - foeTotal)) {
      printf("You lose. You were not well suited for this.\n");
    }
    else {
      printf("It's a draw! A luck of the draw!\n");
    }
  }
  
}
int cardPull(int ace) {
  int cardStack1[] = {2, 3, 4, 5, 6, 7, 8, 9, 10};
  char cardStack2[] = {'J', 'K', 'Q', 'A'};
  
  int pull = 0;
  int pullIndex = 0;
  int chance = rand() % 13;

  if (chance < 9) {
    pullIndex = rand() % 9;
    printf("%d", cardStack1[pullIndex]);
    pull = cardStack1[pullIndex];
  }
  else {
    
    if (ace == 0) {
      pullIndex = rand() % 3;
      printf("%c", cardStack2[pullIndex]);
      return 10;
    }
    
    else {
      pullIndex = rand() % 4;

      if (pullIndex == 3) {
        printf("Ace, (Type 1 or 11 for the value) ");
        scanf("%d", &pull);

        if (pull == 1) {
          return 1;
        }
        else if (pull == 11) {
          return 11;
        }
        else {
          printf("(Invalid, defaulting to 1)");
          return 1;
        }
      }
      else {
        printf("%c", cardStack2[pullIndex]);
        return 10;
      }
      
    }
  }
  return pull;
}
void rollTheDice_Highest() {
  int p1 = 0;
  int p2 = 0;

  int diceOneTwelve[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12};
  int diceFourEight[] = {4, 5, 6, 7, 8};

  printf("\n");
  printf("This is a roll the dice game, but with a catch: \n");
  printf("You can either pick a 1-12 dice block \n");
  printf("OR you can pick a 4-8 dice block.\n");
  printf("Both players are allowed to pick the same dice block.\n");
  printf("You must roll the highest number to win. \n");
  printf("\n");
  printf("Do you pick the 1-12 dice {1} or the 4-8 dice {2}?\n");
  scanf("%d", &p1);

  p2 = (rand() % 2) + 1;

  if (p1 == 1) {
    printf("You roll the 1-12 dice block.\n");
    p1 = diceOneTwelve[rand() % 12];
    printf("The number is %d\n", p1);
  }
  else if (p1 == 2) {
    printf("You roll the 4-8 dice block.\n");
    p1 = diceFourEight[(rand() % 5)];
    printf("The number is %d\n", p1);
  }

  if (p2 == 1) {
    printf("Your foe rolls the 1-12 dice block.\n");
    do {
      p2 = diceOneTwelve[rand() % 12];
    } while(p1 == p2);
    printf("The number is %d\n", p2);
  }
  else if (p2 == 2) {
    printf("Your foe rolls 4-8 dice block.\n");
    do {
      p2 = diceFourEight[(rand() % 5)];
    } while(p1 == p2);
    printf("The number is %d\n", p2);
  }

  if (p1 > p2) {
    printf("You strike the higher number! You're on a roll! \n");
  }
  else {
    printf("The die is cast, and it gives you the losing stink-eye.\n");
  }
  
}
void rollTheDice_Race(){
  int p1 = 0;
  int p2 = 0;
  int p1Rolls = 0;
  int p2Rolls = 0;
  int p1Tally = 0;
  int p2Tally = 0;
  int targetRoll = (rand() % 20) + 31;

  int diceOneTwelve[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12};
  int diceFourEight[] = {4, 5, 6, 7, 8};
  
  printf("\n");
  printf("This is a roll the dice game, but with a catch: \n");
  printf("You can either pick a 1-12 dice block \n");
  printf("OR you can pick a 4-8 dice block.\n");
  printf("Both players are allowed to pick the same dice block.\n");
  printf("You must reach %d with the fewest rolls to win. \n", targetRoll);
  printf("OR if both players go over, the closest total to %d wins. \n", targetRoll);
  printf("\n");
  printf("Do you pick the 1-12 dice {1} or the 4-8 dice {2}?\n");
  scanf("%d", &p1);

  p2 = (rand() % 2) + 1;

  if (p1 == 1) {
    printf("You begin to roll the 1-12 dice block.\n");
    printf("The numbers are: ");
    while (p1Tally < targetRoll) {
      p1 = diceOneTwelve[rand() % 12];
      p1Rolls += 1;
      p1Tally += p1;
      printf(" %d ", p1);
    } 
  }
  else if (p1 == 2) {
    printf("You begin to roll the 4-8 dice block.\n");
    printf("The numbers are: ");
    while (p1Tally < targetRoll) {
      p1 = diceFourEight[(rand() % 5)];
      p1Rolls += 1;
      p1Tally += p1;
      printf(" %d ", p1);
    } 
  }
  
  printf("= %d (%d Rolls)", p1Tally, p1Rolls);
  printf("\n");

  if (p2 == 1) {
    printf("Your foe begins to roll the 1-12 dice block.\n");
    printf("The numbers are: ");
    while (p2Tally < targetRoll) {
      p2 = diceOneTwelve[rand() % 12];
      p2Rolls += 1;
      p2Tally += p2;
      printf(" %d ", p2);
    }  
  }
  else if (p2 == 2) {
    printf("Your foe begins to roll the 4-8 dice block.\n");
    printf("The numbers are:");
    while (p2Tally < targetRoll) {
      p2 = diceFourEight[(rand() % 5)];
      p2Rolls += 1;
      p2Tally += p2;
      printf(" %d ", p2);
    }  
  }

  printf("= %d (%d Rolls)", p2Tally, p2Rolls);
  printf("\n");

  if (p1Rolls < p2Rolls) {
    printf("You rolled less times than your opponent! What a feat!\n");
  }
  else if (p1Rolls > p2Rolls) {
    printf("You have been out-cast by your opponent's dice. What a pity!\n");
  }
  else {
    printf("The amount of rolls are the same, closest tally to the target wins...\n");
    if (abs(p1Tally - targetRoll) > abs(p2Tally - targetRoll)) {
      printf("You lose the tie-breaker!\n");
    }
    else if (abs(p1Tally - targetRoll) < abs(p2Tally - targetRoll)) {
      printf("You win the tie-breaker!\n");
    }
    else {
      printf("Both of you win the tie breaker! With odds like that, there's no need for a redo!\n");
    }
    
  }
  
}

bool trap_d10()
{
    // Rolls the array for a trap
    int roll = rand() % 10 + 1;

    char *traps[] =
            {
                    "A series of hidden blades swing down from the ceiling when you crossed a tripwire.",
                    "A tripwire triggers a barrage of darts shooting from the walls.",
                    "A weighted net drops from above, aiming to entangle and immobilize its victims.",
                    "A pressure plates on the floor activate a volley of arrows shooting from hidden wall compartments.",
                    "A disguised pit trap opens beneath you, with a false bottom concealing a second, deeper pit.",
                    "A mechanical claw trap grabs at you, attempting to pull you into a spiked pit.",
                    "A floor tile that, when stepped on, triggers a scything blade to sweep across the corridor.",
                    "A heavy stone block drops from the ceiling when you stepped on a floor tile.",
                    "An illusory floor hides a portal to a pocket dimension filled with toxic gas.",
                    "A spring-loaded trapdoor flips you into a chute lined with razor-sharp edges.",
                    "A deceptive doorway rigged with a guillotine blade that drops when the door is opened."
            };

    // Prints the rolled trap
    printf("%s \n", traps[roll]);

    // Generates a boolean for weather or not the player fell in a trap
    bool d2 = rand() % 2;
    return d2;
}













