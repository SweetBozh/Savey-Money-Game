#include <stdio.h>

void antiqueShop()
{
    do
    {
        system("cls");
        header();
        printf(" Antique Shop\n\n");

        printf(" Old uncle : D..Do you want anything? \n\n");

        if(antiqueItem[0]==1)
            printf(" [1] Piggy Bank .................. Price 30\n"); //Can Break to gain money 80 Baht
       else printf("                -- sold out --     \n");
        if(antiqueItem[1]==1)
            printf(" [2] Fake flower vase ............ Price 20\n"); //+1 Happiness Everyday when you look at
       else printf("                -- sold out --     \n");

        if(antiqueItem[2]==1)
            printf(" [3] Mysterious Water Glass ...... Price 10\n"); //Have free water everyday in fridge
       else printf("                -- sold out --     \n");

        if(antiqueItem[3]==1)
            printf(" [4] Hat ......................... Price 40\n"); //+2 Happiness when give it to Kind Aunty
       else printf("                -- sold out --     \n");

        if(antiqueItem[4]==1)
            printf(" [5] Magic Potion ................ Price 120\n\n"); //+5 Health immediately
       else printf("                -- sold out --     \n");
        printf(" Back [Press 6]");
        printf("%s",line);
        getSixChoice();

        if(choice == 1)
        {
            if(antiqueItem[0]==0)
            {
                printf(" This Item is unavailable!");
                getch();
            }
            else if(pocketMoney-30 <0) {printf(" You don't have enough money !!"); getch();}

            else if(antiqueItem[0]!=0)
            {
                antiqueItem[0]=0;
                pocketMoney-=30;
                addToHouse("Piggy Bank",30);
            }
        }
        else if(choice ==2)
        {
            if(antiqueItem[1]==0)
            {
                printf(" This Item is unavailable!");
                getch();
            }

            else if(pocketMoney-20 <0){printf(" You don't have enough money !!"); getch();}

         else if(antiqueItem[1]!=0)
            {
                antiqueItem[1]=0;
                pocketMoney-=20;
                addToHouse("Fake flowervase",20);
            }
        }
        else if(choice ==3)
        {
            if(antiqueItem[2]==0)
            {
                printf(" This Item is unavailable!");
                getch();
            }

            else if(pocketMoney-10 <0) {printf(" You don't have enough money !!"); getch();}

          else if(antiqueItem[2]!=0)
            {
                antiqueItem[2]=0;
                pocketMoney-=10;
                addToHouse("Mysterious Water Glass",10);

            }
        }
        else if(choice ==4)
        {
            if(antiqueItem[3]==0)
            {
                printf(" This Item is unavailable!");
                getch();
            }

            else if(pocketMoney-40 <0) {printf(" You don't have enough money !!"); getch();}

         else if(antiqueItem[3]!=0)
            {
                antiqueItem[3] =0;
                pocketMoney-=40;
                addToHouse("Hat",40);
            }
        }
        else if(choice ==5)
        {
            if(antiqueItem[4]==0)
            {
                printf(" This Item is unavailable!");
                getch();
            }
            else if(pocketMoney-120 <0) {printf(" You don't have enough money !!"); getch();}

          else if(antiqueItem[4]!=0)
            {
                printf(" Want to drink 'Magic Potion' ?\n");
                printf("    Yes [1]      No [2]\n  ");
                getTwoChoice();
                if(choice == 1)
                {
                    system("cls");
                    antiqueItem[4] =0;
                    pocketMoney-=120;
                    printf("\n\n  You have spent 120 Baht.\n\n"); getch();

                    printf("  'The taste is so strange!!'\n\n"); getch();

                    printf("   Happiness -1\n\n\n"); getch();
                    happiness -= 1;

                    printf("  'But I feel some how enthusiastic %c!!\n\n",3); getch();
                    printf("   Health +5 \n"); getch();
                    health +=5;
                }
            }
        }
    }
    while(choice!=6);
    saveyTown();
}

void addToHouse(char item[20],int price)
{
    printf(" %s is added to House !\n\n You have spent %d Baht\n",item,price);
    getch();
}
