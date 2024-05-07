//contributors
//

#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include <time.h>
#include <stdio.h>
#include <stdbool.h>
#include <unistd.h>

void diegoFunction();
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
				//Diego Espinzoa
			    	int choice2 = 0;
				puts("\nYou enter room 46 to find 5 more doors inside.");
				puts("A metal bar door drops behind you and you are stuck inside room 46.");
				puts("The water filling the previous room starts filling room 46 and you must quickly \nchoose a door.");
				puts("What door do you choose?");
				scanf("%d",&choice2);
				switch(choice2)
				{
				    case 1:
				    {
				        puts("\nYou enter room 1 and a metal bar door drops behind you.");
				        puts("There is text written on one of the walls of the room.");
				        puts("The text says 'choose a number between 1 and 9'.");
				        puts("'There is one right number and one wrong number'");
				        puts("'If you choose the right number, you go free'");
				        puts("'If you choose the wrong number you lose'");
				        puts("'Keep choosing a number until you pick the right or wrong one'\n");
				        
				        diegoFunction();
				        break;
				    }
				    case 2:
				    {
				        int choices[] = {2, 1, 4, 3};
				        puts("\nYou enter room 2 and a metal bar door drops behind you.");
				        puts("There is text written on one of the walls of the room.");
				        puts("The text says 'choose the number in the 2 index spot of the array'.");
				        for(int i = 0; i < 4;i++)
                        		printf("%d ", choices[i]);
                     			puts("\nWhat number do you choose?");
                       			int chose;
                        		scanf("%d",&chose);
                        		if (chose == choices[2])
                        		{
                            			puts("\nText magically apears on the wall.");
                            			puts("'You chose the right number.'");
                            			puts("You have escaped\n");
                        		}
                        		else
                        		{
                            			puts("\nText magically apears on the wall.");
                            			puts("'You chose the wrong number.'");
                            			puts("game over\n");
				        }
				        break;
				    }
				    case 3:
				    {
				        puts("\nYou enter room 3 and a metal bar door drops behind you.");
				        puts("There is text written on one of the walls of the room.");
				        puts("The text says 'What color is space?'.");
				        puts("What is your answer?");
				        char answer[10];
				        scanf("%s",answer);
				        for(int i = 0; answer[i]; i++)
					{
                            			answer[i] = tolower(answer[i]);
                        		}
		                        if (strcmp(answer, "black") == 0)
                        		{
                            			puts("\nTest magically apears on the wall.");
                            			puts("'Answer is correct'");
                            			puts("You have escaped\n");
                        		}
                        		else
                        		{
                            			puts("\nText magically apears on the wall.");
                            			puts("'Wrong answer'.");
                            			puts("game over\n");
                        		}
				        break;
				    }
				    case 4:
				    {
				        puts("\nYou enter room 4 and a metal bar door drops behind you.\n");
				        puts("You hear a voice say,");
				        puts("'You chose the right door'.");
				        puts("You have escaped\n");
				        break;
				    }
				    case 5:
				    {
				        puts("\nYou enter room 5 and a metal bar door drops behind you.\n");
				        puts("You hear a voice say,");
				        puts("'You chose the wrong door'.");
				        puts("game over\n");
				        break;
				    }
				    default:
		    	    	    {
				    	puts("invalid choice");
			            }
				}
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

void diegoFunction()
{
    srand(time(NULL)); 
    int right = rand()%9 +1;
    int wrong = rand()%9 +1;
    int guess = 0;
    while (right == wrong)
    {
        wrong = wrong + rand()%3 +(-1);
        if (wrong == 0)
        {
            wrong++;
        }
        else if(wrong==10)
        {
            wrong--;
        }
    }
    
    puts("Choose a number between 1-9");
    scanf("%d",&guess);
    while (guess != right && guess != wrong)
    {
        puts("Nothing happens, choose again");
        scanf("%d",&guess);
    }
    
    if(guess == right)
    {
        puts("\nText magically apears on the wall.");
        puts("'You chose the right number.'");
        puts("You have escaped\n");
    }
    else
    {
        puts("\nText magically apears on the wall.");
        puts("'You chose the wrong number'.");
        puts("game over\n");
    }
}



















































