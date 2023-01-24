#include<stdio.h>


void screenDay10(){
    char str10[ ] = " _.~'~.*.~'~._.~'~.*.~'~._.~'~.*.~'~._.~'~._ ";
    printf("\n %s                                                         \n",str10);
    printf("  ~  .     -   *    DAY 10    *  -    ~    *                  \n");
    printf(" %s                                                           \n\n",str10);
}
void homeDay10(){
    char ride; // use in ride a bicycle
    int i; // use in ride a bicycle

    screenDay10();
    printf("                                                              \n");
    printf("            This is the last day...                           \n\n");
    printf("    Phone: Ringggg!!!                                         \n");
    getch();

    system("cls");
    screenDay10();
    printf("                                                              \n");
    printf("            This is the last day...                           \n\n");
    printf("                 Phone:R i n g g g g! ! !                     \n");
    getch();

    system("cls");
    screenDay10();
    printf("                                                              \n");
    printf("            This is the last day...                           \n\n");
    printf("    Phone: Ringggg!!!                                         \n\n\n");
    getch();
    printf("    Answer the phone        [Press 1]                         ");
    printf("%s",line);
    getchoice();
    if(choice==1)
    {
        system("cls");
        screenDay10();
        printf("\n    Deliver Employer : Hi, %s!                                  \n\n",name); getch();

          printf("                  There's a new order from Ms.Martha.                  \n\n");
        getch();
          printf("         Is it okay for you to deliver the 'goods' to her home ?   \n\n\n");
        getch();

          printf("    %s : Ummm... \n\n\n",name); getch();

          printf("     Let me think about it first. [Press 1]  ");
        getchoice();

        system("cls");
        screenDay10();
        printf("\n   Deliver Employer : Of course, there is a wage as well.   \n\n");
        getch();
        printf("   %s : In that case...                                \n\n\n",name); getch();


        printf("   Sure! No problem. [Press 1]  ");
        getchoice();

        system("cls");
        screenDay10();
        printf("\n   Deliver Employer : Good.\n\n");getch();

        printf("                      Take a bicycle with you,          \n\n"); getch();

        printf("                      Ms.Martha Home is quite far away.       \n\n\n"); getch();


        printf("                Can you ride a bicycle ?                 \n\n");

        printf("                 Yes [1]        No [2]            \n\n");
        printf("_____________________________________________________________\n");
        getTwoChoice();

        if(choice==1||choice==2)
        {
            printf("\n                 Whether answer is YES or NO.            \n");
              printf("    You can ride, because anything can happen in this game.  \n\n");
            getch();

            system("cls");
          printf("\n\n                        @home (outside)                       \n\n\n");
            printf("                <-|->                                         \n");
            printf("               ___|                                           \n");
            printf("             (_) (_)                                          \n\n");
            printf("    [Press R to RIDE a Bicycle]                                 \n");
            printf("%s",line);



          do{
                scanf("%c",&ride);
                if(ride=='r'||ride=='R')
                {   // ride bicycle
                    printf("                                                              \n\n");
                    for(i=0;i<55;i++)
                    {
                        bicycle(i,i);
                    }
                    //already ride a bicycle --> @ Martha's House
                    marthaHome10();

                }
            }while(ride!='r'&&ride!='R');
        }
    }
}

void bicycle(int i, int x){
    //to ride a bicycle
    system("cls");
    printf("\n\n");
    printf(" . oOOo    ^^ . oOo   ^^ oO0Oo .  oOOo    ^^   oOo   ^^ oO0Oo ..\n\n");

    printf("                      Way to Ms.Martha's House\n\n");

    for (i=0; i<=x; i++) printf(" ");  printf("   <-|->\n");
    for (i=0; i<=x; i++) printf(" ");  printf("  ___| \n");
    for (i=0; i<=x; i++) printf(" ");  printf("(_) (_) ");
    printf("\n - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - \n");
    //printf("\n_ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ \n");
    Sleep(50);
}
void marthaHome10(){
    system("cls");
    printf("\n\n                      @Ms.Martha's House                       \n\n");

    printf("    Ring a bell   [Press 1]  ");
    getchoice();
    if(choice==1){}
        system("cls");
        printf("\n\n                      @Ms.Martha's House                       \n\n");

        printf("    Ding Dong ~~                                                  \n");

        getch();
        system("cls");
        printf("\n\n                      @Ms.Martha's House                       \n\n");

        printf("    Ding Dong~ ~ ~ ~ ~                                            \n");

        getch();
        system("cls");

        printf("\n\n                      @Ms.Martha's House                       \n\n");
        printf("    Ding Dong ~~~~~~~~~~                                          \n\n\n");

        getch();
        printf("  Ms.Martha : Hello?                                             \n\n");
        getch();
        printf("  %-7s   : I have got a package for you.                         \n\n",name);
        getch();
        printf("  Ms.Martha : Oh, thanks!                                         \n\n"); getch();

        printf("  %-7s   : You're welcome!! Madam                               \n\n\n",name); getch();


        printf("                 - Go back to Deliver Employer -                \n\n");
        printf("                            [Press 1]                           \n");
        getchoice();
        if(choice==1){
            system("cls");
            screenDay10();
            printf("\n   Deliver Employer : Great Job! '%s' This is your wages.       \n\n",name);
            printf("                      Thanks for helping!                     \n\n\n"); getch();

            printf("   %s : It's my pleasure !                                    \n\n\n",name);
            getch();
            printf("                 - You get 250 Baht. -                   \n\n\n"); getch();
            pocketMoney+=250;

            printf("   Go to town   [Press 1]  ");
            getchoice();

            saveyTown();
        }
}
dayTen(){
    printf("\n\n  Day 10 - Start [Press 1]  ");
    getchoice();
    system("cls");
    homeDay10();

}
