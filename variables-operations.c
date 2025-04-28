#include <stdio.h>

int main(){
    int height;
    int lenght;
    printf("Enter the rectangle height:");
    scanf("%d" ,&height);
    printf("Enter the rectangle lenght");
    scanf("%d",&lenght);
    int area =height*lenght;
    int perimeter = height+height+lenght+lenght;
    printf("Area = %d \n", area);
    printf("Perimeter = %d \n",perimeter);

int farenheit = 18;
int celsius = (farenheit-32)/1.8;
printf("%d°F = %d°C\n",farenheit,celsius);
scanf("%d", &farenheit);
scanf("%d", &celsius);

int minutes = 349;
int modulus = 349%60;
int hours = 349/60;
printf("%d minutes is equal to %d hours and %d minutes\n",minutes,hours,modulus);
int radio = 8;
const float pi = 3.14159265359;
int circleArea = pi * (radio*radio);
printf("Area of a Circle = %d \n", circleArea);
scanf("%d",&circleArea);

return 0;

}