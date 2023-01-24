#include <stdio.h>

void homeTalktoMom();
void homeOne();

void dayOne()
{
    //------Day 1----------
    printf("\n\n  Day 1 - Start [Press 1]  ");
    getchoice();


    system("cls");
    getheart(heart);
    printf(" DAY 1\n");
    printf(" \"Welcome '%s' to Savey Town!\"\n", name);
    printf(" \"This is the town where everyone loves saving money!\"\n\n");

    printf(" Wake up [Press 1]");
    printf("%s",line);
    getchoice();

    //------------------
    system("cls");
    getheart(heart);
    printf(" Target: 0/%d Baht\n",target);
    printf(" DAY 1\n\n");

    printf(" HOME\n"
           " Mom: Hey,'%s'. This is your today's pocket money,\n"
           "      come here and take it.\n\n\n",name);

    printf(" Thanks Mommy! [Press 1]");
    printf("%s",line);
    getchoice();

    //------------------
    printf("\n You get 80 Baht.\n\n");
    pocketMoney += 80;
    //overwrite(2,pocketMoney);
    getch();

    homeTalktoMom();

    //if choice == 1 ,skip condition & go to town
    if (choice == 2)
    {
        system("cls");
        printf("\n\n %-7s : What are you doing, mommy?\n\n",name);
        printf(" Mom     : I am doing housework because I'm going to be\n"
               "           on work trip for 10 days.\n\n\n");

        printf(" Work trip? [Press 1]");
        printf("%s",line);
        getchoice();

        system("cls");
        printf("\n\n Mom     : Yes. Therefore, don't forget to find something\n"
               "           to eat everyday.\n\n\n");
        printf(" I got it! [Press 1]");
        printf("%s",line);
        getchoice();

        homeTalktoMom();

        if(choice == 2)
        {
            system("cls");
            printf("\n\n Mom     : Don't you want to get the fresh air outside?\n\n\n");
            printf("Back [Press 1]");
            printf("%s",line);
            getchoice();

            homeTalktoMom();

            if(choice == 2)
            {
                system("cls");
                printf("\n\n Mom     : The weather today is great.\n\n\n");
                printf("Back [Press 1]");
                printf("%s",line);
                getchoice();

                homeTalktoMom();
            }

            if(choice == 2)
            {
                system("cls");
                printf("\n\n Mom     : I have to leave now, take care of yourself.\n"
                       "           I love you, %s..\n\n\n",name);
                getch();
                printf("  You get extra money from mom 5 Baht.\n\n\n");
                pocketMoney+=5;
                getch();
                printf("Back [Press 1]");
                printf("%s",line);
                getchoice();
            }
        }

    }

    saveyTown();


//to be continue..


}

void homeTalktoMom()
{
    system("cls");
    printf("\n HOME\n\n");
    printf(" --> Go outside    [1]\n");
    printf(" --> Talk to mom   [2]\n");
    printf("%s",line);
    getTwoChoice();
}

