#include<stdio.h>

void screenDay9(){
    char str9[20] = "~ .' oOo . ~  * . ' ";
    system("cls");
    printf("\n\n  %s%s\n",str9,str9);
    printf("  '  '      ' '    DAY 9     ' '  '   '\n");
    printf("      %s%s\n\n",str9,str9);
}

void outsideDay9(){



    if(countOutsideNine!=1){
            countOutsideNine = 1;
    screenDay9();
    printf("\n               @Home(outside)\n\n\n");
      printf("        (You go to front of the door)           \n\n");
    getch();
      printf("                    0^0                           \n");
    getch();
    screenDay9();
    printf("\n               @Home(outside)\n\n\n");
    printf("        (You go to front of the door)           \n\n");
    printf("                    -^-                         \n");
    getch();
    screenDay9();
    printf("\n               @Home(outside)\n\n\n");
    printf("        (You go to front of the door)           \n\n");
    printf("                    0^0                         \n\n\n");
    getch();

    printf("  It seems aunty is watering her garden again...  \n\n");
  printf("\n             Talk to her     [Press 1]\n");
    printf("%s",line);
    getTwoChoice();
    if(choice==1){

        screenDay9();
        printf("                   @Home(outside)                                   \n\n");

        printf("    Aunty : Hello, %s !                                                           \n\n",name);
        getch();
        printf("          It  seems our little puppy is running out of food                      \n\n");
        getch();
        printf("          Could you please go the 'Pet Cafe' and bring me '1 bag of dog food' ?    \n\n");
        getch();
        printf("    %s :                                                                          \n",name);
        printf("          No problem.     [Press 1]                                              \n");
        printf("          Sorry, I can't. [Press 2]                                              \n");
        printf("%s",line);
        getTwoChoice();
        if(choice==1){
            screenDay9();
            printf("\n\n  %-7s : No problem.                                                            \n\n",name);
            getch();
            printf("            What kind of food that he wants?, Dry or Wet?                        \n\n",name);

            printf("  Aunty   : Ahm... I have already ordered. Please just pick it up for me.      \n\n");
            getch();
            printf("  %-7s : Okay.                                                                   \n\n\n",name);

            getch();
            printf("          -- You Should to go to Pet Cafe --                            \n\n");
            printf("                Go to Pet Cafe [Press 1]                                \n");
            printf("%s",line);
            getchoice();
            pet_shop_Day9();
        }
        else {
            screenDay9();
            printf("\n\n  %-7s : Sorry, I can't                                                        \n\n\n",name);

            printf("      -- Today is a Chill Day --                                          \n\n");
            printf("         Go to Town  [Press 1]                                          \n");
            printf("%s",line);
            getchoice();
            saveyTown();
        }

    }
    }
}

void pet_shop_Day9(){
    system("cls");
    printf(" .o.o.o.o.o.o.o.o.o.o.o.o.o.o.o.o.o.o.o.o.o.o.o.o.o.o.o.o.o.o.o.o.\n\n");
    printf("                          Welcome to Pet Cafe                     \n");
    printf("                           __         /\\     /                   \n");
    printf("                      ___()'`;       (' )   (                    \n");
    printf("                    /,    /`          (  \\  )                    \n");
    printf("                    \\\\""--\\\\            |(__)/                  \n\n\n");


    printf("  Shopkeeper : Hi, %s ! We meet again.                 \n\n",name);
    getch();
    printf("  %-7s    : Hi! %c                                   \n",name,2); getch();
    printf("               For today, aunty wants me to pick up     \n",name);
    printf("               dog food that she has ordered.          \n\n");
    getch();
    printf("  Shopkeeper : Oh, I just prepared it, wait a moment.       \n");
    getch();
    system("cls");
    printf("\n                      Waiting...                   \n\n");
    printf("\n   ...^-^...                                          \n");
    getch();
    system("cls");
    printf("\n                      Waiting...                   \n\n");
    printf("\n                  ...^-^...                           \n");
    getch();
    system("cls");
    printf("\n                      Waiting...                   \n\n");
    printf("\n                              ...^-^...               \n");

    getch();
    system("cls");
    printf(" .o.o.o.o.o.o.o.o.o.o.o.o.o.o.o.o.o.o.o.o.o.o.o.o.o.o.o.o.o.o.o.o.\n\n");
    printf("                          Welcome to Pet Cafe                     \n");
    printf("                           __         /\\     /                   \n");
    printf("                      ___()'`;       (' )   (                    \n");
    printf("                    /,    /`          (  \\  )                    \n");
    printf("                    \\\\""--\\\\            |(__)/                  \n\n\n");


    printf("     Shopkeeper  : OK. here you are                        \n\n\n");

    getch();
    printf("                - You receive 1 bag of dog food -            \n\n\n");

    getch();
    printf("     %-7s   : Thank you very much ! %c                    \n\n\n",name,2);

    getch();
    printf("                    - Let's give it to Aunty -              \n");
    printf("                            [Press 1]                        \n");
    getchoice();
    if(choice==1){
        backtoAunty();
    }
}
void backtoAunty(){
    screenDay9();

    printf("\n                   @Home (Outside)                                             \n\n\n");

    printf("                Call Aunty [Press 1]                     \n");
    getchoice();
    if(choice==1){
        system("cls");
        printf("\n\n                   @Home (Outside)                         \n\n");
        printf("                      Aunty!!                                 \n\n",name);
        getch();

        system("cls");
        printf("\n\n                   @Home (Outside)                   \n\n\n");
        printf("                                   Aunty!!!!        \n\n",name);
        getch();

        system("cls");
        printf("\n\n                   @Home (Outside)                   \n\n\n");
        printf("            Aunty!!!!!!                        \n\n",name);
        getch();
        system("cls");
        printf("\n\n                   @Home (Outside)                   \n\n\n");
        printf("   Aunty   : Oh!! , too fast !!                           \n");
        getch();

        system("cls");
        printf("\n\n                   @Home (Outside)                   \n\n\n");
        printf("   Aunty   : Thank you very much, Sweetie. %c             \n\n",2);
        getch();
        printf("   %-7s : No Problem! %c                           \n\n",name,2);
        getch();

        system("cls");
        printf("\n\n                   @Home (Outside)                   \n\n\n");

        printf("   Aunty   : And this is for you                           \n\n\n");

        printf("               - You receive 300 Baht. -             \n\n");
        getch();
        printf("   %-7s :                                            \n",name);
        printf("            Oh, that is too much !       [Press 1]\n");
        printf("            Thank you.                   [Press 2]\n");
        printf("%s",line);
        getTwoChoice();

        if(choice==1){
            system("cls");
            printf("\n\n                   @Home (Outside)                   \n\n\n");
            printf("   %-7s : Thank you ! but isn't that too much...?            \n\n",name);getch();
            printf("   Aunty   : No, it's not at all too much. Please keep it. :)  \n\n\n"); getch();

            printf("               - You receive 300 Baht. -              \n\n");
            getch();
            printf("   Happiness + 1\n\n\n");
            happiness+=1;
            getch();
            pocketMoney+=300;
        }
        else {
            system("cls");
            printf("\n\n                   @Home (Outside)                   \n\n\n");
            printf("   %-7s : Thank you !! %c                                \n\n",name,3);
            getch();
            printf("               - You receive 300 Baht. -             \n\n\n");
            getch();
            pocketMoney+=300;
        }
        printf("   Back to home  [Press 1]  \n   ");
        getchoice();
        home();
}
}

dayNine()
{
    printf("\n\n  Day 9 - Start [Press 1]  ");
    getchoice();
    outsideDay9();
}
