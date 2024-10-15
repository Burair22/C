#include <stdio.h>

int main(void)
{
	int num1;
	int num2;
	int num3;
	int num4;
	
	printf("Enter Four Numbers of Your Choice:\n", num1,  num2, num3, num4);
	scanf("%d\n%d\n%d\n%d", &num1, &num2, &num3, &num4);
	
	if ( num1 > num2 && num1 > num3 && num1 > num4 ){
		printf("\n%d is the Greatest among Four Numbers!", num1);
	}
	
	else if ( num2 > num1 && num2 > num3 && num2 > num4 ){
		printf("\n%d is the Greatest among Four Numbers!", num2);
	}
	
	else if ( num3 > num2 && num3 > num1 && num3 > num4 ){
		printf("\n%d is the Greatest among Four Numbers!", num3);
	}
	
	else if ( num4 > num2 && num4 > num3 && num4 > num1 ){
		printf("\n%d is the Greatest among Four Numbers!", num4);
	}
	
	else {
		printf("\nInvalid Input!");
	}
}









