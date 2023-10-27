#include <stdio.h>
int main()
{
    float side, area;

    printf("Enter lenght of side:");
    scanf("%f", &side);

    area = side * side;

    printf("The area of the square is %.2f", area);
}
