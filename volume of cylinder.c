#include <stdio.h>

// Volume of a cylinder

int main(void)
{
    int h;
    int r;

    printf("Enter the  value of radius: ", r);
    scanf("%d", &r);

    printf("Enter the value of height: ", h);
    scanf("%d", &h);

    printf("The Volume of a cylinder having a radius %d and height of %d is %.2f", r, h, 3.142*r*r*h);

}
