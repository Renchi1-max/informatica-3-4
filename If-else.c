#include <stdio.h>

int main(){
    //Excercise 1
    int num1;
    int num2;
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);
    if(num1 == num2){
        printf("%d is equal to %d \n", num1, num2);
    } else {
        printf("%d is NOT equal to %d \n", num1, num2);
    }
    //Exercise 2
    int number;
    printf("Enter a number:");
    scanf("%d", &number);
    if(number % 2==0 ){
        printf("%d is an even number",number);
    } else {
        printf("%d is not an even number \n",number);
    }
    //Excersise 3
    int day;
    printf("\n Write a number between 1 and 7:");
    scanf("%d",&day);
    if(day ==1){
    printf("\n it is Monday");
    }
    if(day ==2){
    printf("\n it is Tuesday");
    }
    if(day==3){
        printf("\n it is Wednesday");
    }
    if(day==4){
        printf("\n it is Thursday");
    }
    if(day==5){
        printf("\n it is Friday");
    }
    if(day==6){
        printf("\n it is Saturday");
    }
    if(day==7){
        printf("\n it is Sunday");
    }
    }




