#include<stdio.h>

int main()
{
    double a, b, add, sub, mul, div;
    int mod;

    printf("Enter first number:");
    scanf("%lf", &a);
    printf("Enter second number:");
    scanf("%lf", &b);

    add = a + b;
    sub = a - b;
    mul = a * b;
    div =a/b;
    mod = (int)a%(int)b;


    printf("The sum is %.2lf\n", add);
    printf("The subtraction is %.2lf\n", sub);
    printf("The multiplication is %.2lf\n", mul);
    printf("The division is %.2lf\n", div);
    printf("The modulus is %d", mod);

}
