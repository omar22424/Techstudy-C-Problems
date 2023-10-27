#include<stdio.h>

int main()
{
    int a, b, temp;

    printf("Enter first number:");
    scanf("%d", &a);
    printf("Enter second number:");
    scanf("%d", &b);

    temp = a;
    a = b;
    b = temp;

    printf("First number is %d\n", a);
    printf("Second number is %d", b);

}
