#include <stdio.h>

int main(void)
{
	char alp;
	
	printf("Enter Any Alphabet: ", alp);
	scanf("%c", &alp);
	
	if ( alp >= 65 && alp <= 90 ){
		printf("\nThe Alphabet is in Upper Case!");
	}
	
	else if ( alp >= 97 && alp <= 122 ){
		printf("\nThe Alphabet is in Lower Case!");
	}
	
	else {
		printf("\nInvalid Input!");
	}
}
