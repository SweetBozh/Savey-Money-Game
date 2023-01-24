#include <stdio.h>

char tempChoice;

int countDrink = 0;
int countViewFlower = 0;
int countEndCredit = 0;


int choice;
int process;

char name[8];
int playerData[7]= {0} ;
int antiqueItem[5] = {0};
int heart,target,pocketMoney,happiness,day,health,unhealth;

int full=0;

char line[60] = "\n________________________________________________\n";

//----Aunt Money Day 3------
int countAuntyHouseThree=0;

//----Newspaper Day 6------
int countNewspaper =0;
int countPetShopSix = 0;

//---- Food Aunty Day 9-----
int countOutsideNine =0;

//----Kitchen Money Variable For Day 2----
int countFridge=0;
int countOnTable=0;
int countUnderTable=0;


//---------------------- Help Print ------------------------

void getheart(int heart)
{
    printf(" ");
    for(int i=0; i<heart; i++)
        printf("%c",3);

    printf("\n");
}


void simpleHeart(int heart) //print heart without \n or space
{
    for(int i=0; i<heart; i++)
        printf("%c",3);
}

void header()
{
    getheart(heart);
    printf(" Target: %d/%d\n",pocketMoney,target);
    printf(" DAY %d\n\n",day);
}

//----------------------- Savey Town -------------------------
void saveyTown()
{
    if(day<3)
    {
        system("cls");
        header();
        printf(" Town\n");
        printf(" --> Grocery Store  [1]\n");
        printf(" --> Antique Shop   [2]\n");
        printf(" --> Pet Cafe       [3]\n");
        printf(" --> Home           [4]\n");
        printf("%s",line);
        getFourChoice();
    }

    if(day>=3)
    {
        system("cls");
        header();
        printf(" Town\n");
        printf(" --> Grocery Store  [1]\n");
        printf(" --> Antique Shop   [2]\n");
        printf(" --> Pet Cafe       [3]\n");
        printf(" --> Home           [4]\n\n");
        printf(" --> Aunty House    [5]\n");
        printf("%s",line);
        getFiveChoice();
    }
    if (choice == 1) {groceryStore(); saveyTown();}
    else if (choice ==2 ) antiqueShop();
    else if (choice == 3)
    {
        if(day == 6) petShopSix();
        petCafe();
        saveyTown();
    }
    else if (choice == 4) home();
    else if (choice == 5)
    {
        if(day==3) auntyHouseThree();
        if(day==8) auntyHouseEight();
        else auntyHouse();
        saveyTown();
    }


}

//-----------------end day & save game-----------------------
void endday()
{
    if(countEndCredit!=1)
    {
        system("cls");

        overwrite(0,heart);
        overwrite(2,pocketMoney);
        overwrite(3,happiness);
        overwrite(4,day);   //save that, when come again, next day is day 2
        overwrite(5,health);
        overwrite(6,unhealth);
        overwrite_Antique();
        countDrink=0;
        countViewFlower=0;


        printf("\n\n  Game Saved !!\n\n");

        printf("  Continue [1]\n");
        printf("  Quit     [2]\n");
        printf("%s",line);
        getTwoChoice();
        system("cls");
        printf("\n\n  ");
    }
}

//------------------------- Manage Heart Function --------------------

void manageHeart()
{
    system("cls");
    if(full!=1)
    {
        heart--;
        printf("\n\n  You forgot to Eat !! You lose 1 Heart - %c  \n\n\n",3);
        getch();
    }

    if(heart<=0)
    {
        printf("  You have no heart left.\n\n");

        printf("  GAME OVER !!\n\n\n");


        printf("  Show Result [Press 1]\n  ");
        getchoice();

        system("cls");
        printf("\n\n + -- -- -- -- -- -- -- -- -- -- -- -- -- -- --+\n");
        printf(" |                                             |\n");
        printf(" |           -=-=! GAME OVER !=-=-             |\n");
        printf(" |                                             |\n");
        printf(" |               -:: Player ::-                |\n");
        printf(" |                                             |\n");
        printf(" |                 Name : %-7s              |\n",name);
        printf(" |                  Day : %-2d                   |\n",day);
        printf(" |               Target : %-3d                  |\n",target);
        printf(" |                Money : %-5d                |\n",pocketMoney);
        printf(" |                                             |\n");
        printf(" |       \"Advice - Never forget to use         |\n");
        printf(" |           money for your living.\"           |\n");
        printf(" |                                             |\n");
        printf(" + -- -- -- -- -- -- -- -- -- -- -- -- -- -- --+  \n\n");
        printf("   Continue  [Press 1]\n   ");
        getchoice();
        endday();
        endCredit();
        resetData();

    }
}

void resetData()
{
    //Reset Data
    for(int i=0; i<7; i++)
        playerData[i] = 0;

    for(int i=0; i<5; i++)
        antiqueItem[i] = 1;

    FILE *data,*pn;
    pn = fopen("PlayerName.txt","w");
    fprintf(pn,"");
    fclose(pn);

    overwrite(0,heart);
    overwrite(2,pocketMoney);
    overwrite(3,happiness);
    overwrite(4,day);
    overwrite(5,health);
    overwrite(6,unhealth);
    overwrite_Antique();
}

//--------------------------------- -End Credit ---------------------------------

void endCredit()
{
    system("cls");

    printf("\n\n\n                     - End -                  \n");

    printf("        Thanks for playing 'Savey Money'!! \n\n");

    printf("           We hope you enjoyed our game.    \n\n\n");


    printf("   ___________________________________________  \n\n\n");


    printf("                     Credit                  \n\n");

    printf("           Game Design & Developer Team           \n\n");

    printf("              Warunyupa   Lerdsaeng             \n");
    printf("             Nalin   Suesangiamsakul           \n\n\n");


    printf("  ____________________________________________  \n\n");

    printf("    If you found problems or have any suggestion,  \n");
    printf("       feel free to contact our Developer ! :)     \n\n");

    printf("                        at                      \n");
    printf("            nalin.sue@student.mahidol.edu       \n");
    printf("          warunyupa.ler@student.mahidol.edu         \n\n");

    printf("  _____________________________________________  \n\n");

    printf("    Quit  [1]\n     ");
    getchoice();
    countEndCredit = 1;
}

//--------------------------- Home ----------------------------------
void home()
{
    system("cls");
    if(day!=10 && day!=9 && day!=8 && day!=7)
    {
        printf("\n\n        DAY %d        ",day);
    }
    else if(day == 9)
    {
        screenDay9();
    }
    else if(day == 8)
    {
        screenDay8();
    }
    else if(day == 7)
    {
        screenDay7();
    }
    else if(day == 10)
    {
        screenDay10();
    }

    printf("\n  HOME\n\n");
    printf("  --> Go outside    [1]\n");
    printf("  --> Go to kitchen [2]\n");
    printf("  --> Go to Sleep   [3] (**This will end your day)\n");
    printf("%s",line);
    getThreeChoice();
    if(choice == 1)
    {
        if(day==6) outsideSix();
        if(day==9)
        {
            if(countOutsideNine!=1) outsideDay9();
        }
        saveyTown();
    }
    else if(choice == 2)
    {
        if(day==2) kitchenTwo();
        else kitchen();
        home();

    }
    else if(choice == 3)
    {
        printf("  Do you want to sleep ? \n");
        printf("    Yes [1]    No [2]   \n  ");
        getTwoChoice();
        if(choice == 2) home();
        else return;
        // nothing --> stop all thing in day 1, and return to main();
    }
}

void auntyHouse()
{
    system("cls");
    if(antiqueItem[3]!=0) //Don't Have Hat
    {
        printf("\n\n  Aunty House\n\n");
        printf("  Aunty is watering flowers in her garden.\n\n");
        printf("  Talk to her. [Press 1]\n");
        printf("  Back         [Press 2]\n");
        printf("%s",line);
        getTwoChoice();
    }//If you have item that can give to aunty, will show Give Present[2] and getThreeChoice instead

    else if(antiqueItem[3]==0) //Give Hat?
    {
        printf("\n\n  Aunty House\n\n");
        printf("  Aunty is watering flowers in her garden.\n\n");
        printf("  Talk to her. [1]\n");
        printf("  Give Present [2]\n\n");
        printf("  Back         [3]\n");
        printf("%s",line);
        getThreeChoice();

        if(choice == 2)
        {
            printf(" It's sunny Everyday.\n"
                   " Do you want to give 'Hat' to Aunty?\n\n"
                   "    Yes [1]    No [2]\n");
            printf("%s",line);
            getTwoChoice();
            if(choice == 1)
            {
                system("cls");
                antiqueItem[3] = -1;
                printf("\n\n  Aunty  : You are very lovely kid !! I do really need this.\n\n"
                       "          Thanks!\n\n\n");
                printf("  I'm glad you like it. [Press 1]");
                printf("%s",line);
                getchoice();
                happiness += 2;
                printf("  happiness +2\n ");
                getch();
            }
            auntyHouse();
        }
    }


    if(choice == 1)
    {
        system("cls");
        printf("\n\n  Aunty  : Hello! \n\n");
        printf("  Back    [Press 1]");
        printf("%s",line);
        getchoice();
    }
}

//------------------------ Get 1 to 6 Choice -----------------------

void getchoice()
{
    do
    {
        scanf("%c",&tempChoice);
        if(tempChoice == '1') choice = 1;
    }
    while(tempChoice!='1');


}

void getTwoChoice()
{
    process = 0;
    do
    {
        scanf("%c",&tempChoice);
        if(tempChoice=='1'||tempChoice=='2')
            process = 1;
        if(tempChoice == '1') choice = 1;
        else if(tempChoice =='2') choice =2;
    }
    while(process == 0);

}

void getThreeChoice()
{
    process = 0;
    do
    {
        scanf("%c",&tempChoice);
        if(tempChoice=='1'||tempChoice=='2'||tempChoice=='3')
            process = 1;
        if(tempChoice == '1') choice = 1;
        else if(tempChoice =='2') choice = 2;
        else if(tempChoice =='3') choice = 3;
    }
    while(process == 0);


}

void getFourChoice()
{
    process = 0;
    do
    {
        scanf("%c",&tempChoice);
        if(tempChoice=='1'||tempChoice=='2'||tempChoice=='3'||tempChoice=='4')
            process = 1;
        if(tempChoice == '1') choice = 1;
        else if(tempChoice =='2') choice = 2;
        else if(tempChoice =='3') choice = 3;
        else if(tempChoice =='4') choice = 4;
    }
    while(process == 0);

}

void getFiveChoice()
{
    process = 0;
    do
    {
        scanf("%c",&tempChoice);
        if(tempChoice=='1'||tempChoice=='2'||tempChoice=='3'||tempChoice=='4'||tempChoice=='5')
            process = 1;
        if(tempChoice == '1') choice = 1;
        else if(tempChoice =='2') choice = 2;
        else if(tempChoice =='3') choice = 3;
        else if(tempChoice =='4') choice = 4;
        else if(tempChoice =='5') choice = 5;
    }
    while(process == 0);

}

void getSixChoice()
{
    process = 0;
    do
    {
        scanf("%c",&tempChoice);
        if(tempChoice=='1'||tempChoice=='2'||tempChoice=='3'||tempChoice=='4'||tempChoice=='5'||tempChoice =='6')
            process = 1;
        if(tempChoice == '1') choice = 1;
        else if(tempChoice =='2') choice = 2;
        else if(tempChoice =='3') choice = 3;
        else if(tempChoice =='4') choice = 4;
        else if(tempChoice =='5') choice = 5;
        else if(tempChoice =='6') choice = 6;
    }
    while(process == 0);
}
//---------------------- File Management Function -----------------------------

void checkFile(filepoint)
{
    if(filepoint == NULL)
        printf("File not found");
}

void fetchData(int order) //order 0 = heart; 1 = target; 2 = pocketMoney, 3 = happiness; 4=day; 5=health; 6=unhealth;
{

    int num;
    FILE *data;
    data = fopen("PlayerData.txt","r");
    checkFile(data);

    int i=0;
    while(!feof(data))
    {

        fscanf(data,"%d",&num);
        playerData[i] = num;
        i++;
    }

    if (order == 0)
        heart = playerData[0];

    else if (order ==1)
        target = playerData[1];

    else if (order == 2)
        pocketMoney = playerData[2];

    else if (order == 3)
        happiness = playerData[3];

    else if(order == 4)
        day = playerData[4];

    else if(order == 5)
        health == playerData[5];

    else if(order == 6)
        unhealth == playerData[6];
    fclose(data);
}


void overwrite(int order, int variable)
{
    int num;
    FILE *data;
    data = fopen("PlayerData.txt","r");
    checkFile(data);

    int i=0;
    while(!feof(data))
    {

        fscanf(data,"%d",&num);
        playerData[i] = num;
        i++;
    }
    fclose(data);

    //Overwrite Data
    if(order == 0)
        playerData[0] = heart;
    else if(order == 1)
        playerData[1] = target;
    else if(order == 2)
        playerData[2] = pocketMoney;
    else if (order == 3)
        playerData[3] = happiness;
    else if(order == 4)
        playerData[4] = day;
    else if(order == 5)
        playerData[5] = health;
    else if(order == 6)
        playerData[6] = unhealth;

    data = fopen("PlayerData.txt","w");
    for(int i=0; i<7; i++)
        fprintf(data," %d",playerData[i]);

    fclose(data);
}

//-------------------------------FILE Antique Shop--------------------------------

void fetchAntique() //order 0 = Piggy Bank ; 1 = Fake flower vase; 2 = Water Glass; 3=Hat ; 4=Badminton Racket;
{
    FILE *ai;
    ai = fopen("antiqueItem.txt","r");
    checkFile(ai);

    int num;
    int i=0;
    while(!feof(ai))
    {
        fscanf(ai," %d",&num);
        antiqueItem[i] = num;
        i++;
    }
    fclose(ai);

}

void overwrite_Antique()
{
    FILE *ai;
    ai = fopen("antiqueItem.txt","w");
    for(int i=0; i<5; i++)
        fprintf(ai," %d",antiqueItem[i]);;
    fclose(ai);
}



//------------------------------- Kitchen ---------------------------------
void kitchen()
{
    //Which has been Sold, number would be 0, that means, Player has that item!!
    system("cls");

    //========================
    if(antiqueItem[0]!=0 && antiqueItem[1]!=0) //Have no special Item
    {
        printf("\n\n  Kitchen\n\n");
        printf(" --> Refridgerator [1]\n");
        printf(" --> Back          [2]\n");
        printf("%s",line);
        getTwoChoice();
    }

    //========================
    else if(antiqueItem[0]==0 && antiqueItem[1]!=0) //Have piggyBank but not have Vase
    {
        printf("\n\n  Kitchen\n\n");
        printf(" --> Refridgerator [1]\n");
        printf(" --> Piggy Bank    [2]\n");
        printf(" --> Back          [3]\n");
        printf("%s",line);
        getThreeChoice();
        if(choice == 2)
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
            kitchen();
        }
    }
    //========================
    else if(antiqueItem[0]!=0 &&antiqueItem[1]==0) //Have vase, but not have piggy Bank
    {
        printf("\n\n  Kitchen\n\n");
        printf(" --> Refridgerator     [1]\n");
        printf(" --> Fake Flower Vase  [2]\n");
        printf(" --> Back              [3]\n");
        printf("%s",line);
        getThreeChoice();

        if(choice == 2)
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

            }
            else
            {
                system("cls");
                printf
                ("\n\n  You have already viewed flowers today.\n\n");
                printf("  Back  [Press 1]");
                printf("%s",line);
                getchoice();
            }
            kitchen();
        }
    }

    //========================
    else if(antiqueItem[0]==0 &&antiqueItem[1]==0) //Have both vase and piggy Bank;
    {
        printf("\n\n  Kitchen\n\n");
        printf(" --> Refridgerator     [1]\n");
        printf(" --> Fake Flower Vase  [2]\n");
        printf(" --> Piggy Bank        [3]\n");
        printf(" --> Back              [4]\n");
        printf("%s",line);
        getFourChoice();
        if(choice == 2)
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

            }
            else
            {
                system("cls");
                printf
                ("\n\n  You have already viewed flowers today.\n\n");
                printf("  Back  [Press 1]");
                printf("%s",line);
                getchoice();

            }
            kitchen();
        }
        if(choice == 3)
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
            kitchen();
        }


    }
    //========================
    if(choice ==1)
    {
        if(antiqueItem[2]==0) //If have Mysterious Water Glass
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
                        printf("\n\n + It feels so fresh!! +\n\n happiness +1\n ");
                        happiness+=1;
                        getch();
                        kitchen();
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
                    kitchen();
                }
            }
            else if(choice ==2) kitchen();
        }

        else if (antiqueItem[2]==1)//Don't have mysterious glass.
        {
            system("cls");
            printf("\n\n  Refridgerator is Empty.\n\n");
            printf("  Back  [Press 1]");
            printf("%s",line);
            getchoice();
            kitchen();
        }
    }
}
