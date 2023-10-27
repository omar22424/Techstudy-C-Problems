#include<stdio.h>

int main()
{
    float cel, far;

    printf("Enter temperature in celcius:");
    scanf("%f", &cel);

    far = (1.8 * cel) + 32;


    printf("Temperature in farhenheit is %.2f", far);

}
