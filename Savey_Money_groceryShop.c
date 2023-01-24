#include <stdio.h>
#include <dos.h>

FILE *fplist;
int a1,a2,a3;



//prototype all function
void listfood();
void listfood2();
void choose();
void want();
int deliveryFunc();

void delay(int milsec){ //Use to Delay Little Bit After Show Loading Complete! Before Start Game

clock_t startTime = clock();

while(clock() < (startTime + milsec));

}

void stack();
void eat();


int noMoney=0; //Global Variable;
int menu1,menu2,menu3; //number of the available menu today;

int random1(){
    do{
        srand(time(NULL));
        a1 = rand()%5;
    }while((a1==a2)||(a1==a3));
}
int random2(){
   do{
        srand(time(NULL));
        a2 = rand()%5;
    }while((a2==a1)||(a2==a3));
}
int random3(){
    do{
        srand(time(NULL));
        a3 = rand()%3;
    }while((a3==a1)||(a3==a2));
}

void dolist(){
    printf("  Loading ...");
    int r1,r2,r3;
    random1();
    random2();
    random3();

    fplist = fopen("listfood2.txt","w");
    fprintf(fplist,"  =*=*&=*=*=&=*=*&=*=*&=*=*&=*=*&=*=*&=*=*&=*=*&=*=*&=*=*&=*=*&=*=*&=\n");
    fprintf(fplist,"||                               MENU                                || \n");
    fprintf(fplist,"||                                                                   || \n");
    if(a1==0){
        fprintf(fplist,"|| [1]  Pad Thai ......................................... Price 39  ||\n");
        menu1 =1;
    }
    else
        fprintf(fplist,"|| [1]                        -- empty --                            ||\n");
    if(a3==0){
        fprintf(fplist,"|| [2]  Steamed chicken with rice ........................ Price 29  ||\n");
        menu3 = 2;

    }
    else
        fprintf(fplist,"|| [2]                        -- empty --                            ||\n");
    if(a3==1){
        fprintf(fplist,"|| [3]  Rice topped with stir-fried pork and basil ....... Price 29  ||\n");
        menu3 = 3;
    }
    else
        fprintf(fplist,"|| [3]                        -- empty --                            ||\n");

    if(a1==1){
        fprintf(fplist,"|| [4]  Noodles .......................................... Price 29  ||\n");
        menu1 = 4;
    }
    else
        fprintf(fplist,"|| [4]                        -- empty --                            ||\n");
    if(a1==2){
        fprintf(fplist,"|| [5]  Spahetti Carbonara ............................... Price 49  ||\n");
        menu1 = 5;
    }
    else
        fprintf(fplist,"|| [5]                        -- empty --                            ||\n");
    if(a3==2){
        fprintf(fplist,"|| [6]  Canned fish ...................................... Price 15  ||\n");
        menu3 = 6;
    }
    else
        fprintf(fplist,"|| [6]                        -- empty --                            ||\n");
    if(a1==3){
        fprintf(fplist,"|| [7]  Grilled pork with sticky rice .................... Price 20  ||\n");
        menu1 = 7;
    }
    else
        fprintf(fplist,"|| [7]                        -- empty --                            ||\n");
    if(a2==0){
        fprintf(fplist,"|| [8]  French Fries ..................................... Price 15  ||\n");
        menu2 = 8;
    }
    else
        fprintf(fplist,"|| [8]                        -- empty --                            ||\n");
    if(a2==1){
        fprintf(fplist,"|| [9]  Juicy meat Hamburger ............................. Price 39  ||\n");
        menu2 = 9;
    }
    else
        fprintf(fplist,"|| [9]                        -- empty --                            ||\n");
    if(a2==2){
        fprintf(fplist,"|| [10] Instant Noodles ...................................Price 6   ||\n");
        menu2 = 10;
    }
    else
        fprintf(fplist,"|| [10]                       -- empty --                            ||\n");
    if(a2==3){
        fprintf(fplist,"|| [11] A loaf of Bread .................................. Price 19  ||\n");
        menu2 = 11;
    }
    else
        fprintf(fplist,"|| [11]                       -- empty --                            ||\n");
    if(a2==4){
        fprintf(fplist,"|| [12] Congee with spinach .............................. Price 29  ||\n");
        menu2 = 12;
    }
    else
        fprintf(fplist,"|| [12]                       -- empty --                            ||\n");
    if(a1==4){
        fprintf(fplist,"|| [13] Morning,feel good Salad .......................... Price 29  ||\n");
        menu1= 13;
    }
    else
        fprintf(fplist,"|| [13]                       -- empty --                            ||\n");
        fprintf(fplist,"||  ======================== !!! SALE !!! =========================  ||\n");
        fprintf(fplist,"|| [14] Lay .............................................. Price 9   ||\n");
        fprintf(fplist,"|| [15] Water ............................................ Price 7   ||\n");
        fprintf(fplist,"||                                                                   ||\n");
    fprintf(fplist," =*=*&=*=*=&=*=*&=*=*&=*=*&=*=*&=*=*&=*=*&=*=*&=*=*&=*=*&=*=*&=*=*&=*=\n");
    fclose(fplist);
    printf("\r  ..Loading Complete ! "); delay(1374);
    printf("\r                             ");
}
void listfood(){
    system("cls");
    header();
    listfood2();
    choose();
}
void listfood2(){
    char showlist;
    fplist = fopen("listfood2.txt","r");
    for( ; ; ){
        showlist= fgetc(fplist);
        if(showlist==EOF) break;
        putchar(showlist);
    }
    fclose(fplist);
}
void choose(){
    printf("\n  Chef : Would you like to eat?\n");
      printf("     Yes >>[1]     Leave >>[2]  ");
      printf("%s",line);
     getTwoChoice();

    if(choice==1){

        printf("  Choose menu (number) : ");
        want();
        listfood();
    }
}

void  want(){
    int a,cost;
       scanf("%d",&a);
        if(a == menu1 || a== menu2|| a== menu3|| a==14 || a==15){ //Must Select Only What in the menu, otherwirse will turn you back to the foodlist.
            deliveryFunc(a);
            if(noMoney==0)
                eat(a); //If have enough money to buy, then buy and eat.
            }
        else{
                system("cls");
                printf("\n\n\n  Sorry, That's not on the menu!!\n  ");
                getch();
        }
}

int deliveryFunc(int a){

    system("cls");
    printf("\n\n\n");
    //คิดราคาอาหาร
    if(a==1){
        if(pocketMoney-39<0){
            printf("  You don't have enough money!!\n  "); getch();
            noMoney=1;
            }
        else {
            pocketMoney -=39;
            printf("\n  'Pad Thai' is so delicious!! I can live all day!\n");
            printf("\n   You have spent 39 Baht.\n  "); getch();
            noMoney=0;
        }
    }
    else if(a==2){
        if(pocketMoney-29<0){
            printf("  You don't have enough money!!\n  ");getch();
            noMoney=1;
            }
        else {
            pocketMoney -=29;
            printf("\n  'Steamed chicken with rice' is so delicious!! I can live all day!\n");
            printf("\n   You have spent 29 Baht.\n  ");getch();
            noMoney=0;
        }
    }
    else if(a==3){
        if(pocketMoney-29<0)
            {
            printf("  You don't have enough money!!\n  ");getch();
            noMoney=1;
            }
        else {
            pocketMoney -=29;
            printf("  'Rice topped with stir-fried pork and basil' is so delicious!! I can live all day!\n");
            printf("\n   You have spent 29 Baht.\n  ");getch();
            noMoney=0;
        }
    }
    else if(a==4){
        if(pocketMoney-29<0)
           {
            printf("  You don't have enough money!!\n  ");getch();
            noMoney=1;
            }
        else {
            pocketMoney -=29;
            printf("  'Noodles' is so delicious!! I can live all day!\n");
            printf("\n   You have spent 29 Baht.\n  ");getch();
            noMoney=0;
        }
    }
    else if(a==5){
        if(pocketMoney-49<0)
           {
            printf("  You don't have enough money!!\n  ");getch();
            noMoney=1;
            }
        else {
            pocketMoney -=49;
            printf("  'Spahetti Carbonara' is so delicious!! I can live all day!\n");
            printf("\n   You have spent 49 Baht.\n  ");getch();
            noMoney=0;
        }
    }
    else if(a==6){
        if(pocketMoney-15<0)
            {
            printf("  You don't have enough money!!\n  ");getch();
            noMoney=1;
            }
        else {
            pocketMoney -=15;
            printf("  'Canned fish' is so delicious!! I can live all day!\n");
            printf("\n   You have spent 15 Baht.\n  ");getch();
            noMoney=0;
        }
    }
    else if(a==7){
        if(pocketMoney-20<0)
            {
            printf("  You don't have enough money!!\n  ");getch();
            noMoney=1;
            }
        else {
            pocketMoney -=20;
            printf("  'Grilled pork with sticky rice' is so delicious!! I can live all day!\n");
            printf("\n   You have spent 20 Baht.\n  ");getch();
            noMoney=0;
        }
    }
    else if(a==8){
        if(pocketMoney-15<0)
            {
            printf("  You don't have enough money!!\n  ");getch();
            noMoney=1;
            }
        else {
            pocketMoney -=15;
            printf("  'French Fries' is so delectable!! I can live all day!\n");
            printf("\n   You have spent 15 Baht.\n  "); getch();
            printf("\n\n   Happiness + 1\n  "); getch();
            noMoney=0;
        }
    }
    else if(a==9){
        if(pocketMoney-39<0)
            {
            printf("  You don't have enough money!!\n  ");getch();
            noMoney=1;
            }
        else {
            pocketMoney -=39;
            printf("  'Juicy meat Hamburger' is so delectable!! I can live all day!\n");
            printf("\n   You have spent 39 Baht.\n  "); getch();
            printf("\n\n   Happiness + 1\n  "); getch();
            noMoney=0;
        }
    }
    else if(a==10){
        if(pocketMoney-6<0)
           {
            printf("  You don't have enough money!!\n  ");getch();
            noMoney=1;
            }
        else {
            pocketMoney -=6;
            printf("  'Instant Noodles' is so delicious!! I can live all day!\n");
            printf("\n   You have spent 6 Baht.\n  ");getch();
            noMoney=0;
        }
    }
    else if(a==11){
        if(pocketMoney-19<0)
            {
            printf("  You don't have enough money!!\n  ");getch();
            noMoney=1;
            }
        else {
            pocketMoney -=19;
            printf("  'A loaf of Bread' is so delicious!! I can live all day!\n");
            printf("\n   You have spent 19 Baht.\n  ");getch();
            noMoney=0;
        }
    }
     else if(a==12){
        if(pocketMoney-29<0)
           {
            printf("  You don't have enough money!!\n  ");getch();
            noMoney=1;
            }
        else {
            pocketMoney -=29;
            printf("  'Congee with spinach' is so delicious!! I can live all day!\n");
            printf("\n   You have spent 29 Baht.\n  "); getch();
            printf("\n\n   Health + 1\n  "); getch();
            noMoney=0;
        }
    }
    else if(a==13){
        if(pocketMoney-29<0)
           {
            printf("  You don't have enough money!!\n  ");getch();
            noMoney=1;
            }
        else {
            pocketMoney -=29;
            printf("  'Morning,feel good Salad' is so delicious!! I can live all day!\n");
            printf("\n   You have spent 29 Baht.\n  "); getch();
            printf("\n\n   Health + 1\n  "); getch();
            noMoney=0;
        }
    }
    else if(a==14){
        if(pocketMoney-9<0)
            {
            printf("  You don't have enough money!!\n  ");getch();
            noMoney=1;
            }
        else {
            pocketMoney -=9;
            printf("  'Lay' is so yummy!! I can live all day!\n");
            printf("\n   You have spent 9 Baht.\n  "); getch();
            printf("\n\n   Happiness + 1\n  "); getch();
            noMoney=0;
        }
    }
    else{
        if(pocketMoney-7<0)
            {
            printf("  You don't have enough money!!\n  ");getch();
            noMoney=1;
            }
        else {
            pocketMoney -=7;
            printf("  'I feel so refreshed' !!\n");
            printf("\n   You have spent 7 Baht.\n  "); getch();
            printf("\n\n   Health + 1\n  "); getch();
            noMoney=0;
        }
    }
}
void eat(int a)
{

    if((a==1)||(a==2)||(a==3)||(a==4)||(a==5)||(a==6)||(a==7)||(a==8)||(a==9)||(a==10)||(a==11)||(a==12)||(a==13)||(a==14))
    {
            full=1;
    }

    if((a==8)||(a==9)||(a==14)) ++happiness;


    if((a==13)||(a==12)||(a==15))
    {
        ++health;
    }
    if((a==8)||(a==9)||(a==10)||(a==14)) ++unhealth;

    //----------------------------------
     if(unhealth==3)
        {
            health -= 1;
            printf("\n\n   You ate too much 'Junk Food'\n\n");
            printf("   You feel unhealthy.\n  ");
            getch();
            printf("\n   Health - 1"); getch();
            unhealth = 0;
        }
}


groceryStore()
{
    listfood();
}

