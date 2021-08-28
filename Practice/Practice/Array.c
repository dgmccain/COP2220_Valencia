#define _CRT_SECURE_NO_WARNINGS
#define PAUSE system ("pause")
#define CLS system ("cls")

#include <stdio.h>
#include <stdlib.h>

int main5() {
	const int NUM_ROWS = 2;
	const int NUM_COLS = 2;
	int milesTracker[2][2];
	int i;
	int j;
	int maxMiles = -99; // Assign with first element in milesTracker before loop
	int minMiles = -99; // Assign with first element in milesTracker before loop

	milesTracker[0][0] = -10;
	milesTracker[0][1] = 20;
	milesTracker[1][0] = 30;
	milesTracker[1][1] = 40;

	maxMiles = milesTracker[0][0];
	minMiles = milesTracker[0][0];

	for (i = 0; i < NUM_ROWS; i++) {
		for (j = 0; j < NUM_COLS; j++) {
			if (milesTracker[i][j] > maxMiles) {
				maxMiles = milesTracker[i][j];
			}
			if (milesTracker[i][j] < minMiles) {
				minMiles = milesTracker[i][j];
			}
		}
	}

	printf("Min miles: %d\n", minMiles);
	printf("Max miles: %d\n", maxMiles);

	PAUSE;
	return 0;
}