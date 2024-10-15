#include <stdio.h>

int main(void)
{
	int maths,bio,comp;
	
	printf("Enter Your marks in Biology: ", bio);
	scanf("%d", &bio);
	
	printf("Enter Your marks in Maths: ", maths);
	scanf("%d", &maths);
	
	printf("Enter Your marks in Computer: ", comp);
	scanf("%d", &comp);
	
	if ( maths < 33 && bio < 33 && comp < 33 ){
		printf("You are failed in all three subjects!");
	}
	
	else if ( bio < 33 && maths < 33 || maths < 33 && comp < 33 || bio < 33 && comp < 33 ){
		printf("You are failed in two subject!");
	}
	
	else if ( maths < 33 || bio < 33 || comp < 33 ){
		printf("You are failed in one subjects!");
	}
	
	else {
		printf ("You are passed!");
	}
	
	
}
