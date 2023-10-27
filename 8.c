#include<stdio.h>

int main()
{
    float cel, far;

    printf("Enter temperature in farhenheit:");
    scanf("%f", &far);

    cel = (far - 32) * 5 / 9;


    printf("Temperature in celcius is %.2f", cel);

}
