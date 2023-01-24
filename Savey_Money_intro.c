#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

void rule();

void intro()
{

    //Get Player Data
    FILE *data,*pn;
    pn = fopen("PlayerName.txt","w");
    data = fopen("PlayerData.txt","w");
    fprintf(data,"0 0 0 0 0 0 0");
    fprintf(pn,"");
    fclose(data);
    fclose(pn);



    //***Game Start***
    //Guiding
    printf("????: Hey!\n");
    printf("You : ...?");
    getch();

    printf("\n\n Welcome to Savey Money Game!\n");
    printf("\n I am your guide in touring this world from now on,\n"
           " could I explain what Savey Money Game is?\n\n");
    printf(" Go ahead. [Press 1] ");
    printf("%s",line);
    getchoice();

    system("cls");
    printf("\n\n This is a little world where you will be able \n to freely practice using money !\n\n");
    printf(" Okay. [Press 1] ");
    printf("%s",line);
    getchoice();

    //Guiding -- interface
    system("cls");
    printf("\n\n Now, below is interface of the game.\n\n");

    printf(" [Show Interface]\n\n ");
    simpleHeart(5);
    printf("              <-- your life point\n");
    printf(" Target: xxx/300    <-- target money\n");
    printf(" DAY 1              <-- date\n");
    printf(" Town\n");
    printf(" --> Grocery Store  [1]\n");
    printf(" --> Antique Shop   [2]\n");
    printf(" --> Pet Shop       [3]\n");

    printf("\n Okay. [Press 1] ");
    printf("%s",line);
    getchoice();

    //Guiding -- Rule
    rule();


    //Start -- Select Mode
    system("cls");
    printf("\n\n Select Mode\n\n");
    printf(" Hard   [1]\n"
           " Normal [2]\n"
           " Easy   [3]\n");
    printf("%s",line);
    getThreeChoice();
    if(choice == 1) target = 500;
    else if(choice == 2) target = 300;
    else if(choice == 3) target = 100;


    //Progress -- Save Mode
    data = fopen("PlayerData.txt","r");
    fscanf(data,"%d ",&playerData);
    playerData[1] = target; //Target Data change To what Player choose
    fclose(data);

    data = fopen("PlayerData.txt","w");
    for(int i=0; i<7; i++)
        fprintf(data,"%d ",playerData[i]); //Overwrite Data

    fclose(data);

    //Start -- Get Player Name
    char name[8];
    pn = fopen("PlayerName.txt","w");

    int errorname = 0;
    do
    {
        system("cls");
        printf("\n\n Your name: ");
        fflush(stdin);
        gets(name);
        errorname = 0;
        for(int i=0; i<strlen(name); i++)
        {
            if(isalpha(name[i])==0)
                errorname = 1;
        }

        if(errorname == 1)
        {
            printf("\n");
            printf(" Sorry, this name is invalid.\n"
                   " Please try again.\n\n");
            printf(" Okay [Press 1] ");
            printf("%s",line);
            getchoice();
        }

        else if(errorname ==0 && strlen(name)>7)
        {
            printf("\n Your name is too long.\n"
                   " *1-7 characters*\n\n");
            printf(" Okay [Press 1] ");
            printf("%s",line);
            getchoice();
            errorname = 1;
        }

        else if(errorname == 0 && strlen(name)<1)
        {
            printf("\n Your name is too short.\n"
                   " Please try again.\n\n");
            printf(" Okay [Press 1] ");
            printf("%s",line);
            getchoice();
            errorname = 1;
        }

        else
        {
            printf("\n\n");
            printf(" You want to use the name '%s'?\n\n",name);
            printf(" Yes [1]\n");
            printf(" No, I want to change. [2]\n");
            printf("%s",line);
            getTwoChoice();
            if(choice == 1)
            {
                fputs(name,pn);
                fclose(pn);
                heart = 5;
                overwrite(0,heart);
            }

        }
    }
    while(choice == 2 || errorname == 1 );


    //Stock Com'in!! Antique Shop Open!
    FILE *ai;
    ai = fopen("antiqueItem.txt","w");
    fprintf(ai," 1 1 1 1 1");
    fclose(ai);

}

//-----------------------Function Declaration---------------------------------------

void rule()
{
    char line[60] = "\n________________________________________________\n";
    //Guiding -- Rule
    system("cls");
    printf("\n\n There are only a few simple rules!\n\n");
    printf(" 1. You will have 5 hearts (");
    simpleHeart(5);
    printf(") at the start of the game.\n\n");

    printf(" Next [Press 1]\n");
    printf("%s",line);
    getchoice();


    system("cls");
    printf("\n\n There are only a few simple rules!\n\n");
    printf(" 1. You will have 5 hearts (");
    simpleHeart(5);
    printf(") at the start of the game.\n\n");
    printf(" 2. You will get some money everyday and live in the town for 10 days.\n\n");
    printf(" Next [Press 1]\n");
    printf("%s",line);
    getchoice();


    system("cls");
    printf("\n\n There are only a few simple rules!\n\n");
    printf(" 1. You will have 5 hearts (");
    simpleHeart(5);
    printf(") at the start of the game.\n\n");
    printf(" 2. You will get some money everyday and live in the town for 10 days.\n\n");
    printf(" 3. You have to collect required amount of money for the total to win the game.\n\n");
    printf(" Next [Press 1]\n");
    printf("%s",line);
    getchoice();


    system("cls");
    printf("\n\n There are only a few simple rules!\n\n");
    printf(" 1. You will have 5 hearts (");
    simpleHeart(5);
    printf(") at the start of the game.\n\n");
    printf(" 2. You will get some money everyday and live in the town for 10 days.\n\n");
    printf(" 3. You have to collect required amount of money for the total to win the game.\n\n");
    printf(" 4. You have to buy food (with %c) everyday or you lost 1 Heart.\n    If you have no heart left, then GAME OVER.\n\n",3);
    printf(" Next [Press 1]\n");
    printf("%s",line);
    getchoice();


    system("cls");
    printf("\n\n There are only a few simple rules!\n\n");
    printf(" 1. You will have 5 hearts (");
    simpleHeart(5);
    printf(") at the start of the game.\n\n");;
    printf(" 2. You will get some money everyday and live in the town for 10 days.\n\n");
    printf(" 3. You have to collect required amount of money for the total to win the game.\n\n");
    printf(" 4. You have to buy food (with %c) everyday or you lost 1 Heart.\n    If you have no heart left, then GAME OVER.\n\n",3);
    printf(" 5. Buy special items for extra points! Or even lost point.\n    All collected point will be resulted at the end of the game !!\n\n");
    printf(" Let's Start! [Press 1]\n");
    printf("%s",line);
    getchoice();
}
