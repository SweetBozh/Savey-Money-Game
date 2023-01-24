#include <stdio.h>

void dayThree()
{
    //------Day 3----------
    printf("\n\n  Day 3 - Start [Press 1]  ");
    getchoice();

    system("cls");
    printf("\n\n  DAY 3\n\n");
    printf("  'Mom have left your today's pocket money with\n"
           "   a kind aunty next to your house.'\n\n");

    printf("  Go to Aunty House [1]\n");
    printf("  Go to Town        [2]");
    printf("%s",line); getTwoChoice();

    if(choice == 1)
    {
        auntyHouseThree();
    }

    else if(choice == 2) saveyTown();

}

void auntyHouseThree()
{
    if(countAuntyHouseThree==0)
     {
        system("cls");
        printf("\n\n  Aunty House\n\n");
        printf("  Aunty is watering flowers in her garden.\n"
               "  Maybe, you should go and ask her.\n\n\n");

        printf("  Ask        [Press 1]\n");
        printf("  Go to Town [Press 2]");
        printf("%s",line); getTwoChoice();

        if(choice == 1)
        {
            system("cls");
            printf("\n\n %-7s: Excuse me...?\n",name);
            printf(" Aunty  : Hey, sweetie.\n\n"
                   " (She narrows her eyes, trying to gaze at you.)\n\n\n");
            printf(" Er... [Press 1]"); printf("%s",line); getchoice();

            system("cls");
            printf("\n\n Aunty  : Oh!! You must be '%s'!\n\n",name);
            printf("          Are you here for your mom's pocket money?\n\n");

            printf(" ..Oh, She knows it all !! \n\n  Yes [Press 1]");
            printf("%s",line); getchoice();

            system("cls");
            printf("\n\n Aunty  : Come here! Get your money. ^^\n\n\n");
            printf("  Thank you, aunty! %c [Press 1]",3);
            printf("%s",line); getchoice();

            system("cls");
            printf("\n\n  Aunty  : You're welcome!\n\n\n");

            printf("  You get 95 Baht.\n\n");
            pocketMoney += 95;

            countAuntyHouseThree++;
            printf("  Go to Town [Press 1]"); printf("%s",line); getchoice();
            saveyTown();
        }
     }
     else if(countAuntyHouseThree!=0)
        auntyHouse();
}
