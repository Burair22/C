#include <stdio.h>

int main(void)
{

	int eu;
	
	printf(" Enter Your Electricity City Units Consumed: ", eu);
	scanf("%d", &eu);
	
	float f50 = 50 * 0.5;
	float f150 = 100 * 0.75;
	float f250 = 100 * 1.20;
	
	if ( eu >= 0 && eu <= 50 ){
		float fdiv = eu * 0.5;
		printf("\n Your Electricity Bill according to %d units is %.2f/-", eu, fdiv);
		
		float surch1 = fdiv * 0.2;
		float total1 = surch1 + fdiv;
		printf("\n\n Your Total Electricity Bill including 20%% surcharge is %.2f/-", total1);
	}
	
	else if ( eu >= 51 & eu <= 150 ){
		float sdiv = (( eu - 50 ) * 0.75) + f50;
		printf("\n Your Electricity Bill according to %d units is %.2f/-", eu, sdiv);
		
		float surch2 = sdiv * 0.2;
		float total2 = surch2 + sdiv;
		printf("\n\n Your Total Electricity Bill including 20%% surcharge is %.2f/-", total2);
	}
	
	else if ( eu >= 151 & eu <= 250 ){
		float tdiv = (( eu - 150 ) * 1.20) + f50 + f150;
		printf("\n Your Electricity Bill according to %d units is %.2f/-", eu, tdiv);
		
		float surch3 = tdiv * 0.2;
		float total3 = surch3 + tdiv;
		printf("\n\n Your Total Electricity Bill including 20%% surcharge is %.2f/-", total3);
	}
	
	else if ( eu > 250 ){
		float ftdiv = (( eu - 250 ) * 1.50) + f50 + f150 + f250;
		printf("\n Your Electricity Bill according to %d units is %.2f/-", eu, ftdiv);
		
		float surch4 = ftdiv * 0.2;
		float total4 = surch4 + ftdiv;
		printf("\n\n Your Total Electricity Bill including 20%% surcharge is %.2f/-", total4);
	}
	
	else {
		printf("Invalid Input!");
	}

}










