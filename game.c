//contributors
//

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
				        srand(time(NULL));
        //INFINITE HALLWAY
        puts("\nROOM 31 SELECTED\n");
        //alz is user input
        int alz = 0;
        //alx is fatigue counter
        int alx = 0;
        //aly is condition of closet door
        int aly = 0;
        //alr is the choice for searching the room
        int alr = rand() % 5 + 1;
        //alc is the condition of the crowbar
        int alc = 0;
        puts("NOTICE: Beyond this point, please use the Enter key to continue the story.");
        while (getchar() != '\n');
        printf("\nYour eyes lock onto the door marked with the number 31 as water continues to flood the room around you, your hands grasp the cold and ominous knob. You turn the handle and yank the door open.\n");
        while (getchar() != '\n');
        printf("On the other side of the door a blinding bright flash of light hits your eyes and without thinking you brazenly step through the door realize you are in a closet.\n");
        while (getchar() != '\n');
        printf("You give a quick look around the room and realize the door behind you is now gone, it seems you can only go forward.\n");
        while (getchar() != '\n');
        printf("Your heart pulses as you realize you might be in more danger than the last room...\n");
        while (getchar() != '\n');
        printf("Enter a number to make a choice: \n1: Conquer your fear, kick open the door! \n2: Gently open the door and peek into the next room.\n3: Observe the closet closely.\n");
        scanf("%d", &alz);
        while (alz < 1 || alz > 3) {
            printf("You decide to stare vacantly at the door, several moments pass and you realize you only have a few options. \n");
            while(getchar() != '\n');
          printf("1: Conquer your fear, kick open the door! \n2: Gently open the door and peek into the next room.\n3: Observe the closet closely.\n");
            scanf("%d", &alz);
        }
        printf("\n");
        while (getchar() != '\n');
        switch(alz) {
            case 1:
                printf("You violently kick the door open, it breaks the latch on the door, making it now impossible to close, you walk into the hallway and have a look around.\n");
                alx += 2;
                aly += 1;
                while (getchar() != '\n');
                break;
            case 2:
                printf("You slowly peek through the door, and realize it's a hallway, you decide to have a look around...\n");
                alx += 1;
                while (getchar() != '\n');
                break;
            case 3:
                printf("You decide to closely observe the closet and search meticulously...");
              alx += 3;
                if (alr == 1) {
                  printf(" unfortunately you find nothing. The closet is filled with trash, you decided you had enough and kick open the door into the hallway and have a look around.\n");
                aly += 1;
              } else if (alr == 2) {
                  printf(" you find only a granola bar, you are hungry so you decide to eat it. After having a snack, you decided you had enough and kick open the door into the hallway and have a look around...\n");
                alx -= 3;
                aly += 1;
              } else if (alr == 3) {
                  printf(" you find only a granola bar, you are hungry so you decide to eat it. After having a snack, you decided you had enough and slowly peek through the door, and realize it's a hallway, you decide to have a look around...\n");
                alx -= 3;
              } else if (alr == 4) {
                  printf(" you find a sturdy and practical looking crowbar. You decide to take it with you, after looking further through the closet, you find nothing else and decided you had enough and kick open the door into the hallway and have a look around... \n");
                aly += 1;
                alc += 1;
              } else if (alr == 5) {
                  printf(" you find a sturdy and practical looking crowbar. You decide to take it with you, after looking further through the closet, you find nothing else and you decided you had enough and slowly peek through the door, and realize it's a hallway, you decide to have a look around... \n");
              }
                alc += 1;
                while (getchar() != '\n');
                break;
            default:
                printf("You manage to warp pass the door... this is impossible, but you did it!\n");
                break;
        }
        printf("You realize you are in a hospital hallway that seems to go either left or right, they seem to go on forever. What do you do? \n");
        while (getchar() != '\n');
        printf("\n");
        while (getchar() != '\n');
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
















































