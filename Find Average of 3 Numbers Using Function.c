#include <stdio.h>

float avg(int x, int y, int z);

float avg(int x, int y, int z){
    return (x + y + z)/3;
}

int main()
{
    int a;
    int b;
    int c;

    printf("Enter three numbers:\n");
    scanf("\n%d \n%d \n%d", &a, &b, &c);

    printf("The Average of %d, %d and %d is %.2f", a, b, c, avg(a,b,c));
}