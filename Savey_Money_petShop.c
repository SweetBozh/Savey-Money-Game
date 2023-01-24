#include<stdio.h>

void ScreenFordog(){
    //screen Dog
    system("cls");
    header();
    printf(".o.o.o.o.o.o.o.o.o.o.o.o.o.o.o.o.o.o.o.o.o.o.o.o.o.o.o.\n\n");
    printf("                        Dog Zone                       \n");
    printf("                            __                         \n");
    printf("                       (___()'`;                       \n");
    printf("                       /,    /`                        \n");
    printf("                       \\\\""--\\\\                    \n\n");
}

void MenuInDog(){
    //Menu of Dog: feed or walk or Back to main Petcafe
    ScreenFordog();
    printf("    WOOF WOOF!                                         \n\n");
    printf("       What do you want to do?                         \n\n");
    printf("         Feed The Dog [1]     Walk The Dog [2]         \n\n\n");
    printf("                >> Back [Press 3]                      \n");
    getThreeChoice();
    if(choice==1){
        BuyFeedDog();
    }
    else if(choice==2){
        AlongWithDog();
    }
    else PetCafeFront();
}

void BuyFeedDog(){
    // list Dog Food
    ScreenFordog();
    int numDog;
    printf("  DRY DOG FOOD\n");
    printf("  [1] Puppy Chicken Meal & Barley           20 BAHT    \n");
    printf("                                                       \n");
    printf("  WET DOG FOOD\n");
    printf("  [2] Roasted Chicken                       20 BAHT    \n");
    printf("  [3] Chicken & Vegetable Stew              20 BAHT    \n");
    printf("                                                       \n\n");
    printf("  >>   Back[Press 4]                                   ");
    printf("%s",line);
    getFourChoice();
    numDog =  choice;
    if(choice==1||choice==2||choice==3){
        BeforeFeedDog(numDog);
    }
    else MenuInDog();
}
void BeforeFeedDog(int a){
    //ถามว่าจะให้อาหารจริงเปล่า
    ScreenFordog();
    if(a==1){
        printf("  Give ' Chicken Meal & Barley' to the dog?            \n\n");
        printf("             Yes [1]     No[2]                      \n");
        getTwoChoice();

        if(choice==1){
            calDogShop(a);
        }
        else BuyFeedDog();
    }
    else if(a==2){
        printf("  Give ' Roasted Chicken ' to the dog?                 \n\n");
        printf("            Yes [1]     No[2]                      \n");
        getTwoChoice();
        if(choice==1){
            calDogShop(a);
        }
        else BuyFeedDog();
    }
    else {
        printf("  Give ' Chicken Meal & Vegetable Stew' to the dog?    \n\n");
        printf("                Yes [1]     No[2]                      \n");
        getTwoChoice();
        if(choice==1){
            calDogShop(a);
        }
        else BuyFeedDog();
    }
}
void calDogShop(int a){
    // to calulate when buying dog food
    ScreenFordog();
    printf("\n");
    if(a==1){
        if(pocketMoney-20<0){
            printf("               Your money is not enough.              \n\n");
            printf("                  <Enter to continue>                  \n");
            getch();
            MenuInDog();
        }
        else {
            pocketMoney-=20;
            printf("  You feed the dog with ' Chicken Meal & Barley '.      \n\n");
            printf("  You lost 20 Baht.                                     \n\n");
            printf("                     <Enter to continue>                \n");
            getch();
            DogTalk(a);
        }
    }
    else if(a==2){
        if(pocketMoney-20<0){
            printf("               Your money is not enough.              \n\n");
            printf("                  <Enter to continue>                  \n");
            getch();
            MenuInDog();
        }
        else {
            pocketMoney-=20;
            printf("  You feed the dog with ' Roasted Chicken '.            \n\n");
            printf("  You lost 20 Baht.                                     \n\n");
            printf("                     <Enter to continue>                \n");
            getch();
            DogTalk(a);
        }
    }
    else {
        if(pocketMoney-20<0){
            printf("               Your money is not enough.              \n\n");
            printf("                  <Enter to continue>                  \n");
            getch();
            MenuInDog();
        }
        else {
            pocketMoney-=20;
            printf("  You feed the dog with ' Chicken & Vegetable Stew '.  \n\n");
            printf("  You lost 20 Baht.                                    \n\n");
            printf("                     <Enter to continue>               \n");
            getch();
            DogTalk(a);
        }
    }

}
void DogTalk(int a){
    //ปริกิริยาตอบสนองของน้องหมาหลังได้กินอาหาร
    if(a==1){
        ScreenFordog();
        printf("  WOOF WOOF!!                                           \n\n");
        printf("  Chicken! Barley! smells so good!                      \n\n"); getch();
        printf("  happiness +1                                           \n\n\n");
        ++happiness;
        printf("  >> Back   [Press 1]                                   \n");
        getchoice();
        if(choice==1){
            MenuInDog();
        }
    }
    else if(a==2){
        ScreenFordog();
        printf("  WOOF WOOF!!                                           \n\n");
        printf("  chicken! chicken! smells so good!                     \n\n"); getch();
        printf("  happiness +1                                           \n\n\n");
        ++happiness;
        printf("  >> Back   [Press 1]                                   \n");
        getchoice();
        if(choice==1){
            MenuInDog();
        }
    }
    else {
        ScreenFordog();
        printf("  WOOF WOOF!!                                           \n\n");
        printf("  Chicken! Veggie! smells so good!                      \n\n"); getch();
        printf("  happiness +1                                           \n\n\n");
        ++happiness;
        printf("  >> Back   [Press 1]                                   \n");
        getchoice();
        if(choice==1){
            MenuInDog();
        }
    }

}

void AlongWithDog(){

    ScreenFordog();
    printf("  Take a dog for a walk?  Cost 100 Baht                 \n\n");
    printf("    Yes [Press 1]     No  [Press 2]                     \n\n");
    getTwoChoice();
    if(choice==1){
        if(pocketMoney-100>=0) AlongDog();
       else {ScreenFordog(); printf("\n   You don't have enough money !\n"); getch();}
    }
    MenuInDog();
}

void AlongDog(){

    int i;
    for(i=0;i<40;i++)
    {
        WalkDog(i,i);
    }
    system("cls");
    printf(".o.o.o.o.o.o.o.o.o.o.o.o.o.o.o.o.o.o.o.o.o.o.o.o.o.o.o.\n\n");
    printf("                        Dog Zone                       \n");
    printf("                            __                         \n");
    printf("                       (___()'`;                       \n");
    printf("                       /,    /`                        \n");
    printf("                       \\\\""--\\\\                    \n");
    printf(" ----------------------------------------------------- \n");
    pocketMoney-=100;
    printf("\n\n    You lose 100 Baht!                             \n\n");
    getch();

    system("cls");
    header();
    printf(".o.o.o.o.o.o.o.o.o.o.o.o.o.o.o.o.o.o.o.o.o.o.o.o.o.o.o.\n\n");
    printf("                        Dog Zone                       \n");
    printf("                            __                         \n");
    printf("                       (___()'`;                       \n");
    printf("                       /,    /`                        \n");
    printf("                       \\\\""--\\\\                    \n");
    printf(" ----------------------------------------------------- \n\n\n");
    printf("    You have taken the dog for a walk!!                \n\n");
    printf("    Health +1                                          \n\n");
    printf("    Happiness +1                                       \n\n\n");
    getch();
    health ++;
    happiness ++;
    printf("    Back    [Press 1]                                  \n    ");
    getchoice();
}
void WalkDog(int i,int x){
    // Walking Dog
    printf("\n\n\n");
    system("cls");
    printf(".o.o.o.o.o.o.o.o.o.o.o.o.o.o.o.o.o.o.o.o.o.o.o.o.o.o.o.\n\n");
    printf("                        Dog Zone                       \n\n");
    for (i=0; i<=x; i++) printf(" ");  printf("     __ \n");
    for (i=0; i<=x; i++) printf(" ");  printf("(___()'`;\n");
    for (i=0; i<=x; i++) printf(" ");  printf("/,    /`  \n");
    for (i=0; i<=x; i++) printf(" ");  printf("\\\\""--\\\\ ");
    printf("\n - - - - - - - - - - - - - - - - - - - - - - - - - - \n\n");
    printf("  Walking the Dog                                      \n");
    Sleep(150);
}

void AlongWithCat(){

    ScreenForcat();
    printf("  Take a cat for a walk?  Cost 100 Baht                 \n\n");
    printf("    Yes [Press 1]     No  [Press 2]                     \n\n");
    getTwoChoice();
    if(choice==1){
        if(pocketMoney-100 >=0) AlongCat();
        else {ScreenForcat(); printf("\n   You don't have enough money !\n"); getch();}
    }
    MenuInCat();
}

void AlongCat(){
    // สั่งใช้งานฟังก์ชัน Walk Cat กับรายงานผลตอนเดินเสร็จ
    int i;
    system("cls");
    header();
    for(i=0;i<40;i++)
    {
        WalkCat(i,i);
    }
    system("cls");
    header();
    printf(".o.o.o.o.o.o.o.o.o.o.o.o.o.o.o.o.o.o.o.o.o.o.o.o.o.o.o.\n\n");
    printf("                       Cat Zone                        \n\n");
    printf("                       \\    /\\                       \n");
    printf("                        )  ( ')                        \n");
    printf("                        (  /  )                        \n");
    printf("                         \\(__)|                       \n");
    printf(" ----------------------------------------------------- \n");
    pocketMoney-=100;
    printf("\n\n    You lose 100 Baht!                             \n\n");
    getch();

    system("cls");
    header();
    printf(".o.o.o.o.o.o.o.o.o.o.o.o.o.o.o.o.o.o.o.o.o.o.o.o.o.o.o.\n\n");
    printf("                       Cat Zone                        \n\n");
    printf("                       \\    /\\                       \n");
    printf("                        )  ( ')                        \n");
    printf("                        (  /  )                        \n");
    printf("                         \\(__)|                       \n");
    printf(" ----------------------------------------------------- \n\n\n");
    printf("    You have taken the Cat for a walk!!                \n\n");
    printf("    Health +1                                          \n\n");
    printf("    Happiness +1                                       \n\n\n");
    getch();
    health++;
    happiness++;
    printf("    Back    [Press 1]                                  \n    ");
    getchoice();
}
void WalkCat(int i,int x){
    // walking cat
    printf("\n\n\n");
    system("cls");
    printf(".o.o.o.o.o.o.o.o.o.o.o.o.o.o.o.o.o.o.o.o.o.o.o.o.o.o.o.\n\n");
    printf("                        Cat Zone                       \n\n");
    for (i=0; i<=x; i++) printf(" ");  printf("\\    /\\\n");
    for (i=0; i<=x; i++) printf(" ");  printf(" )  ( ')\n");
    for (i=0; i<=x; i++) printf(" ");  printf(" (  /  )\n");
    for (i=0; i<=x; i++) printf(" ");  printf("  \\(__)|");
    printf("\n - - - - - - - - - - - - - - - - - - - - - - - - - - \n\n");
    printf("  Walking the Cat                                      \n");
    Sleep(150);
}

void ScreenForcat(){
    //screen Cat
    system("cls");
    header();
    printf(".o.o.o.o.o.o.o.o.o.o.o.o.o.o.o.o.o.o.o.o.o.o.o.o.o.o.o.\n\n");
    printf("                       Cat Zone                        \n\n");
    printf("                       \\    /\\                       \n");
    printf("                        )  ( ')                        \n");
    printf("                        (  /  )                        \n");
    printf("                         \\(__)|                       \n\n");
}
void MenuInCat(){
    //choose feed or walk or back to main menu in petcafe
    ScreenForcat();
    printf("    MAEW MAEW!                                         \n\n");
    printf("       What do you want to do?                         \n\n");
    printf("         Feed The Cat [1]     Walk The Cat [2]         \n\n\n");
    printf("                >> Back [Press 3]                      \n  ");
    getThreeChoice();
    if(choice==1){
        BuyFeedCat();
    }
    else if(choice==2){
        AlongWithCat();
    }
    else PetCafeFront();
}

void BuyFeedCat(){
    //Menu List Cat Food
    ScreenForcat();
    int numCat;
    printf("  DRY CAT FOOD                                         \n");
    printf("  [1] Mackerel Flavor                   20 BAHT        \n");
    printf("  [2] Tuna Flavor                       20 BAHT        \n");
    printf("                                                       \n");
    printf("  WET CAT FOOD                                         \n");
    printf("  [3] Premium Chicken Flavor            20 BAHT        \n");
    printf("                                                       \n\n");
    printf("  >>   Back[Press 4]                                   ");
    printf("%s",line);
    getFourChoice();
    numCat =  choice;
    if(choice==1||choice==2||choice==3){
        BeforeFeedCat(numCat);
    }
    else MenuInCat();
}
void BeforeFeedCat(int a){
    //Ask before buy
    ScreenForcat();
    if(a==1){
        printf("  Give ' Mackerel Flavor ' to the cat?                 \n\n");
        printf("            Yes [1]     No[2]                      \n  ");
        getTwoChoice();
        if(choice==1){
            calCatShop(a);
        }
        else BuyFeedCat();
    }
    else if(a==2){
        printf("  Give ' Tuna Flavor ' to the cat?                     \n\n");
        printf("         Yes [1]     No[2]                      \n  ");
        getTwoChoice();
        if(choice==1){
            calCatShop(a);
        }
        else BuyFeedCat();
    }
    else {
        printf("  Give ' Premium Chicken Flavor ' to the cat?          \n\n");
        printf("                Yes [1]     No[2]                      \n  ");
        getTwoChoice();
        if(choice==1){
            calCatShop(a);
        }
        else BuyFeedCat();
    }
}

void calCatShop(int a){
    // to calulate when buying cat food
    ScreenForcat();
    printf("\n");
    if(a==1){
        if(pocketMoney-20<0){

            printf("               Your money is not enough.              \n\n");
            printf("                  <Enter to continue>                  \n  ");
            getch();
            MenuInCat();
        }
        else {
            pocketMoney-=20;
            printf("  You feed the cat with ' Mackerel Flavor '.            \n\n");
            printf("  You lost 20 Baht.                                     \n\n");
            printf("                     <Enter to continue>                \n  ");
            getch();
            CatTalk(a);
        }
    }
    else if(a==2){
        if(pocketMoney-20<0){
            printf("               Your money is not enough.              \n\n");
            printf("                  <Enter to continue>                  \n  ");
            getch();
            MenuInCat();
        }
        else {
            pocketMoney-=20;
            printf("  You feed the cat with ' Tuna Flavor '.                \n\n");
            printf("  You lost 20 Baht.                                     \n\n");
            printf("                     <Enter to continue>                \n  ");
            getch();
            CatTalk(a);
        }
    }
    else {
        if(pocketMoney-20<0){
            printf("               Your money is not enough.              \n\n");
            printf("                  <Enter to continue>                  \n  ");
            getch();
            MenuInCat();
        }
        else {
            pocketMoney-=20;
            printf("  You feed the cat with 'Premium Chicken Flavor '.    \n\n");
            printf("  You lost 20 Baht.                                    \n\n");
            printf("                     <Enter to continue>               \n  ");
            getch();
            CatTalk(a);
        }
    }

}

void CatTalk(int a){
    //interact from cat when you feed
    if(a==1){
        ScreenForcat();
        printf("  MAEW MAEW!!                                           \n\n");
        printf("  Mackerel! Mackerel Flavor! smells so good!            \n\n"); getch();
        printf("  happiness +1                                           \n\n\n");
        ++happiness;
        printf("  >> Back   [Press 1]                                   \n  ");
        getchoice();
        if(choice==1){
            MenuInCat();
        }
    }
    else if(a==2){
        ScreenForcat();
        printf("  MAEW MAEW!!                                           \n\n");
        printf("  Ta! Ta! Tuna! smells so good!                         \n\n"); getch();
        printf("  happiness +1                                           \n\n\n");
        ++happiness;
        printf("  >> Back   [Press 1]                                   \n  ");
        getchoice();
        if(choice==1){
            MenuInCat();
        }
    }
    else {
        ScreenForcat();
        printf("  MAEW MAEW!!                                           \n\n");
        printf("  Premium! Chicken! smells so good!                     \n\n"); getch();
        printf("  happiness +1                                           \n\n\n");
        ++happiness;
        printf("  >> Back   [Press 1]                                   \n  ");
        getchoice();
        if(choice==1){
            MenuInCat();
        }
    }

}

void screenPetCafeOnly(){
    //For print Background Pet store
    header();
    printf(" .o.o.o.o.o.o.o.o.o.o.o.o.o.o.o.o.o.o.o.o.o.o.o.o.o.o.o.o.o.o.o.o.\n\n");
    printf("                          Welcome to Pet Cafe                     \n");
    printf("                           __         /\\     /                   \n");
    printf("                      ___()'`;       (' )   (                    \n");
    printf("                    /,    /`          (  \\  )                    \n");
    printf("                    \\\\""--\\\\            |(__)/                  \n\n");
}
void PetCafeFront(){
    // choose for buy somethings or back to town
    system("cls");
    screenPetCafeOnly();
    printf("  >> Go to Dog Zone  [Press 1]     >> Go to Cat Zone  [Press 2]   \n\n");
    printf("                        Back    [Press 3]                         \n\n");
    getThreeChoice();
    if(choice==1){
        MenuInDog();
    }
    else if(choice==2){
        MenuInCat();
    }
}

petCafe(){
    PetCafeFront();
}
