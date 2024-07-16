#include<stdio.h>
#include<stdlib.h>

int main(){
    char sticker_str[7], money_str[20];
    int sticker, loss = 0, discount = 0;
    float money, discountf = 0.0;

    fgets(sticker_str, 7, stdin);
    sticker = atoi(sticker_str);
    fgets(money_str, 20, stdin);
    money = atof(money_str);

    if (sticker >= 9){
        discountf = 40.0;
        discount = 40;
        loss = 9;
    }
    else if (sticker >= 6 && sticker < 9){
        discountf = 30.0;
        discount = 30;
        loss = 6;
    }
    else if (sticker >= 3 && sticker < 6){
        discount = 20;
        discountf = 20.0;
        loss = 3;
    }
    else if (sticker >= 2 && sticker < 3){
        discount = 15;
        discountf = 15.0;
        loss = 2;
    }
    else if (sticker >= 1 && sticker < 2){
        discount = 10;
        discountf = 10.0;
        loss = 1;
    }
    else{
        ;
    }

    if (discount > 0){
        money = money - (money * (discountf / 100.0));
    }

    printf("You get %d percents discount.\n", discount);
    printf("Total amount due is %.2f Baht.\n", money);
    printf("And you have %d stickers left.",(sticker - loss));
}