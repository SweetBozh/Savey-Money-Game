#include <stdio.h>


void kitchenTwo();
void dayTwo()
{
    //------Day 2----------
    printf("\n\n  Day 2 - Start [Press 1]  ");
    getchoice();

    system("cls");
    printf("\n\n  DAY 2\n\n");

    printf(" 'Mom went out for a work trip.\n"
           "  Go get today's money from the kitchen.'\n\n");

    printf("  Okay  [Press 1]\n");
    printf("%s",line);
    getchoice();
    //------------------

    home();

}

void kitchenTwo()
{

    system("cls");
    if(antiqueItem[0]!=0 && antiqueItem[1]!=0) //No Special Item
    {
        printf("\n Kitchen\n\n"

               " Where to find money?\n\n"
               " --> in the Refridgerator [1]\n"
               " --> on the Table         [2]\n"
               " --> under the Table      [3]\n\n"

               " Back [Press 4]");
        printf("%s",line);
        getFourChoice();
    }

    else if(antiqueItem[0]==0 && antiqueItem[1]!=0) //Have Special Item 'piggyBank' but not have 'Vase'
    {
        printf("\n Kitchen\n\n"

               " Where to find money?\n\n"
               " --> in the Refridgerator [1]\n"
               " --> on the Table         [2]\n"
               " --> under the Table      [3]\n"
               " --> Piggy Bank           [4]\n\n"
               " --> Back   [Press 5]");
        printf("%s",line);
        getFiveChoice();
        if(choice == 4)
        {
            printf(" Piggy Bank \n\n  Break to get money?\n   Yes [1]   No [2]");
            printf("%s",line);
            getTwoChoice();
            if(choice == 1)
            {
                system("cls");
                printf("\n\n  You lose 1 Piggy Bank\n\n  You get 80 Baht !\n ");
                antiqueItem[0] =-1;
                pocketMoney+=80;
                getch();
            }
            kitchenTwo();
        }
    }

    //========================
    else if(antiqueItem[0]!=0 &&antiqueItem[1]==0) //Have Special Item 'vase' , but not have 'piggy Bank'
    {
        printf("\n\n  Kitchen\n\n"
               " --> in the Refridgerator [1]\n"
               " --> on the Table         [2]\n"
               " --> under the Table      [3]\n");
        printf(" --> Fake Flower Vase     [4]\n\n");
        printf(" --> Back    [Press 5]");
        printf("%s",line);
        getFiveChoice();

        if(choice == 4)
        {
            if(countViewFlower ==0)
            {
                printf("  \"This item can be viewed once everyday.\"\n\n"
                       "   View the flower?  \n\n"
                       "  Yes [1]    No [2]");
                printf("%s",line);
                getTwoChoice();
                if(choice == 1)
                {
                    countViewFlower=1;
                    system("cls");
                    printf("\n\n + Looking at flowers makes me feel calm. + \n\n happiness +1\n ");
                    happiness+=1;
                    getch();
                }
                    kitchenTwo();
            }
            else
            {
                system("cls");
                printf
                ("\n\n  You have already viewed flowers today.\n\n");
                printf("  Back  [Press 1]");
                printf("%s",line);
                getchoice();
                kitchenTwo();
            }
        }
    }

    //========================
    else if(antiqueItem[0]==0 &&antiqueItem[1]==0) //Have Special Item both 'vase' and 'piggy Bank';
    {
        printf("\n\n  Kitchen\n\n"
               " --> in the Refridgerator [1]\n"
               " --> on the Table         [2]\n"
               " --> under the Table      [3]\n\n");
        printf(" --> Fake Flower Vase     [4]\n");
        printf(" --> Piggy Bank           [5]\n\n");
        printf(" --> Back    [Press 6]\n");
        printf("%s",line);
        getSixChoice();
        if(choice == 4)
        {
            if(countViewFlower ==0)
            {
                printf("  \"This item can be viewed once everyday.\"\n\n"
                       "   View the flower?  \n\n"
                       "  Yes [1]    No [2]");
                printf("%s",line);
                getTwoChoice();
                if(choice == 1)
                {
                    countViewFlower=1;
                    system("cls");
                    printf("\n\n  + Looking at flowers makes me feel calm. + \n\n happiness +1\n ");
                    happiness+=1;
                    getch();
                }
                    kitchenTwo();
            }
            else
            {
                system("cls");
                printf
                ("\n\n  You have already viewed flowers today.\n\n");
                printf("  Back  [Press 1]");
                printf("%s",line);
                getchoice();
                kitchenTwo();
            }
        }
        if(choice == 5)
        {
            printf(" Piggy Bank \n\n  Break to get money?\n   Yes [1]   No [2]");
            printf("%s",line);
            getTwoChoice();
            if(choice == 1)
            {
                system("cls");
                printf("\n\n  You lose 1 Piggy Bank\n\n  You get 80 Baht !\n ");
                antiqueItem[0] =-1;
                pocketMoney+=80;
                getch();
            }
            kitchenTwo();
        }


    }

    if(choice ==1)
    {
        if(antiqueItem[2]==0)
        {
            system("cls");
            printf("\n Refridgerator\n\n");
            printf(" [1] A Glass of Water\n\n"
                   "  Back [Press 2]");

            printf("%s",line);
            getTwoChoice();

            if(choice == 1)
            {
                if(countDrink ==0)
                {
                    printf("  \"This item can be used once everyday.\"\n\n"
                           "    Want to drink?   \n\n"
                           "  Yes [1]    No [2]");
                    printf("%s",line);
                    getTwoChoice();
                    if(choice == 1)
                    {
                        countDrink=1;
                        system("cls");
                        printf("\n\n + It feels so fresh!! + \n\n happiness +1");
                        happiness+=1;
                        getch();
                        kitchenTwo();
                    }
                }
                else
                {
                    system("cls");
                    printf
                    ("\n\n  Mysterious glass is producing water... \n\n");
                    printf("  Back  [Press 1]");
                    printf("%s",line);
                    getchoice();
                    kitchenTwo();
                }
            }
        }
        else if(antiqueItem[2]==1)
        {
            system("cls");
            printf("\n\n  Refridgerator is Empty.\n\n");
            printf("  Back  [Press 1]");
            printf("%s",line);
            getchoice();
            kitchenTwo();
        }
    }


    else if(choice == 2)
    {
        system("cls");
        if(countOnTable==0)
        {
            printf("\n\n (2) You get 100 Baht!\n\n"
                   " Back [Press 1]");
            pocketMoney += 100;

            countOnTable++;
            printf("%s",line);
            getchoice();
            kitchenTwo();
        }
        else
        {
            printf("\n\n  Nothing is on the table.\n\n"
                   "  Back [Press 1]\n");
            printf("%s",line);
            getchoice();
            kitchenTwo();
        }
    }

    else if(choice == 3)
    {
        system("cls");
        if(countUnderTable==0)
        {
            printf("\n\n (3) It's seem some money is blown to the ground.\n\n");
            getch();
            printf(" You get 20 Baht!\n\n"
                   " Back [Press 1]");
            pocketMoney+=20;
            countUnderTable++;
            //overwrite(2,pocketMoney);
            printf("%s",line);
            getchoice();
            kitchenTwo();
        }
        else
        {
            printf("\n\n  Nothing is under the table.\n\n"
                   "  Back [Press 1]\n");
            printf("%s",line);
            getchoice();
            kitchenTwo();
        }
    }

}
