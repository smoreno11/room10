//contributors
// Paul JR Ngwoke

#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include <time.h>
#include <stdio.h>
#include <stdbool.h>
#include <unistd.h>

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
				printf(">> Entering the Lair of the Lizardman <<\n\nYou stand before a formidable foe - a Lizardman. At your feet lies a sword, glinting ominously in the dim light. Do you choose to face the creature head-on, or retreat and seek refuge elsewhere?\n\n");

                printf("Choose your action:\n1. Fight\n2. Run Away\n\n");
                int actionChoice;
                scanf("%d", &actionChoice);

                if (actionChoice == 1)
                {
                    printf("\nYou pick up the sword, bracing yourself for the impending battle.\n\n");
                }
                else if (actionChoice == 2)
                {
                    printf("\nYou turn to flee, hoping to escape the impending danger.\n\n");
                    printf("As you retreat, you stumble and fall into a pool of murky water from the previous room. The suffocating depths claim you, and darkness consumes your vision. Game Over.\n\n");
                    break;
                }
                else
                {
                    printf("\nInvalid choice. Your hesitation killed you.\n\n");
                    break;
                }

                int playerRoll, lizardRoll;
                printf("Press ENTER to roll the dice and determine your fate: ");
                getchar();
                getchar();

                playerRoll = (rand() % 6) + 1;
                lizardRoll = (rand() % 6) + 1;

                printf("\nYour Roll: %i\nLizardman Roll: %i\n", playerRoll, lizardRoll);

                if (playerRoll == lizardRoll)
                {
                    printf("Both parties have rolled equal values. Try Again.\n\n");
                }
                else if (lizardRoll > playerRoll)
                {
                    printf("The Lizardman strikes you down with a swift blow. Game Over.\n\n");
                    break;
                }
                else
                {
                    printf("You have slain the Lizardman! You may proceed!\n\n");

                   
                    char *words[2] = {"Mango", "Garrett Poppe"};
                    char guessWord[20], wrongGuesses[6], secretWord[20], input[20];
                    int maxTries, wrongCount = 0, correctCount = 0, difficulty, i;
                    char guess;

                    printf("After passing through the door of riddles, you stand in a room with a tall centaur statue that challenges you to a guessing game.\n");
                    printf("If you win, you can continue your journey; if you lose, you perish. Do you choose the easy or hard difficulty? The stakes are high, and your decision could mean life or death.\n\n");

                 
                    printf("Select difficulty level (1 for Easy, 2 for Hard): ");
                    scanf("%d", &difficulty);
                    getchar();

                   
                    if (difficulty == 2)
                    {
                        strcpy(secretWord, words[1]);
                        maxTries = 2;
                        printf("Hint: The creator of this dungeon.\n");
                    }
                    else
                    {
                        strcpy(secretWord, words[0]);
                        maxTries = 5;
                        printf("Hint: A fruit.\n");
                    }

                    int wordLength = strlen(secretWord);

                   
                    for (i = 0; i < wordLength; i++)
                    {
                        guessWord[i] = (secretWord[i] == ' ') ? ' ' : '_';
                    }
                    guessWord[wordLength] = '\0';

                 
                    while (wrongCount < maxTries && correctCount < wordLength)
                    {
                        printf("Current word: %s\n", guessWord);
                        printf("Guess a letter or the whole word: ");
                        fgets(input, sizeof(input), stdin);
                        input[strcspn(input, "\n")] = 0;  

                        if (strlen(input) == 1)
                        {
                            guess = input[0];
                            int found = 0;
                            for (i = 0; i < wordLength; i++)
                            {
                                if (tolower(secretWord[i]) == tolower(guess) && guessWord[i] == '_')
                                {
                                    guessWord[i] = secretWord[i];
                                    correctCount++;
                                    found = 1;
                                }
                            }

                            if (!found)
                            {
                                wrongGuesses[wrongCount++] = guess;
                                wrongGuesses[wrongCount] = '\0';  
                                printf("Wrong guesses: %s\n", wrongGuesses);
                            }
                        }
                        else if (strcasecmp(input, secretWord) == 0)
                        {
                            strcpy(guessWord, secretWord);
                            correctCount = wordLength;
                            break;
                        }
                        else
                        {
                            printf("Incorrect word guess.\n");
                            wrongGuesses[wrongCount++] = '#';
                            wrongGuesses[wrongCount] = '\0';
                        }

                        printf("You have %d tries left.\n", maxTries - wrongCount);
                    }

                    if (correctCount == wordLength)
                    {
                        printf("Congratulations! You guessed the word: %s\n", secretWord);
                        printf("\nA bright blue portal appears, offering a glimmer of escape from the dungeon nightmare. You step into it, hoping it leads to freedom.");
                       
               
                        enum coin { HEADS, TAILS };
                        int userChoice;
                        int headsCount = 0;
                        int tailsCount = 0;

                        printf("Emerging from the portal's embrace, you find yourself in a dilemma, faced with two diverging paths. At the center of this decision looms a mischievous imp, its grin a sinister promise of guidance if you're willing to wager your fate. With a flicker of amusement in its eyes, the imp offers to reveal the correct path, but only if you dare to engage in a game of chance—a simple coin flip to determine your next move. This imp is unfortunately your only hope so you have to play his game.\n\n");
                        printf("What would you choose?\n(5) Press 5 for \"HEADS\"\n(6) Press 6 for \"TAILS\"\n(7) *Message to Player: Press 7 for a guaranteed win to continue the story*\n");
                        scanf("%d", &userChoice);
   
                        if (userChoice != 5 && userChoice != 6 && userChoice != 7)
                        {
                            printf("Invalid choice. Please choose 5 for \"HEADS\", 6 for \"TAILS\", or 7 for a guaranteed win to continue the story.\n");
                            return 1;
                        }
   
                        if (userChoice == 7)
                        {
                            printf("You chose the special option. You won and the story continues!\n");
                            printf("\nYour victory in the coin flip game wipes the imp's grin, replacing it with a disheartened frown as it begrudgingly points towards the correct path, to the right. With newfound confidence, you stride purposefully in that direction, trusting your instinct to guide you through the crossroads.");
                        }
                        else
                        {
                            for (int i = 0; i < 3; i++)
                            {
                                if (rand() % 2 == HEADS)
                                {
                                    printf("HEADS\n");
                                    headsCount++;
                                }
                                else
                                {
                                    printf("TAILS\n");
                                    tailsCount++;
                                }
                            }
   
                            printf("Number of HEADS: %d\n", headsCount);
                            printf("Number of TAILS: %d\n", tailsCount);
   
                            if ((userChoice == 5 && headsCount > tailsCount) || (userChoice == 6 && tailsCount > headsCount))
                            {
                                printf("\nCongratulations! You win!\n");
                                printf("Your victory in the coin flip game wipes off the imp's grin, replacing it with a disheartened frown as it begrudgingly points towards the correct path, to the right. With newfound confidence, you stride purposefully in that direction, trusting your instinct to guide you through the crossroads.");
                            }
                            else if (headsCount == tailsCount)
                            {
                                printf("It's a tie!\n");
                            }
                            else
                            {
                                printf("\nYou have lost.\n");
                                printf("Your defeat in the coin flip game ignites the imp's grin into a sinister, manic laughter, his joy tangible as he claims your soul as nourishment. With a shiver, you watch helplessly as your essence is consumed, lost to the insatiable hunger of the imp's malevolent appetite. Game Over.\n\n");
                                break;
                            }
                        }
                    }
                    else
                    {
                        printf("\nYOU ARE DEAD.\n");
                        printf("\nThe statue's stony facade cracks with an unsettling creak, before abruptly springing to life. With a swift and merciless strike, its stone spear descends upon your head, sealing your fate in a single, fatal blow. Game Over.\n\n");
                        break;
                    }
                   
                    char pathChoice[10];
                    int finalChoice;
                   
                    printf("\n\nAs you delve deeper into your path, you come across another crossroad. To your left, a staircase spirals upwards, illuminated by an eerie glow that seems to beckon you forward, making you believe that this is the way out. On the other hand, to your right, a narrow hallway stretches into the distance, illuminated by the flickering blue light of torches. As you contemplate your options, you notice that the narrow hallway seems endless, and you cannot see anything deeper but a void of the color blue, adding an unsettling mystery to its allure. (Press Enter to Continue).");
                    getchar();
                   
                    printf("\nThis is the final stretch! Which path do you want to take?\nType 'Light' for the staircase or 'Dark' for the narrow hallway: ");
                    scanf("%s", pathChoice);
                   
                    if (strcmp(pathChoice, "Light") == 0)
                    {
                        finalChoice = 9;
                    }
                    else if (strcmp(pathChoice, "Dark") == 0)
                    {
                        finalChoice = 10;
                    }
                    else
                    {
                        printf("Invalid choice! Please enter either 'Light' or 'Dark'.\n");
                        return 1;
                    }
                   
                    switch (finalChoice)
                    {
                        case 9:
                            printf("\n> You have chosen the Light option. <\n\nFueled with determination, you quickly climbed to the top of the stairs. What awaits you was not freedom but a grotesque sight awaits you: a monstrous creature with a single glowing white eyeball, its wings unfurled menacingly.\n\n");
                           
                            printf("The creature's gaze locks onto you, and before you can react, a searing pain pierces your mind as if a thousand needles were probing your thoughts. Your senses reel as blood begins to trickle from your eyes, nose, and mouth, and with a sickening realization, that your journey finally come to an end. Moments later, your head explodes from the pain. Game Over.\n\n");
                            printf("\n\n >> END <<\n\n\n");
                            break;
                       
                        case 10:
                            printf("\n> You have chosen the Dark option. <\n\nWith an unwavering determination not to be deceived by false promises, you choose the blue torchlit hallway. As you cautiously tread forward, you remain vigilant for any signs of danger, wary of falling victim to another trap.\n\n");
                           
                            printf("With each step, the endless hallway seems to stretch on indefinitely. As you cautiously make your way down the hallway, the oppressive silence is broken by the sound of a click beneath your foot. Before you can react, a trap door swings open beneath you, sending you plummeting into a dimly lit room.\n\nAt the sudden realization and hopelessness, you have moved right back to square one.");
                            printf("\n\n >> END <<\n\n\n");
                            break;
                       
                        default:
                            printf("Invalid choice! Please enter either 9 or 10.\n");
                            return 1;
                    }
                }
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
