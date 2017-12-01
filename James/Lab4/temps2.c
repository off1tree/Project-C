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

	printf("--=== IPC Temperature Analyzer V2.0 ===---\n");

	// First input prompt
	printf("\nPlease enter the number of days between 3 and 10, inclusive:");
	scanf("%d", &nDays);
	if (nDays >= 3 && nDays <= 10) {
		INVALID = 0;
	}


	// Check for valid number of days
	do {
		if (nDays < 3 || nDays > 10) {	// Invalid number
			printf("\nInvalid entry, please enter a number between 3 and 10, inclusive:");
			scanf("%d", &nDays);
		}
		else {	// Valid number
			INVALID = 0;
		}
	} while (INVALID);


	// Prompt for values
	for (i = 0; i < nDays; i++) {

		printf("Day %d - High: ", i+1);
		scanf("%d", &hiArray[i]);

		printf("Day %d - Low: ", i+1);
		scanf("%d", &loArray[i]);
	}

	// Display array of values
	printf("\nDay   Hi   Low\n");
	for (i = 0; i < nDays; i++) {	
		printf("%d     %d     %d\n", i + 1, hiArray[i], loArray[i]);
	}
	return 0;
}


