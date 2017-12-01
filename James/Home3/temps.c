/*
Workshop 3
James Li
ID: 107863177
*/


#include <stdio.h>
#define NUMS 4

int main(void)
{
	int days = 0;
	int loop = 1;
	int choice = 1;
	int hiValue, loValue;
	int highTemp, lowTemp, highDay, lowDay;
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
			if (hiValue >= -40 && hiValue <= 40 && loValue >= -40 && loValue <= 40 && hiValue > loValue) {

				switch (choice)
				{
				case 1: // only runs once
					highTemp = hiValue;
					lowTemp = loValue;
					highDay = 1;
					lowDay = 1;
					choice = 0;
					break;
				default:
					if (hiValue > highTemp) {
						highTemp = hiValue;
						highDay = days + 1;
					}

					if (loValue < lowTemp) {
						lowTemp = loValue;
						lowDay = days + 1;
					}
				}
				total += loValue + hiValue;
				loop = 0;
			}
			else {
				printf("Incorrect values, temperatures must be in the range -40 to 40, high must be greater than low.\n\n");
			}
		} while (loop == 1);
	}

	// Average, Highest, Lowest Temperatures
	printf("The average (mean) temperature was: %.2lf\n", total / (NUMS * 2));
	printf("The highest temperature was %d, on day %d\n", highTemp, highDay);
	printf("The lowest temperature was %d, on day %d\n", lowTemp, lowDay);


	return 0;
}
