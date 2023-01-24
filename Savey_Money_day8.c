#include<stdio.h>

//เราทำ ให้ สามารถ ออกฉากนี้ไปแล้ว ยังย้อนกลับมาช่วยจอร์ชอีกได้นะ
// I make the player still be able to help Josh, if they haven't help yet.

//----Josh Money Day 8------
int countHelpJosh1 = 0;
int countHelpJosh2 = 0;


void screenDay8()
{
    char str8[20] = "~.^^  ~.'' ~. '.~";
    //------Day6------
    printf("\n\n    %s %s\n",str8,str8);
    printf("     ~.^^~^     DAY 8     ~.^^~^\n");
    printf("   %s  %s  \n\n",str8,str8);
}
void knockDay8()
{
    printf("\n\n  Day 8 - Start [Press 1]  ");
    getchoice();
    system("cls");

    screenDay8();
    printf("       knock!!\n");
    getch();
    system("cls");

    screenDay8();
    printf("                      knock!!\n");
    getch();
    system("cls");

    screenDay8();
    printf("                knock!!\n");

}
void dayEight()
{
    knockDay8();
    printf("\n  Someone is knocking at the Front door\n\n");
    printf("  Open the door             [Press 1]\n");
    printf("  Look through the Peephole [Press 2]\n  ");
    getTwoChoice();

    if(choice==2)
    {
        system("cls");
        screenDay8();
        printf("\n\n       It's just a little boy!\n");
        printf("\n       Hey,kids.What's the matter?\n  ");
        getch();
    }
    system("cls");
    screenDay8();
    printf("\n\n  Boy: Hello, %s! I'm Josh. Your neighbour!\n       Aunty said you are Good at Math.\n",name);
    printf("\n       Could you help me with my homework? %c\n\n",2);
    printf("\n  Alright. [Press 1]");
    printf("%s",line);
    getchoice();
    auntyDay8();
}
void auntyDay8()
{
    int dui=0;
    float ans8_1,key8_1;
    int ans8_2;

    system("cls");
    printf("%s",line);
    printf("               @Aunty Home\n\n");
    printf("  Josh    : Here... This problem is very difficult.\n            Can you take a look?\n\n");
    printf("  %-7s : O^O hmmm~\n\n\n  Aha.  [Press 1]",name);
    printf("%s",line);
    getchoice();

    //First Problem
    //Check First If already help??
        system("cls");
        printf("%s",line);
        {
        printf("              @Aunty Home\n\n");
        printf("  Math Homework\n\n");
        printf("  1. (9+8)*7%%(4+3)/2-5 = ____\n");
        printf("\n  I think... It's ");
        scanf("%f",&ans8_1);
        key8_1 = (9+8)*7%(4+3)/2-5;
        //Check Answer
        if(ans8_1==key8_1)
        {
            printf("\n  Correct, You Get 60 Baht!\n");
            pocketMoney+=60;
            countHelpJosh1 = 1;
            ++dui;
        }
        else printf("\n  Incorrect.\n");

        printf("\n  Next Question   [1]\n");
        printf("  Skip            [2]");
        printf("%s",line);
        getTwoChoice();
    }

    //Next Question
    //Check If already help??
        system("cls");
        printf("%s",line);
        printf("              @Aunty Home\n\n");
        if(choice==1)
        {
            //Second Problem
            printf("  Math Homework\n\n");
            printf("  2. Fill a number (integer)\n");
            printf("     4, 6, 8, 12, 12, 18, ___\n\n   ");
            scanf("%d",&ans8_2);
            if(ans8_2==16)
            {
                printf("\n  Correct, You Get 100 Baht!\n");
                pocketMoney+=100;
                countHelpJosh2 = 1;
                ++dui;
            }
            else
            {
                printf("\n  Incorrect.\n");
            }

            printf("\n  Next    [1]");
            printf("%s",line);
            getchoice();
            if(choice==1){
                system("cls");
                printf("%s",line);
                printf("              @Aunty Home\n\n");
                boysatiDay8(&dui);
            }
        }
        else
        {
            boysatiDay8(&dui);
        }

}
void boysatiDay8(int *a)
{
    if(*a==2)
    {
        printf("  Josh    : Thank you very much! I give you this as a present!\n\n");
        printf("  ...You get 1 Happy bear. ...\n\n");
        happiness+=2;
        printf("  happiness + 2 \n");
        getch();
        printf("%s",line);
        printf("\n\n   'Hmm.. This doll looks so precious to him.\n   I shouldn't keep it.' ");
        getch();
        printf("\n\n   Tell him   [Press 1]");
        printf("%s",line);
        getchoice();

        system("cls");
        printf("\n\n  %-7s : Thanks for your kindness,\n            but you should better keep it with you. %c",name,2);
        getch();
        printf("\n\n            This Little Bear will certainly miss you so much !! ",name);
        getch();
        printf("\n\n  Josh    : If you say so....  ");
        getch();
        printf("\n\n  ...You lost 1 Happy bear. ...");
        getch();
        printf("\n\n  Josh    : Anyway, Thank you very much!\n\n");
        printf("  %-7s : You're welcome !!\n\n",name);
    }
    else if(*a==1)
    {
        printf("  Josh    : Thank you very much\n");
        printf("  %-7s : You're welcome.\n\n",name);
        happiness+=1;
        printf("  happiness + 1\n  ");
        getch();
        printf("\n\n");
    }
    else
    {
        printf("  Josh    : Even if you can't help much, but thank you very much!\n\n");
        printf("  No Problem... ");
        getch();
        printf("\r               ");
        printf("\n  %-7s : Bye Bye, Josh\n\n\n",name);
    }

    printf("  Back to home    [Press 1]");
    printf("%s",line);
    getchoice();
    home();
}

/*void homeSetup8(){
    system("cls");
    screenDay8();
    printf("\nHome\n");
    printf("Go to kitchen   [Press 1]\n");
    printf("Go outside      [Press 2]\n");
    getTwoChoice();
    printf("%s",line);
    if(choice==1){
        kitchenSetup8();
    }
    else outsideSetup8();
}
void kitchenSetup8(){
    system("cls");
    printf("  Kitchen\n  --> On the Table[1]\n");
    printf("\n\n  Back [Press 1]");
    printf("%s",line);
    getchoice();
    if(choice==1){
        system("cls");
        homeSetup8();
    }
}
void outsideSetup8(){
    saveyTown();
    printf("%s",line);
    getFourChoice();
    /*
    if(choice==1){
        grocery_Store();
    }
    else if(choice==2){
        antique_Store();
    }
    else if(choice==3){
        pet_Shop_Day6();
    }
    else
        homeSetup();

    //ÅººÃÃ·Ñ´191 ÍÍ¡ä´é ãÊèÁÒàªç¤à©Âæ
    if(choice==4) homeSetup8();
}

mainDayEight(){
    dayEight();
}*/

void auntyHouseEight()
{
    system("cls");
    if(antiqueItem[3]!=0) //Don't Have Hat
    {
        printf("\n\n  Aunty House\n\n");
        printf("  Aunty is watering flowers in her garden.\n\n");
        printf("  Talk to her.   [1]\n");
        printf("  Help Josh      [2]\n\n");
        printf("  Back           [3]\n");
        printf("%s",line);
        getThreeChoice();

        if(choice == 2)
        {
            if(countHelpJosh1 ==1 || countHelpJosh2 ==1)
            {
                system("cls");
                printf("\n\n  You already have helped Josh !!\n  ");
                getch();
                auntyHouseEight();
            }
            else auntyDay8();
        }
    }//If you have item that can give to aunty, will show Give Present[2] and getThreeChoice instead

    else if(antiqueItem[3]==0) //Give Hat?
    {
        printf("\n\n  Aunty House\n\n");
        printf("  Aunty is watering flowers in her garden.\n\n");
        printf("  Talk to her. [1]\n");
        printf("  Give Present [2]\n");
        printf("  Help Josh    [3]\n\n");
        printf("  Back         [4]\n");
        printf("%s",line);
        getFourChoice();

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
            auntyHouseEight();
        }
        else if(choice == 3)
        {
            if(countHelpJosh1 ==1 || countHelpJosh2 ==1)
            {
                system("cls");
                printf("\n\n  You already have helped Josh !!\n  ");
                getch();
                auntyHouseEight();
            }
            else auntyDay8();
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
