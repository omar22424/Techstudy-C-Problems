#include <stdio.h>
int main()
{
    float radius, area;

    printf("Enter the radius:");
    scanf("%f", &radius);

    area = 3.1416 * radius * radius;

    printf("The area of the circle is %.2f", area);
}
