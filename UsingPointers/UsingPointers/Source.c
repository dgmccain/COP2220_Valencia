#include <stdio.h>

// Define void UpdateTimeWindow(...)
void UpdateTimeWindow(int* timeA, int* timeB, int timeAdd) {
	int tempA = *timeA;
	int tempB = *timeB;
	*timeA = tempA + timeAdd;
	*timeB = tempB + timeAdd;
}

int main(void) {
	int timeStart;
	int timeEnd;
	int offsetAmount;

	timeStart = 3;
	timeEnd = 7;
	offsetAmount = 2;
	printf("timeStart = %d, timeEnd = %d\n", timeStart, timeEnd);

	UpdateTimeWindow(&timeStart, &timeEnd, offsetAmount);
	printf("timeStart = %d, timeEnd = %d\n", timeStart, timeEnd);

	return 0;
	system("pause");
}