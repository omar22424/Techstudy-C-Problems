#include<stdio.h>

int main()
{
    float a, b, mul;

    printf("Enter first number:");
    scanf("%f", &a);
    printf("Enter second number:");
    scanf("%f", &b);

    mul = a * b;

    printf("The multiplication is %.2f", mul);

}
