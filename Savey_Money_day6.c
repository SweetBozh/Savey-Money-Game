#include<stdio.h>

void daySix()
{
    //------Day6------
    printf("\n\n                          ..."                       ); getch();

    printf("\n\n      The Witch has come to Savey Town last night...\n\n"); getch();

        printf("          !! You have time traveled to Day 6 !! "    ); getch();


    printf("\n\n\n  Day 6 - Start [Press 1]  ");
    getchoice();

    system("cls");

    printf("\n\n   DAY 6\n\n   It's a shiny morning %c\n\n ",2);
    printf("  Wake Up [Press 1]  ");
    getchoice();

    home();
}

void outsideSix()
{
    if(countNewspaper!=1)
    {
        system("cls");
        header();
        printf("                 @Home (Outside) \n\n");

        printf("  There is some old Newspapaper lying on the doorstep...\n\n");

        printf("  Keep them       [Press 1]\n");
        printf("  Go to Town      [Press 2]\n");
        printf("%s",line);
        getTwoChoice();
        if(choice==1)
        {
            system("cls");
            header();
            printf("\n  *You get 1 pile of Newspaper.*\n");
            countNewspaper = 1;

            printf("\n  Probably talk to someone at the Pet Cafe\n\n\n");
            printf("  Go to Town      [Press 1]");
            printf("%s",line);
            getchoice();
        }
    }
}


void petShopSix()
{
    if(countPetShopSix!=1)
    {
        if(countNewspaper==1)
        {
            system("cls");
            header();
            printf(" .o.o.o.o.o.o.o.o.o.o.o.o.o.o.o.o.o.o.o.o.o.o.o.o.o.o.o.o.o.o.o.o.\n\n");
            printf("                          Welcome to Pet Cafe                     \n");
            printf("                           __         /\\     /                   \n");
            printf("                      ___()'`;       (' )   (                    \n");
            printf("                    /,    /`          (  \\  )                    \n");
            printf("                    \\\\""--\\\\            |(__)/                  \n\n");

            printf("        >>  Talk to the Shopkeeper    [Press 1]           \n");
            printf("        >>  Get in                    [Press 2]           \n\n");

            getTwoChoice();

        if(choice==1)
        {
            system("cls");
            printf(" .o.o.o.o.o.o.o.o.o.o.o.o.o.o.o.o.o.o.o.o.o.o.o.o.o.o.o.o.o.o.o.o.\n\n");
            printf("                          Welcome to Pet Cafe                     \n");
            printf("                           __         /\\     /                   \n");
            printf("                      ___()'`;       (' )   (                    \n");
            printf("                    /,    /`          (  \\  )                    \n");
            printf("                    \\\\""--\\\\            |(__)/                  \n\n\n");


            printf("   %-7s    : I heard that you are in need of newspaper?\n\n",name);
            getch();
            printf("   Shopkeeper : Yes! Yes! %c Could I have them?\n\n",2); getch();
            printf("   %s : \n\n",name);
            printf("   Sure!                       [Press 1]\n");
            printf("   No, sorry. I'm just asking. [Press 2]");
            printf("%s",line);
            getTwoChoice();
            if(choice==1)
            {
                system("cls");
                printf(" .o.o.o.o.o.o.o.o.o.o.o.o.o.o.o.o.o.o.o.o.o.o.o.o.o.o.o.o.o.o.o.o.\n\n");
                printf("                          Welcome to Pet Cafe                     \n");
                printf("                           __         /\\     /                   \n");
                printf("                      ___()'`;       (' )   (                    \n");
                printf("                    /,    /`          (  \\  )                    \n");
                printf("                    \\\\""--\\\\            |(__)/                  \n\n\n");


                printf("   You lost 1 pile of newspaper.\n  ");
                getch();

                printf("\n   Shopkeeper : Thanks!! Please get this money in return.\n\n"); getch();

                pocketMoney+=80;
                printf("\n   You get 80 Baht !\n\n   ");
                getch();
            }
            countPetShopSix = 1;
        }


    }
}
}
