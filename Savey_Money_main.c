#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>
#include <windows.h>
#include "Savey_Money_library.c"
#include "Savey_Money_intro.c"
#include "Savey_Money_day1.c"
#include "Savey_Money_day2.c"
#include "Savey_Money_day3.c"
#include "Savey_Money_day6.c"
#include "Savey_Money_day7.c"
#include "Savey_Money_day8.c"
#include "Savey_Money_day9.c"
#include "Savey_Money_day10.c"
#include "Savey_Money_antiqueShop.c"
#include "Savey_Money_groceryShop.c"
#include "Savey_Money_petShop.c"

void menu();

main()
{
    //Check -- first play
    FILE *pn,*data;
    if((pn=fopen("PlayerName.txt","r"))==NULL)
    {
        intro();
        fclose(pn);
    }

    //OpenMenu -- Not first Play
    else
    {
        while(choice!=4)
        {
            menu();
            if(choice==1)
            {
                system("cls");
                printf("\n\n  Do you want to start a new game ??\n"
                       "         Yes [1]     No  [2]");
                printf("%s",line);
                getTwoChoice();
                if(choice == 1)
                {
                    system("cls");
                    printf("\n\n");
                    intro();
                    //Shop Open!! Stock Com'in
                    break;
                }

            }
            else if(choice==2)
            {
                system("cls");
                pn=fopen("PlayerName.txt","r");
                checkFile(pn);

                fgets(name,8,pn);
                fclose(pn);

                if(strcmp(name,"")==0)
                {
                    printf("\n\n  File not Found.\n\n  Please start a New Game.\n\n");
                    getch();
                }

                else
                {
                    printf("\n\n  Do you want to play as '%s'?\n",name);
                    printf("  Yes [1]\n");
                    printf("  No  [2]\n");
                    printf("%s",line);
                    getTwoChoice();
                    if(choice == 1) break;
                }
            }
            else if(choice==3)
                rule();
            else if(choice==4)
                return 0;
        }
    }
    //-----Game Start-----
    system("cls");
    printf("\n\n  ----------  Game Start !!!  ----------  \n\n");
    fetchData(0);
    fetchData(1);
    fetchData(2);
    fetchData(3);
    fetchData(4);
    fetchData(5);
    fetchData(6);

    //fetchName;
    pn = fopen("playerName.txt","r");
    fgets(name,8,pn);
    fclose(pn);

    //Item added to antique Shop
    fetchAntique();

    //------------ Day Begin -----------
    switch(day)
    {
    case 0 : day=1; dolist(); dayOne();  manageHeart(); endday(); if(choice==2 || countEndCredit==1) return 1; //If Data saved is  0 Then we will print the next day, DAY1; and continue DAY 2 3 4 til exit;
    case 1 : day=2; dolist(); dayTwo();  manageHeart(); endday(); if(choice==2 || countEndCredit==1) return 1; //Endday(); will save game, then ask if player want to stop? If yes, then easy to return or stop program;
    case 2 : day=3; dolist(); dayThree();manageHeart(); endday(); if(choice==2 || countEndCredit==1) return 1; //Dolist() will Add Food to GroceryStore
    case 3 : day=6; dolist(); daySix();  manageHeart(); endday(); if(choice==2 || countEndCredit==1) return 1; //manageHeart = Calculate Heart and Determine if Game over?
    case 6 : day=7; dolist(); daySeven();manageHeart(); endday(); if(choice==2 || countEndCredit==1) return 1;
    case 7 : day=8; dolist(); dayEight();manageHeart(); endday(); if(choice==2 || countEndCredit==1) return 1;
    case 8 : day=9; dolist(); dayNine(); manageHeart(); endday(); if(choice==2 || countEndCredit==1) return 1;
    case 9 : day=10; dolist(); dayTen(); manageHeart();
    }

    if(countEndCredit!=1)
    {

    system("cls");
    printf("\n\n              Game End !!  \n\n");

        printf("  Show Result [Press 1]  "); getchoice();

    system("cls");
     if(pocketMoney>=target) //Win !
    {
        printf("\n\n + -- -- -- -- -- -- -- -- -- -- -- -- -- -- --+\n");
        printf(" |                                             |\n");
        printf(" |            -=-=! YOU WIN !=-=-              |\n");
        printf(" |                                             |\n");
        printf(" |               -:: Player ::-                |\n");
        printf(" |                                             |\n");
        printf(" |                 Name : %-7s              |\n",name);
        printf(" |                  Day : %-2d                   |\n",day);
        printf(" |               Target : %-3d                  |\n",target);
        printf(" |                Money : %-5d                |\n",pocketMoney);
        printf(" |                                             |\n");
        printf(" |                                             |\n");
        printf(" |               -:: Result ::-                |\n");
        printf(" |                                             |\n");
        if(pocketMoney>=500)
        {
            printf(" |    \"You are Fabulous at Saving Money!!\"     |\n");
            printf(" |                                             |\n");
        }
        else
        {
            printf(" |     \"You are very Good at Saving Money!\"    |\n");
            printf(" |                                             |\n");
        }
        if(happiness==0)
        {
            printf(" |       \"Your happiness level is normal.\"     |\n");
            printf(" |                                             |\n");
        }
        else if(happiness>=1 && happiness <=5)
        {
            printf(" |          \"You are very happy man!\"          |\n");
            printf(" |                                             |\n");
        }
        else if(happiness>=6 && happiness <=10)
        {
            printf(" |            \"You are Super Happy!\"           |\n");
            printf(" |                                             |\n");
        }
        else if(happiness>=11)
        {
            printf(" |    \"You have got such a Fantastic life!!\"   |\n");
            printf(" |                                             |\n");
        }
        if(health>=8)
        {
            printf(" |         \"You are also very healthy!\"        |\n");
            printf(" |                                             |\n");
        }
        printf(" |                                             |\n");
        printf(" + -- -- -- -- -- -- -- -- -- -- -- -- -- -- --+  \n");
    }

    else if(pocketMoney<target)
    {
        printf("\n\n + -- -- -- -- -- -- -- -- -- -- -- -- -- -- --+\n");
        printf(" |                                             |\n");
        printf(" |            -=-=! YOU LOSE !=-=-              |\n");
        printf(" |                                             |\n");
        printf(" |               -:: Player ::-                |\n");
        printf(" |                                             |\n");
        printf(" |                 Name : %-7s              |\n",name);
        printf(" |                  Day : %-2d                   |\n",day);
        printf(" |               Target : %-3d                  |\n",target);
        printf(" |                Money : %-5d                |\n",pocketMoney);
        printf(" |                                             |\n");
        printf(" |       \"You forget to collect money ?\"         |\n");
        printf(" |                                             |\n");
        printf(" + -- -- -- -- -- -- -- -- -- -- -- -- -- -- --+  \n");
    }

        printf("   Continue  [Press 1]\n   ");
        getchoice();
        resetData();
        endCredit();

    }

}

//---------------------Function Declaration ------------------

void menu()
{
    system("cls");
    printf("\n");
    printf("        Savey Money Game          \n");
    printf("-------------------------------------\n\n");
    printf("            - MENU -              \n\n");
    printf("            New Game   [1]          \n");
    printf("         Continue Game [2]          \n");
    printf("           How to Play [3]          \n");
    printf("              Quit     [4]          \n\n");
    printf("-------------------------------------\n");
    getFourChoice();
}

