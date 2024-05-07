//contributors
//

#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include <time.h>
#include <stdio.h>
#include <stdbool.h>
#include <unistd.h>

bool trap_d10();

int main(int argc, char *argv[])
{
	int choice = 0;
	char name[30] = "bob";

    // You drown after 5 failures
    int health = 5;

	srand(time(NULL));

	printf("Please enter your name: ");
	scanf("%s",name);

	printf("Hello %s welcome to the RPG Game!\n",name);
    puts("You find yourself in a dark room and you are not sure how you got here.");
    puts("As you look around you see the room has 20 doors, each labeled with a number.");
    puts("The room starts filling with water and you must choose a door to open or you will likely drown. you may quit anytime by selecting option 99.");

	while(choice != 99)
	{
        printf("Health: %d\n", health);
        if(health < 1)
        {
            choice = 98;
        }
        else
        {
            puts("What door do you choose?");
            scanf("%d",&choice);
        }


		switch(choice)
		{
			case 1:
			{
				puts("You enter room 1");
                health--;

                puts("You enter a room filled with mirrors. The reflections show two splitting paths, one is illusions.");
                puts("Do You take the left (0) or right path (1)");
                scanf("%d",&choice);
                if(choice != 0)
                {
                    puts("You have fallen on a stalactite and died.");
                    return EXIT_SUCCESS;
                }
                else
                {
                    puts("You found the exit to the mirror room.");
                }

                break;

			}
			case 2:
			{
				puts("You enter room 2");
                health--;
                puts("This room is a formerly lush garden");
				break;
			}
			case 3:
			{
				puts("You enter room 3");
                health--;
                puts(" You find a library with a book that contains hints on the safest door in the dark room");

                puts("My presence known, yet hidden away.");
                puts("I'm in your steps and in your dance,");
                puts("In cosmic spins, I take my chance.");
                puts("In silent clocks, I am mute.");

				break;
			}
			case 4:
			{
				puts("You enter room 4");
                health--;
				puts("You enter the room and you see a painting.");
                puts("Do you inspect it? (0=yes, 1=no) ");

                scanf("%d",&choice);
                if(choice == 0)
                {
                    puts("This is an enchanted painting casts a paralyzing gaze on anyone who looks at it.");
                    puts("You are now paralyzed.");
                    return EXIT_SUCCESS;
                }

                else
                {
                    puts("You leave the room.");
                }

                break;
			}
			case 5:
			{
				puts("You enter room 5");
                health--;

                bool survived = trap_d10();
                if(!survived)
                {
                    puts("You Died.");
                    return EXIT_SUCCESS;

                }
                else
                {
                    puts("You survived the trap");
                }

				break;
			}
			case 6:
			{
				puts("You enter room 6");
                health--;
				puts("You enter a room filled with sand and five ancient ruins on the walls.");
                puts("The door closes behind you and the room fills with quicksand. The runes start to glow.");

                for (int i = 0; i < 4; i++)
                {
                    puts("Which rune do you touch? (1-5)");
                    scanf("%d",&choice);
                    if(choice == 4)
                    {
                        puts("The sand empties the room and the door opens. You leave the room.");
                        break;
                    }

                    else
                    {
                        puts("That did nothing.");
                    }
                }

                break;
			}
			case 7:
			{
				puts("You enter room 7");
                health--;
				puts("");

                break;
			}
			case 8:
			{
                puts("You enter room 5");
                health--;

                bool survived = trap_d10();
                if(!survived)
                {
                    puts("You Died.");
                    return EXIT_SUCCESS;

                }
                else
                {
                    puts("You survived the trap");
                }

                break;
			}
			case 9:
			{
                puts("You enter room 5");
                health--;

                bool survived = trap_d10();
                if(!survived)
                {
                    puts("You Died.");
                    return EXIT_SUCCESS;

                }
                else
                {
                    puts("You survived the trap");
                }

                break;
			}
            case 10:
            {
                puts("You have escaped");
                return EXIT_SUCCESS;
            }

            case 98:
            {
                puts("Game Over");
                puts("You have drowned!");
                return EXIT_SUCCESS;

            }

            case 99:
            {
                puts("You decided to quit the game.");
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

bool trap_d10()
{
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

    printf("%s \n", traps[roll]);
    bool d2 = rand() % 2;
    return d2;
}















































