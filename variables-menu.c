#include <stdio.h>

int main(){
    char snack1[]="Churrumais";
    char snack2[]="Hersheys";
    char snack3[]="Manzanita";
    float price1 = 50.5;
    float price2 = 20.16;
    float price3 = 60.1;
    int stock1 = 13;
    int stock2 = 20;
    int stock3 = 80;
    printf("Welcome to the Snack Shop!\n");
    printf("---------------------------\n");
    printf("1. %s - $%.2f - %d Available\n",snack1, price1,stock1);
    printf("2. %s - $%.2f - %d Available\n",snack2,price2,stock2);
    printf("3. %s - $%.2f - %d Available\n",snack3,price3,stock3);

    return 0;

}