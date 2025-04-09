#include <stdio.h>

int main(){
    int b = 2, h = 10;
    int area = b * h;
    int perimeter = b*2+h*2;
    printf("Area = %d \n", area);
    scanf("%d", &area);
    printf("Perimeter = %d \n",perimeter);
    scanf("%d", &perimeter);
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