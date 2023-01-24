#include<stdio.h>


void screenDay7(){
    char str7_1[30] = "  * . . *. . *  . *  .* . ";
    char str7_2[30] = "  . .* .  * .    . .* . *";
    printf("\n\n    * . . *. . *  .%s\n",str7_1);
    printf("        .  .       DAY 7      . .\n");
    printf("   * . . *. . *  .%s\n\n",str7_2);
}
void homeDay7(){
    printf("\n\n  Day 7 - Start [Press 1]  ");
    getchoice();
    system("cls");

    screenDay7();
    printf("          Message !!  \n");
    getch();
    system("cls");

    screenDay7();
    getch();
    system("cls");

    screenDay7();
    printf("          Message !!  \n");
    getch();
    system("cls");

    screenDay7();
    getch();
    system("cls");

    screenDay7();
    printf("\n\n    Message : Grocery Store is recruiting \n           a new Part-Time Staff.\n"); getch();
    system("cls");
    screenDay7();
    printf("\n\n    Shopkeeper  : Hi, %s !! , I have a diarrhea.\n",name);
    printf("                  Could you come help out at the shop for a moment?\n\n");
    printf("    %s  : \n\n",name);
    printf("    Yes, of course.       [Press 1]\n");
    printf("    Sorry, I'm so busy    [Press 2]\n");
    printf("%s",line);
    printf("\n  * Please be aware that you can see"
           "\n   this scene only 'once'.\n\n ");
    getTwoChoice();
    if(choice==1){
        system("cls");
        screenDay7();
        printf("\n\n    Shopkeeper  : Thanks!! Follow me.\n\n",name);
        printf("    Go to Grocery Store [Press 1]\n\n    ");
        getchoice();
        groceryStoreDay7();
    }
    else {
        home();
    }
}

void groceryStoreDay7(){
    system("cls");
    printf("\n          @Grocery\n");
    printf("            . . .\n");
    getch();
    system("cls");
    printf("\n          @Grocery\n");
    printf("            ...\n");
    getch();
    system("cls");
    printf("\n          @Grocery\n");
    printf("            . . .\n");
    getch();
    system("cls");
    printf("\n                          @Grocery\n\n");
    printf("    Customer    : Excuse me, Do you sell some food?\n\n");
    printf("    %s  : \n\n",name);
    printf("    Yes, but please wait a few moment. [Press 1]\n");
    printf("    Sorry, we don't sell them.         [Press 2]\n");
    printf("%s",line);
    getTwoChoice();
    if(choice==1){
        system("cls");
        printf("\n                      @ Grocery\n\n");
        printf("    Customer    : Excuse me, Do you sell some food?\n\n");
        printf("    %-7s     : ",name);
        printf("Oh, Yes! But please wait a minute.\n                  The shopkeeper is in the toilet now!\n\n");
        printf("    Customer    : Oh, okay.\n\n\n");
        printf("    - wait for the shopkeeper - [1]\n\n    ");
        getchoice();
        system("cls");
        printf("\n                      @ Grocery\n");
        printf("\n\n....");
        getch();
        printf(" ... ");
        getch();
        printf(" ..");
        getch();
        printf(" . ");
        getch();
        printf(" 10 minutes later. .. ... ....\n\n");
        getch();
        printf("    %-7s : Uncle, the customer has been waiting for you.\n              She wants to buy some food.\n\n",name);
        getch();
        printf("    Shopkeeper  : Thank you very much.\n                  And this for you, for your giving a hand.\n  ",name); getch();
        printf("\n\n    You get 200 Baht !\n ");
        getch();
        printf("%s",line);
        printf("\n    %-7s : Oh! Thanks!! And you're welcome.\n\n",name);
        pocketMoney+=200;
        printf("    Go to Town    [Press 1]\n\n    ");
        getchoice();
    }
    else {
        system("cls");
        printf("\n                          @ Grocery\n\n");
        printf("    Customer    : Excuse me, Do you sell some food?\n\n");
        printf("    %-7s     : ",name);
        printf("Sorry, we don't sell them.\n                  Please look at other shops instead.\n\n");
        printf("    Customer    : Oh, okay.\n\n\n");
        printf("    - wait for the shopkeeper - [1]\n\n    ");
        getchoice();
        system("cls");
        printf("\n                          @ Grocery\n");
        printf("\n\n....");
        getch();
        printf(" ... ");
        getch();
        printf(" ..");
        getch();
        printf(" . ");
        getch();
        printf(" 10 minutes later. .. ... ....\n\n");
        getch();
        printf("    Shopkeeper  : Thanks you very much.\n                  And this for you, for your giving a hand.\n  ",name);
        getch();
        printf("\n\n    You get 100 Baht !\n\n ");
        pocketMoney+=100;
        getch();
        printf("%s",line);
        printf("\n    %-7s : Oh! Thanks!! And your welcome.\n\n",name);
        printf("    Go to Town   [Press 1]\n\n    ");
        getchoice();
    }
    saveyTown();
}

daySeven(){
    homeDay7();
}
