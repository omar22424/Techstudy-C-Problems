#include<stdio.h>

int main()
{
    float feet, meter;

    printf("Enter length in feet:");
    scanf("%f", &feet);

    meter = feet / 3.2808399;


    printf("Length im meter is %.2f", meter);

}
