#include <stdio.h>

// Converting Celsius into Farenheit

int main(void)
{
    int temp_c;
    float temp_f;

    printf("Enter today's temperature in Celsius: ", temp_c);
    scanf("%d", &temp_c);

    printf("Today's temperature in celsius is %d and %.1f in farenheit", temp_c, temp_c*1.8+32);


}
