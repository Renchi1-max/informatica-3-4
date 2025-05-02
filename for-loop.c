#include <stdio.h>

int main(){

    //Exercise 1
    int n;
    printf("Enter a positive number:");
    scanf(" %d",&n);
    
    int m;
    int sum = 0;
    for (m = 1; m < n + 1; ++m){
        sum = sum + m;
    }
    printf(" %d \n",sum);
    //Exercise 2
    
    int s;
    printf("Enter a positive number:");
    scanf(" %d",&s);
    
    int multiplication=1;
    int o;
    for (o = 1; o < s + 1; ++o){
        multiplication = multiplication *o;
        
    }
    printf(" %d \n", multiplication);


}