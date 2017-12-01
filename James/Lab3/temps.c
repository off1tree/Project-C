/*
Workshop 3 - Lab
James Li
ID: 107863177
*/


#include <stdio.h>
#define NUMS 3

int main(void)
{
	int days = 0;
	int loop = 1;
	int hiValue, loValue;
	double total = 0;

	printf("---=== IPC Temperature Analyzer ===---\n");

	for (days = 0; days < NUMS; ++days) {
		loop = 1;
		do {
			// High Values
			printf("Enter the high value for day %d: ", days + 1);
			scanf("%d", &hiValue);

			// Low Values
			printf("\nEnter the low value for day %d: ", days + 1);
			scanf("%d", &loValue);
			printf("\n");

			// Check for correct values
			if (-40 <= hiValue && hiValue <= 40 && loValue >= -40 && loValue <= 40 && hiValue > loValue) {
				total += loValue + hiValue;
				loop = 0;
			}
			else {
				printf("Incorrect values, temperatures must be in the range -40 to 40, high must be greater than low.\n\n");
			}
		} while (loop == 1);
	}

	printf("The average (mean) temperature was: %.2lf\n", total / (NUMS * 2));


	return 0;
}
