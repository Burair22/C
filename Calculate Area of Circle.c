#include <stdio.h>

//  Area of circle 

int main(void)
{
    int area;
    int radius;

    printf("What is the radius of the cicle: ", radius);
    scanf("%d", &radius);

    printf("The Area of the circle having a radius of %d is %.2f",radius ,3.142*radius*radius);
}
