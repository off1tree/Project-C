/*
temps2.c
Workshop 4 - Lab
James Li
*/

#include <stdio.h>
#define DAYS 10

int main(void)
{
	int i;
	int nDays, INVALID = 1;
	int hiArray[DAYS], loArray[DAYS];
	int period_days;
	int EXIT1 = 0;
	float avgTotal = 0;

	printf("--=== IPC Temperature Calculator V2.0 ===---");

	// First input prompt
	printf("\nPlease enter the number of days between 3 and 10, inclusive: ");
	scanf("%d", &nDays);
	if (nDays >= 3 && nDays <= 10) {
		INVALID = 0;
	}


	// Check for valid number of days
	do {
		if (nDays < 3 || nDays > 10) {	// Invalid number
			printf("\nInvalid entry, please enter a number between 3 and 10, inclusive: ");
			scanf("%d", &nDays);
		}
		else {	// Valid number
			INVALID = 0;
		}
	} while (INVALID);


	printf("\n");

	// Prompt for values
	for (i = 0; i < nDays; i++) {

		printf("Day %d - High: ", i + 1);
		scanf("%d", &hiArray[i]);

		printf("Day %d - Low: ", i + 1);
		scanf("%d", &loArray[i]);
	}

	// Display array of values
	printf("\nDay   Hi   Low\n");
	for (i = 0; i < nDays; i++) {
		printf("%d     %d     %d\n", i + 1, hiArray[i], loArray[i]);
	}

	// Calculate average temperature
	printf("Enter a number between 1 and 4 to see the average temperature for the entered number of days, enter a negative number to exit: ");
	scanf("%d", &period_days);


	while (EXIT1 == 0) {
		// Get number between 1 to 4
		if (period_days > 4 || period_days == 0) {
			printf("\nInvalid entry, please enter a number between 1 and 4, inclusive: ");
			scanf("%d", &period_days);
		}
		else if (period_days > 0 && period_days < 5) {

			// Store array value up to this day
			for (i = 0; i < period_days; i++) {
				avgTotal += loArray[i] + hiArray[i];
			}

			// Give Answer
			printf("\nThe average temperature up to day %d is: %.2f", i, avgTotal / (i * 2));
			avgTotal = 0;

			// Restart prompt
			printf("\n\nEnter a number between 1 and 4 to see the average temperature for the entered number of days, enter a negative number to exit: ");
			scanf("%d", &period_days);
		}
		// Exit
		else {
			printf("\nGoodbye!\n");
			EXIT1 = 1;
		}
	}

	return 0;
}


