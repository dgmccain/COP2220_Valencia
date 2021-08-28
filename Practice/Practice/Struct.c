#define _CRT_SECURE_NO_WARNINGS
#define PAUSE system ("pause")
#define CLS system ("cls")

#include <stdio.h>
#include <stdlib.h>

typedef struct MonetaryChange_struct {
	int quarters;
	int dimes;
	int nickels;
	int pennies;
} MonetaryChange;

MonetaryChange ComputeChange(int cents) {
	MonetaryChange change;

	change.quarters = cents / 25;
	change.dimes = (cents - (change.quarters * 25)) / 10;
	change.nickels = (cents - (change.quarters * 25) - (change.dimes * 10)) / 5;
	change.pennies = (cents - (change.quarters * 25) - (change.dimes * 10) - (change.nickels * 5));

	return change;
}

int main(void) {
	int userCents;
	MonetaryChange change;

	printf("Enter cents: \n");
	scanf("%d", &userCents);

	change = ComputeChange(userCents);

	printf("Quarters: %d\n", change.quarters);
	printf("Dimes: %d\n", change.dimes);
	printf("Nickels: %d\n", change.nickels);
	printf("Pennies: %d\n", change.pennies);

	PAUSE;
	return 0;
}
