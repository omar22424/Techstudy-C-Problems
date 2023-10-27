#include <stdio.h>
int main()
{
    char cha;
    short shor;
    int in;
    long lon;
    float floa;
    double doubl;

    printf("Size of char: %ld byte\n",sizeof(cha));
    printf("Size of Short: %ld bytes\n",sizeof(shor));
    printf("Size of int: %ld bytes\n",sizeof(in));
     printf("Size of long: %ld bytes\n",sizeof(lon));
    printf("Size of float: %ld bytes\n",sizeof(floa));
    printf("Size of double: %ld bytes\n",sizeof(doubl));
    return 0;
}
