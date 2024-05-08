//contributors
//

#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include <time.h>
#include <stdio.h>
#include <stdbool.h>
#include <unistd.h>

void chooseDoor();
void chooseWeapon();
void chooseKey();
void chooseCake();
void chooseEnding();

// Vars for choices
int doorChoice;
int weaponChoice;
int cakeChoice;
int finalChoice;

// Array to store choices
char choices[5][100];
// Player health
int health = 100;

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
				// Intro
                		printf("You enter through the first door you see, there's no logic behind it, just pure panic and instinct taking over.\n");
                		printf("You're shocked by the immediate darkness, the sudden change in lighting catching you off guard. It takes a few seconds for your eyes "
                       "to adjust, but as they do you notice 2 more doors in front of you. \n\n");
                	printf("The left one is a dark, warped metal, with large scratches gouged into it as if some large beast was trying to break its way in.\n\n");
                	printf("The second appears to be marble, though in its current weathered state it's hard to tell. It was likely very ornate at one point "
                       "though, you wonder how long it's been down here for.\n\n");
                	printf("Not sure where to proceed from here but with seemingly no other option, you decide to pick a door and continue forward.\n"
                       " Which door do you choose? (1: Left, 2: Right)\n");

                // First choice
                chooseDoor();

                // Door text
                printf("You walk through the door, afraid of what you'll find, but to your surprise it's simply an altar with 2 ancient-looking "
                       "weapons laying upon it.\n\n");
                printf("On the left is what appears to be a battleaxe, one of great size and seemingly still very sharp despite its age. It has a very"
                       " intricate design, you wouldn't be surprised if it belonged to some sort of Norse royalty. \n\n");
                printf("On the right is a traditional Japanese katana, which also appears to be in very good condition despite its obvious age. You bet "
                       "you could still cleave a person or two in half with that, better be cautious of it.\n\n");
                printf("Once again stuck with a choice with no obvious path forward, you decide to grab a weapon and advance through this maze."
                       "\nWhich do you take? (1: Norse Axe, 2: Japanese Katana) \n");

                // Second choice
                chooseWeapon();

                // Next room text
                printf("Proceeding past the weapons you cross a threshold into a new room, this one containing a wooden chest with a padlock on it. "
                       "There is a simple stone door at the end, though it appears to be locked.\n\n");
                printf("There are 5 keys placed on the floor around this chest, all seemingly identical. Assumedly you are supposed to guess which key"
                       " fits, but why place them all here if only one works? Something isn't adding up, and you begin to worry about what will happen if you get "
                       "it wrong...\n\n");
                printf("And as fate would have it, your suspicions are proven correct. The room immediately starts to flood with a green gas, your vision already "
                       "starting to turn fuzzy. You likely only have enough breath saved up to try a few of the keys before you run out of time, and you don't want to"
                       " think about what happens when that time runs out.\n\n");

                // Third choice
                chooseKey();

                // Cake text
                printf("Leaving the room through the newly unlocked door (you don't know how it unlocked itself but you're too afraid to theorize on "
                       "how it happened), you enter into a seemingly endless stone hallway. \n\n");
                printf("Sitting on the floor is something you never would have expected in a place like this, a piece of pink frosted birthday cake.\n\n");
                printf("Obviously suspicious of something so out of place, you aren't sure how to proceed. You've been down here for who knows how long"
                       " and are famished, but on the other hand this could be another trap, or maybe it's poisoned. \n\n");
                printf("Either way you've got a choice to make, do you eat it, or simply walk past? (1: Eat, 2: Ignore)\n");

                // Fourth choice
                chooseCake();

                // Entering throne room text
                printf("Eventually you begin to see a light in the distance. It's dim, but even that small light gives you hope that your journey might"
                       " soon be over\n\n");
                printf("As you get closer you see it's an open door, and as you finally reach it you realize the scale of the room in front of you. \n\n");
                printf("You've just entered in what appears to be a throne room, one so grand and regal it looks straight out of a castle. The roof rises"
                       " what must be nearly 100 feet into the air, far too large to exist in a place like this. The walls are lined with ornate tapestries and"
                       " suits of armor, and at the very back is a throne so massive it would be fit for a giant straight out of a fantasy novel.\n\n");
                printf("You take your time taking in the sights, but eventually you move deeper into the room. As you approach the throne, an altar appears "
                       "out of nowhere in front of you. Engraved into the stone is a sentence in a foreign language, one you don't recognize. But somehow deep in"
                       " your soul you know exactly what it means.\n\n");
                printf("'Place your weapon here, and receive your gift'\n\n");
                printf("Your journey has been long, and far from easy, but the idea of a gift certainly raises your morale. Maybe this was all worth it"
                       " after all. \n\n");

                // Fifth (final) choice
                chooseEnding();

                // Loop to print user choices
                printf("Congratulations on finishing the journey! Here are all your choices:\n");
                for (int i = 0; i < 5; i++)
                {
                    printf("%s\n", choices[i]);
                }
                // Exit text
                printf("\nSuddenly as soon as it started, your journey is over. You are back where you started, but things are different now. You await going "
                       "back home with baited breath, with both fear and excitement mingling together. Things will be different, only time will tell how though. \n\n");
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

void chooseDoor()
{
// First choice (door)
    scanf("%d", &doorChoice);
    if (doorChoice == 1)
    {
        printf("\nSteeling your nerve, you choose the warped metal door. It may look scary but judging by the scratches on the metal it"
               " likely contains something valuable if the beast was so eager to gain entrance.\n\n");
        strcpy(choices[0], "You chose the metal door.");
    }
    else if (doorChoice == 2)
    {
        printf("\nSteeling your nerve, you choose the ancient marble door. Judging by its design it was likely very expensive and time-consuming"
               " to make, so you can only assume something valuable lies behind. \n\n");
        strcpy(choices[0], "You chose the marble door.");
    }
}

void chooseWeapon()
{
// Second choice (weapon)
    scanf("%d", &weaponChoice);
    if (weaponChoice == 1)
    {
        printf("\nYou pick up the battleaxe, its weight surprises you, very light despite its large size. You swing it around experimentally"
               " a few times and think to yourself you could probably win quite a few fights with this in your hands.\n\n");
        strcpy(choices[1], "You chose the battleaxe.");
    }
    else if (weaponChoice == 2)
    {
        printf("\nYou pick up the katana, its weight surprising you. Despite how small it looked its actually quite heavy, but that heft "
               "only adds to your admiration of the craftsmanship. You swing it around a few times and smile to yourself, your previous assumption "
               "about being able to cleave a man in half was right. You pity anyone who gets in your way with this in your hands. \n\n");
        strcpy(choices[1], "You chose the katana.");
    }
}

void chooseKey()
{
    // Third choice (locked chest)
    // Vars for random number guessing
    int guess;
    int randKey = rand() % 5 + 1;
    // Do-While loop to make the player keep guessing until they get it right
    do
    {
        printf("Pick up a key (Enter 1-5 to choose):\n");
        scanf("%d", &guess);
        if (guess != randKey)
        {
            health -= 20;
            printf("\nYou grab key number %d and attempt to insert it into the lock. But to your dismay it doesn't fit. Your time is quickly running "
                   "out, your health is now at %d and dropping quickly.\n", guess, health);
            printf("You throw the key back and reach for another, hoping this one will be your salvation. \n\n");
        }
    }
    while (guess != randKey);
    strcpy(choices[2], "You eventually chose the correct key");

    // Key-Escape Text
    printf("\nYou grab key number %d and insert it, and to your immense relief it turns. You throw open the lid and look inside, "
           "seeing something completely unexpected but so incredibly relieving, a gas mask.\n\n", randKey);
    printf("You quickly throw it on, finally breathing fresh air for the first time in what feels like hours. Your vision and heart rate begin"
           " to return to normal, and as you look around you see the gas begin to leave the room. \n\n");
    printf("After a few minutes the room appears to be entirely gas free, so you take the risk and remove the mask. Fortunately your guess"
           " was correct, and you can breathe normally again. Whatever that test was, you didn't like it. Hopefully the path forward isn't as"
           " dangerous. \n\n");
}

void chooseCake()
{
// Fourth Choice (cake)
    scanf("%d", &cakeChoice);
    if (cakeChoice == 1)
    {
        printf("\nShrugging, you grab the piece of cake and dig in. Poison be damned, you're hungry and nothing will stop you from eating"
               " something so delicious.\n\n");
        printf("To your immense satisfaction the cake is divine, exactly what you needed in a place like this. You continue to feast, with "
               "nothing bad seeming to happen. You finish the cake, your morale higher than ever and your body feeling rejuvenated.\n\n");
        printf("'Health increased by 20 points'\n");
        printf("'Your health is now %d.'\n\n", health);
        printf("You continue to walk down the hallway for what seems like hours, even the joy of your feast eventually wearing off as the exhaustion"
               " hits.\n\n");
        strcpy(choices[3], "You ate the cake and gained 20 health.");
        health += 20;
    }
    else if (cakeChoice == 2)
    {
        printf("\nYou decide it's not worth the risk, and pass by the cake without touching it. It may have been delicious, or it may have"
               " been poisoned, you'll never know. \n\n");
        printf("You continue to walk down the hallway for what seems like hours, the exhaustion and fear hitting you like a truck. Maybe that"
               " cake would've been nice after all, poison or not. \n\n");
        strcpy(choices[3], "You ignored the cake and missed out on a delicious feast.");
    }
}

void chooseEnding()
{
// If player chose the axe
    if (weaponChoice == 1)
    {
        printf("You place your axe on the altar, and immediately a bright light floods the room. You can't see a thing, but suddenly a voice "
               "begins speaking in your mind. Just like the inscription on the stone it's in a language you've never heard before, but somehow"
               " you understand every word. \n\n");
        printf("'Welcome weary traveler, it seems you've been able to make it through my gauntlet, I applaud you. I can see that you've chosen"
               " my battleaxe, you clearly have incredible taste. I carried that fine weapon into many a battle, all of which it led me to victory.'\n\n");
        printf("'My name is Odin, God of war and ruler of Valhalla, it's a pleasure to make your acquaintance.' \n\n");
        printf("'You've made it through my maze, not everyone could've done that. Because of your victory I'd like to reward you with a prize"
               " befitting a god.'\n\n");
        printf("'I give you two choices, either of which I assure you will not be disappointed by. As I stated previously that axe was once mine, "
               "so if you desire you can return the axe to me, and in exchange I will grant you immense wealth beyond your wildest dreams.'\n\n");
        printf("'Before you jump on this option I will warn you, wealth and power come with a cost, and your life may not be the cakewalk you"
               " expect it to be. So please consider the second option before choosing.'\n\n");
        printf("'The second option is to keep my axe and mount it in your home, preferably somewhere anyone who enters will be able to notice "
               "and admire my amazing craftsmanship. If you do this, for as long as the axe hangs in your dwelling, you will be blessed with great luck"
               " beyond what any man considers possible.'\n\n");
        printf("'Now I know this doesn't sound as appealing as wealth beyond measure, but who's to say being the luckiest man alive won't have"
               " its own benefits? The choice is yours, neither is wrong, but you must follow your heart and choose what truly matters to you. Best of"
               " luck traveler, I hope you make a decision you won't regret.'\n\n");
        printf("What do you choose? (1: Wealth, 2: Luck)\n");

        // Fifth choice (Divine Gift)
        scanf("%d", &finalChoice);
        // If player chooses wealth
        if (finalChoice == 1)
        {
            printf("\n'So you've chose immense wealth. An understandable choice, though quite predictable for a human. I hope this decision pleases"
                   " you, I'm sure your newfound power and influence will lend themselves to many new opportunities.'\n\n");
            printf("'Once you leave this place you will find your life is far different from what it once was, so try and make the most of it.'"
                   "\n\n'Farewell traveler, I wish you a happy life.'\n\n");
            strcpy(choices[4], "You chose Immense Wealth.");
            // If player chooses luck
        }
        else if (finalChoice == 2)
        {
            printf("\n'So you've chosen the luck, a choice worthy of someone of your nature, though very surprising considering the wealth offered "
                   "to you. You may not have the riches you might have attained, but I can assure you that your life will be fulfilling and exciting"
                   " on a scale you never imagined.'\n\n");
            printf("'Once you leave this place you will find your life is far different from what it once was, so try and make the most of it.' "
                   "\n\n'Farewell traveler, I wish you a happy life.' \n\n");
            strcpy(choices[4], "You chose God-like Luck.");
        }

        // If player chose katana
    }
    else if (weaponChoice == 2)
    {
        printf("\nYou place your katana on the altar, and immediately a bright light floods the room. You can't see a thing, but suddenly a voice "
               "begins speaking in your mind. Just like the inscription on the stone it's in a foreign language, Japanese maybe? But nonetheless"
               " you somehow understand ever word.' \n\n");
        printf("'Greetings weary traveler. It seems you were able to navigate my labyrinth, well done. I see you've chosen my katana, you "
               "have exquisite taste. I watched over many warriors in my time, all with their own weapons, but I think you'll find mine to be"
               " of the highest quality.'\n\n");
        printf("'My name is Hachiman, the God of Warriors and the divine protector of my homeland, it iss a pleasure to meet you.'\n\n");
        printf("'You've made it through my maze, not everyone could've done that. Because of your victory I'd like to reward you with a prize"
               " befitting a deity.'\n\n");
        printf("'I give you two choices, either of which I can promise you will not be disappointed by. As I mentioned previously, that sword once belonged "
               "to me. I mastered that blade, and every foe I used it against felt the results of that hard-earned skill. So your first choice is this, take the sword home with you"
               " and keep it stored somewhere safe in your dwelling. Put it somewhere befitting of its divine nature, where it can be honored by all those who see it."
               " Do this, and I will bless you with the same level of skill and mastery in whatever venture you undertake as I had in my swordsmanship. By honoring me "
               "and my legacy, I will ensure whatever journey you embark on in life will result in the same success and legacy as mine.'\n\n");
        printf("'Now that is assuredly a tempting offer, but hear out my second offer out first before you decide. For your second choice, return my sword to me and I will "
               "give it an honored position in Takamagahara. And in exchange for this, I will grant you one wish of your choosing.'\n\n");
        printf("'Though I am a god, I cannot alter the lives of the living or the dead, I do not believe Izanami would be happy with me. I also cannot change the hearts"
               " of others, for Okuninushi places great worth on the sanctity of love. Anything outside of this however is within my control, so ask away.'\n\n");
        printf("What do you choose? (1: Skill Mastery, 2: One Wish)\n");

        // Fifth choice (Divine Gift)
        scanf("%d", &finalChoice);
        // Consumes newline char so user can enter their choice
        getchar();
        // If player chooses the mastery
        if (finalChoice == 1)
        {
            printf("\n'So you've chosen the mastery, a very respectable choice. For as long as my katana hangs in your abode, any venture you attempt"
                   " will go as well as if you'd spent your entire life training for it. Do not let this get to your head though, for there is far"
                   " more to life than success. Be sure to find fulfillment in other parts of living, so you do not live a hollowed existence"
                   " as many others sadly do.'\n\n");
            printf("'Once you leave this place you will find your life is far different from what it once was, so try and make the most of it. "
                   "\n'Farewell traveler, I wish you a happy life.'\n\n");
            strcpy(choices[4], "You chose Skill Mastery.");
            // If player chooses the wish
        }
        else if (finalChoice == 2)
        {
            printf("\n'So you've chosen the one wish. A bold choice, but unsurprising given the tempting nature. I am a bit disappointed though, I was hoping my"
                   " katana would reside with someone like me once again. Alas, I will take it back and gift you your wish. What does your heart desire?' \n");
            // Char array to store wish input
            char input[200];
            // Like scanf, but for strings with spaces. Allows the player to enter a sentence for their wish
            fgets(input, sizeof(input), stdin);
            // Removes the newline character from the printing
            input[strcspn(input, "\n")] = '\0';
            printf("\n'So you have chosen '%s', I will see what I can do. You might find that your life once you return is not what it as before, I pray"
                   " you are happy with your decision. I bid you farewell traveler, may you live a fulfilling existence.'\n\n",
                   input);
            strcpy(choices[4], "You chose The Wish.");
        }
    }
}

















































