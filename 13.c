#include <stdio.h>
int main()
{
    float length, breadth, area;

    printf("Enter lenght of the rectangle:");
    scanf("%f", &length);
     printf("Enter bredth of the rectangle:");
    scanf("%f", &breadth);

    area = length * breadth;

    printf("The area of the square is %.2f", area);
}
