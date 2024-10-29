#include <stdio.h>

int main(void)
{
	int eu;
	
	printf("\nEnter Your Electricity Units: ");
	scanf("%d", &eu);
	
	float surch1, surch2, surch3, surch4;
	float total1, total2, total3, total4;
	
	if ( eu >= 0 && eu <= 50 ){
		float fdiv = 0.50 * eu;
		printf("\nYour Elctricity Bill according to %d units consumption is: %.2f/-", eu, fdiv);
		
		surch1 = fdiv * 0.20;
		total1 = surch1 + fdiv;
		printf("\n\nYour Total Electricity Bill including 20%% surcharge is: %.1f/-", total1);
	}
	
	else if ( eu >= 51 && eu <= 150 ){
		float sdiv = 0.75 * eu;
		printf("\nYour Elctricity Bill according to %d units consumption is: %.2f/-", eu, sdiv);
		
		surch2 = sdiv * 0.20;
		total2 = surch2 + sdiv;
		printf("\n\nYour Total Electricity Bill including 20%% surcharge is: %.2f/-", total2);
	}
	
	else if ( eu >= 151 && eu <= 250 ){
		float tdiv = 1.20 * eu;
		printf("\nYour Elctricity Bill according to %d units consumption is: %.2f/-", eu, tdiv);
		
		surch3 = tdiv * 0.20;
		total3 = tdiv + surch3;
		printf("\n\nYour Total Electricity Bill including 20%% surcharge is: %.2f/-", total3);
	}
		
	else if ( eu > 250 ){
		float ftdiv = 1.50 * eu;
		printf("\nYour Elctricity Bill according to %d units consumption is: %.2f/-", eu, ftdiv);
	
		surch4 = ftdiv * 0.20;
		total4 = ftdiv + surch4;
		printf("\n\nYour Total Electricity Bill including 20%% surcharge is: %.2f/-", total4);
	}
	
	else {
		printf("Invalid Input!");
	}
		
}





