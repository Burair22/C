#include <stdio.h>

int main(void)
{
	int salary;
	
	printf("Enter your Annual Salary: ", salary);
	scanf("%d", &salary);
	
	if ( salary < 250000){
		printf("No Tax Applicable!");
	}
	
	else if ( salary >= 250000 && salary <= 500000 ){
		int tax1 = salary * 0.05;
		
		printf("Your Applicable Tax on %d/- is %d/-", salary, tax1);
	}
	
	else if ( salary >= 500000 && salary <= 1000000 ){
		int tax2 = salary * 0.2;
		
		printf("Your Applicable Tax on %d/- is %d/-", salary, tax2);
	}
	
	else if ( salary > 1000000 ){
		int tax3 = salary * 0.3;
		
		printf("Your Applicable Tax on %d/- is %d/-", salary, tax3);
	}
	
	else {
		printf("Invalid Input!");
	}
}
