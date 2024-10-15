#include <stdio.h>

int main(void)
{
	int year;
	
	printf("Enter Year: ", year);
	scanf("%d", &year);
	
	if ( (year % 4 == 0 && year % 100 != 0) || ( year % 400 == 0 ) ){
		printf("It is a Leap Year!");
	}
	
	else {
		printf("It is not a Leap Year!");
	}
}
