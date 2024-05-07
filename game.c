//contributors
//

#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include <time.h>
#include <stdio.h>
#include <stdbool.h>
#include <unistd.h>


void ajlSpace();

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
        //alm is the condition of the creature
        int alm = 0;
        //alt is whether player traversed the hallway without running into the creature
        int alt = 0;
        int eswc = 0;
        //simple array w/ that doesn't allow dupes / Fisher-Yates shuffle
        int arr[15];
        int used[10] = {0};
        for (int ali = 0; ali < 15; ali++) {
            arr[ali] = ali + 1;
        }
        for (int ali = 14; ali > 0; ali--) {
            int alj = rand() % (ali + 1);
            int temp = arr[ali];
            arr[ali] = arr[alj];
            arr[alj] = temp;
        }
        while (alx < 100) {
        puts("NOTICE: Beyond this point, please use the Enter key to continue the story.");
        //This statement stops the user from being flooded with text
                ajlSpace();
        
        printf("\nYour eyes lock onto the door marked with the number 31 as water continues to flood the room around you, your hands grasp the cold and ominous knob. You turn the handle and yank the door open.\n");
        ajlSpace();
        
        printf("On the other side of the door a blinding bright flash of light hits your eyes and without thinking you brazenly step through the door realize you are in a closet.\n");
                ajlSpace();
        
        printf("You give a quick look around the room and realize the door behind you is now gone, it seems you can only go forward.\n");
                ajlSpace();
        
        printf("Your heart pulses as you realize you might be in more danger than the last room...\n");
                ajlSpace();
          
          printf("Enter a number to make a choice: \n1: Check your phone.\n2: Cry out for help.\n3: Look around.\n");
          printf("\n");
          scanf("%d", &alz);
          while (alz < 1 || alz > 3)
          {
              alx += 1;
              printf("You take a minute to breathe, and then you consider your options... \n");
              while(getchar() != '\n');
            printf("Enter a number to make a choice: \n1: Check your phone.\n2: Cry out for help.\n3: Look around.\n");
              printf("\n");
              scanf("%d", &alz);
          }
          switch(alz)
          {
                    ajlSpace();
              case 1:
                printf("You check your phone and realize water got into it... it doesn't seem to work.\n");
                        ajlSpace();
                break;
              case 2:
                printf("You yell for help in the closet... but nothing happens.\n");
                      ajlSpace();
              break;
              case 3:
                printf("You look around in the closet, there is a bright light above you illuminating the room, there seems to be a bunch of junk around here.");
                      ajlSpace();
              break;
              default:
               printf("You feel yourself lose hope...\n");
                       ajlSpace();
          }
        printf("You feel you must do something.\n");
                ajlSpace();
        printf("Enter a number to make a choice: \n1: Conquer your fear, kick open the door! \n2: Gently open the door and peek into the next room.\n3: Observe the closet closely.\n");
        printf("\n");
        scanf("%d", &alz);
        while (alz < 1 || alz > 3)
        {
            alx += 1;
            printf("You decide to stare vacantly at the door, several moments pass and you realize you only have a few options. \n");
            while(getchar() != '\n');
          printf("1: Conquer your fear, kick open the door! \n2: Gently open the door and peek into the next room.\n3: Observe the closet closely.\n");
            printf("\n");
            scanf("%d", &alz);
        }
        printf("\n");
        while(getchar() != '\n');
        //Generates result of choice
          switch(alz)
          {
              case 1:
                  printf("You violently kick the door open, it breaks the latch on the door, making it now impossible to close, you walk into the hallway and have a look around.\n");
                  alx += 2;
                  aly += 1;
                          ajlSpace();
              break;
              case 2:
                  printf("You slowly peek through the door, and realize it's a hallway, you decide to have a look around...\n");
                  alx += 1;
                          ajlSpace();
              break;
              case 3:
                  printf("You decide to closely observe the closet and search meticulously...");
                  alx += 3;
                    if (alr == 1) 
                    {
                    printf(" unfortunately you find nothing. The closet is filled with trash, you decided you had enough and kick open the door into the hallway and have a look around.\n");
                    aly += 1;
                    } 
                    else if (alr == 2) 
                    {
                    printf(" you find only a granola bar, you are hungry so you decide to eat it. After having a snack, you decided you had enough and kick open the door into the hallway and have a look around...\n");
                    alx -= 3;
                    aly += 1;
                    } 
                    else if (alr == 3) 
                    {
                    printf(" you find only a granola bar, you are hungry so you decide to eat it. After having a snack, you decided you had enough and slowly peek through the door, and realize it's a hallway, you decide to have a look around...\n");
                    alx -= 3;
                    } 
                    else if (alr == 4) 
                    {
                    printf(" you find a sturdy and practical looking crowbar. You decide to take it with you, after looking further through the closet, you find nothing else and decided you had enough and kick open the door into the hallway and have a look around... \n");
                    aly += 1;
                    alc += 1;
                    } 
                    else if (alr == 5) 
                    {
                    printf(" you find a sturdy and practical looking crowbar. You decide to take it with you, after looking further through the closet, you find nothing else and you decided you had enough and slowly peek through the door, and realize it's a hallway, you decide to have a look around... \n");
                    alc += 1;
                    }
                            ajlSpace();
              break;
              default:
                    printf("You manage to warp pass the door... this is impossible, but you did it!\n");
              break;
          }
        alz = 0;
        printf("You realize you are in what seems like a hospital hallway that only goes either left or right, seemingly forever. The hallway feels hot and humid, and the dim light makes you feel uncomfortably alone.\n");
                ajlSpace();
          if (alc == 1)
          {
        printf("You firmly grasp the crowbar in your hand, making you feel a little more confident about your predicament.\n");
                ajlSpace();
          }
        printf("When looking left into the hallway, you see dirty walls, floors littered with miscellaneous medical waste, and doors down the hallway that could lead into other rooms. You almost feel like someone is staring at you at the end of it.\n");
                ajlSpace();
        printf("When looking right into the hallway, it seems cleaner, and the hallway isn't as dim, bullet holes and, and pools of blackish red fluid stain the floor, there also seems to be doors down this hallway that could also lead into other rooms. You feel an indescribable sadness looking in this direction.\n");
                ajlSpace();
        printf("You decide you have to go one way or another... enter a number to make a choice: \n1: Go left. \n2: Go right.\n");
        printf("\n");
        scanf("%d", &alz);
        while (alz < 1 || alz > 2) 
        {
            alx += 10;
          printf("%d", alx);
            printf("Your body feels like it doesn't want to move, yet several moments pass and you realize you only have a few options. \n");
            while(getchar() != '\n');
            printf("1: Go left. \n2: Go right.\n");
            printf("\n");
            scanf("%d", &alz);
        }
        //HALLWAY LEFT
        alr = 0;
          switch(alz)
            case 1:
            {
              printf("\n");
                      ajlSpace();
                while ((alr != 1 && alr != 10) || alt != 7)
                {
                alr = arr[rand() % 10] % 10 + 1;
                  if (used[alr - 1] == 0) 
                 {
                    used[alr - 1] = 1;
                      if (alr == 2) 
                        {
                        printf("The smell in the hallway is offensive, yet you continue to march on through.\n");
                        alx++;
                        alt++;
                                ajlSpace();
                        } 
                        else if (alr == 3) 
                        {
                        printf("You hear something from afar hit the ground, chills rush up your spine as you tread faster.\n");
                        alx++;
                        alt++;
                                ajlSpace();
                        }
                        else if (alr == 4) 
                        {
                        printf("The nearby hum from an indistant machine hurts your head. As you walk along the hallway.\n");
                        alx++;
                        alt++;
                                ajlSpace();
                        }
                        else if (alr == 5) 
                        {
                        printf("You kick over a box, the noise startles you, yet you continue to tread onward.\n");
                        alx++;
                        alt++;
                                ajlSpace();
                        }
                        else if (alr == 6) 
                        {
                        printf("The dripping of liquid nearby reminds you of the drowned room you were just trapped within. Reminding you, you need to escape. \n");
                        alx++;
                        alt++;
                                ajlSpace();
                        }
                        else if (alr == 7) 
                        {
                        printf("You notice a door, you try the handle, yet it's locked... \n");
                        alx++;
                        alt++;
                        if (alc == 1)
                        {
                          printf("You try the crowbar on the door, and...");
                          alr = rand() % 2;
                          if (alr == 0) 
                          {
                          printf("It doesn't budge. What a bummer.\n");  
                          }
                          if (alr == 1) 
                          {
                          printf("The door cracks open, you look around, but there actually doesn't seem to be anything of value inside... What a bummer.\n");  
                          }
                        }
                                ajlSpace();
                        }
                        else if (alr == 8) 
                        {
                        printf("A cute drawing sits in filth on the floor, you wonder what happened here, best get a move on...\n");
                        alx++;
                        alt++;
                                ajlSpace();
                        }
                        else if (alr == 9) 
                        {
                        printf("Something in the pipes above you rattle... Is something following you? You dare not look up.\n");
                        alx++;
                        alt++;
                                ajlSpace();
                        }
                        if (alr == 1 || alr == 10 || alt == 7) 
                        {
                        break;
                        }
                    }
                  }
                  
                  if (alt == 7) 
                  {
                    printf("You finally make it to the end of the hallway.\n");
                            ajlSpace();
                    printf("You see a number written on the wall. Weird.\n");
                            ajlSpace();
                    break;
                  } 
                  else if (alr == 1)
                  {
                    printf("Even after you knew there were eyes hunting you in that side of the hallway, yet you went that way anyways. Your body screams to run. And you can't help but oblige.\n");
                    if (alc == 1)
                    {
                      printf("Your hands shake in fear and you drop your crowbar at your feet.\n");
                    alc--;
                    }
                              ajlSpace();
                      printf("You turn and bolt the other way, your heart beats fast, you know you are being chased but you don't want to look back. \n");
                              ajlSpace();
                      alx += 20;
                      alz += 1;
                      alm++;
                    }
                  else if (alr == 10)
                  {
                    printf("You knew there were eyes hunting in that side of the hallway, yet you went that way anyways. Your body screams to run. But you can't oblige.\n");
                    if (alc == 1)
                    {
                      printf("Your hands shake in fear and you grip your crowbar ready to attack.\n");
                              ajlSpace();
                    }
                      printf("The creature bolts at you, your heart beats fast... \n");
                              ajlSpace();
                    printf("You decide in a split second... : \n1: Fight. \n2: Flee.\n");
                    scanf("%d", &alz);
                    while (alz < 1 || alz > 2) 
                    {
                        printf("Your body doesn't react in time... \n");
                        while(getchar() != '\n');
                        alx+= 100;
                        printf("The creature delivers a massive blow to your body. \n");
                      alm++;
                      break;
                    }
                    alr = rand() % 10;
                    if (alc == 1)
                    {
                      printf("You try the crowbar on the door, and...");
                      alr = rand() % 2;
                      if (alr == 0) 
                      {
                      printf("It doesn't budge. What a bummer.\n");  
                      }
                      if (alr == 1) 
                      {
                      printf("The door cracks open, you look around, but there actually doesn't seem to be anything of value inside... What a bummer.\n");  
                      }
                    }
                      alx += 20;
                    break;
                  }
                if(alz == 1)
                {                
                  break;
                }
              //HALLWAY RIGHT
                  case 2:
                    if (alm == 1)
                    {
                    printf("You run, and somehow you manage to elude the monster in the hallway, you know\n");
                    }
                            ajlSpace();
                      while ((alr != 1 && alr != 10) || alt != 7)
                      {
                      alr = arr[rand() % 10] % 10 + 1;
                        if (used[alr - 1] == 0) 
                       {
                          used[alr - 1] = 1;
                            if (alr == 2) 
                              {
                              printf("As you wander through the hallway, you wonder what lead to the events that transpired here.\n");
                              alx++;
                              alt++;
                                      ajlSpace();
                              } 
                              else if (alr == 3) 
                              {
                              printf("You hear something indistance voices, is someone following you?\n");
                              alx++;
                              alt++;
                                      ajlSpace();
                              }
                              else if (alr == 4) 
                              {
                              printf("The hallway feels timeless, as if you've been there before...\n");
                              alx++;
                              alt++;
                                      ajlSpace();
                              }
                              else if (alr == 5) 
                              {
                              printf("You feel groggy, but no time to rest!\n");
                              alx++;
                              alt++;
                                      ajlSpace();
                              }
                              else if (alr == 6) 
                              {
                              printf("The air feels crusty and stale. Is there any way out? \n");
                              alx++;
                              alt++;
                                      ajlSpace();
                              }
                              else if (alr == 7) 
                              {
                              printf("You notice a door, you try the handle, yet it's locked... \n");
                              alx++;
                              alt++;
                              if (alc == 1)
                              {
                                printf("You try the crowbar on the door, and...");
                                alr = rand() % 2;
                                if (alr == 0) 
                                {
                                printf("It doesn't budge. What a bummer.\n");  
                                }
                                if (alr == 1) 
                                {
                                printf("The door cracks open, you look around, but there actually doesn't seem to be anything of value inside... What a bummer.\n");  
                                }
                              }
                                      ajlSpace();
                              }
                              else if (alr == 8) 
                              {
                              printf("A cute drawing is written on the wall, who could have done that...\n");
                              alx++;
                              alt++;
                                      ajlSpace();
                              }
                              else if (alr == 9) 
                              {
                              printf("Something in the pipes above you rattle... Is something following you? You dare not look up.\n");
                              alx++;
                              alt++;
                                      ajlSpace();
                              }
                              if (alr == 1 || alr == 10 || alt <= 7) 
                              {
                              break;
                              }
                          }
                        }

                        if (alt <= 7) 
                        {
                          printf("You finally make it to the end of the hallway.\n");
                                  ajlSpace();
                          printf("You see a door with a keypad, a white light glows on the opposite side of the door.\n");
                                  ajlSpace();
                          if (alc == 1)
                          {
                            printf("Thankfully you don't need to know the passcode, your crowbar breaks the door open,\n");
                                  ajlSpace();
                          eswc++;
                          break;
                          }
                          printf("You don't know the code... It can be pryed open with a bar or something.\n");
                                  ajlSpace();
                          printf("You could try to guess it, but it seems to accept a 7 number code... You may be here all day.\n");
                                  ajlSpace();
                          printf("You decide you have make a choice: \n1: Try to guess. \n2: Go back to the other side of the hallway.\n");
                          printf("\n");
                          scanf("%d", &alz);
                          while (alz < 1 || alz > 2) 
                          {
                              alx += 10;
                            printf("%d", alx);
                              printf("You try the third option and try to bust down the door, but after tiring yourself out... You realize you can either:\n");
                              while(getchar() != '\n');
                              printf("1: Try to guess. \n2: Go back to the other side of the hallway.\n");
                              printf("\n");
                              scanf("%d", &alz);
                          }
                          switch(alz)
                          {
                                    ajlSpace();
                              case 1:
                                printf("Time to guess, hopefully you can get lucky.\n");
                                        ajlSpace();
                                printf("After several minutes, you give up.\n");
                                        ajlSpace();
                                printf("Keep trying? \"1\" for yes, \"2\" for no.\n");
                                        ajlSpace();
                                while (alz < 1 || alz > 2) 
                                {
                                    alx += 10;
                                  printf("%d", alx);
                                    printf("You try the third option and try to bust down the door, but after tiring yourself out... You realize you can either:\n");
                                    while(getchar() != '\n');
                                    printf("1: Try to guess. \n2: Go back to the other side of the hallway.\n");
                                    printf("\n");
                                    scanf("%d", &alz);
                                }
                                if (alz == 1){
                                  printf("After several hours, you give up.\n");
                                  alx += 100;
                                          ajlSpace();
                                  break;
                                }
                                if(alz == 2){
                                  
                                }
                              case 2:
                                printf("You head down the hallway to the other side.\n");
                                      ajlSpace();
                                printf ("You find yourself getting the strangest sense of deja vu.\n");
                                        ajlSpace();
                              break;
                              default:
                               printf("You feel yourself lose hope...\n");
                                       ajlSpace();
                               break;
                          }
                        } 
                        else if (alr == 1)
                        {
                          printf("Even after you knew there were eyes hunting you in that side of the hallway, yet you went that way anyways. Your body screams to run. And you can't help but oblige.\n");
                          if (alc == 1)
                          {
                            printf("Your hands shake in fear and you drop your crowbar at your feet.\n");
                          alc--;
                          }
                                    ajlSpace();
                            printf("You turn and bolt the other way, your heart beats fast, you know you are being chased but you don't want to look back. \n");
                                    ajlSpace();
                            alx += 20;
                            alz += 1;
                            alm++;
                          }
                        else if (alr == 10)
                        {
                          printf("You knew there were eyes hunting in that side of the hallway, yet you went that way anyways. Your body screams to run. But you can't oblige.\n");
                          if (alc == 1)
                          {
                            printf("Your hands shake in fear and you grip your crowbar ready to attack.\n");
                                    ajlSpace();
                          }
                            printf("The creature bolts at you, your heart beats fast... \n");
                                    ajlSpace();
                          printf("You decide in a split second... : \n1: Fight. \n2: Flee.\n");
                          scanf("%d", &alz);
                          while (alz < 1 || alz > 2) 
                          {
                              printf("Your body doesn't react in time... \n");
                              while(getchar() != '\n');
                              alx+= 100;
                              printf("The creature delivers a massive blow to your body. \n");
                            alm++;
                            break;
                          }
                          alr = rand() % 10;
                          if (alc == 1)
                          {
                          alr += 3;  
                          }
                          if (alr < 5) 
                          {
                          printf("You miss. The creature delivers a massive blow to your body. \n");
                            alx+= 100;
                            break;
                          }
                          if (alr > 5) 
                          {
                          printf("You land a blow. The creature flees.\n");  
                          }
                            alx -= 20;
                            printf("Eventually, you tread into a room of blinding light after wandering for a while, suddenly you feel yourself fall.\n");
                                    ajlSpace();
                            printf("The flight fades and you hit the ground, you can't seem to recall the events that had just occured, making you wonder if it even happened... \n");
                                    ajlSpace();
                            printf ("You find yourself getting the strangest sense of deja vu.\n");
                                    ajlSpace();
                            break;
                        }
                      if(alz == 1)
                      {                
                        break;
                      }
                  break;
                  default:
                  printf("You split yourself in half and go in BOTH directions?! You might be the monster of the infinite hallway...\n");
                  break;
                  }
        break;
        }
      if (alx >= 100)
      {
        printf ("Your eyes get weary, and you fall to the ground... you can't remember what happened but now... ");
      if(alm == 1)
      {
        printf ("The monster hovers over your body, your eyes shut tight preparing for the worst, and you open them after a while... \n");
      }
        printf ("You find yourself getting the strangest sense of deja vu.\n");
      }
      if (eswc == 1)
      {
        printf("You tread into the room of blinding light, and suddenly you feel yourself fall.\n");
                ajlSpace();
        printf("The flight fades and you hit the ground, you can't seem to recall the events that had just occured, making you wonder if it even happened... \n");
                ajlSpace();
        printf ("You find yourself getting the strangest sense of deja vu.\n");
                ajlSpace();
      }
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

void ajlSpace()
{
    while (getchar() != '\n')
        ;
}














































