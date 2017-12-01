/* Workshop 2 - Cash Register */

#include <stdio.h>

int main()
{
	int nLoon, nQuarter;
	double total, balance;	// declare variables

	printf("Please enter the amount to be paid: $");
	scanf("%lf", &total);

	nLoon = total / 1;	// calculates loonies
	balance = total - (nLoon * 1);	// balance left

	printf("Loonies required: %d, balance owing $%.2f\n", nLoon, balance);

	nQuarter = balance / 0.25;	// calculates quarters
	balance = balance - (nQuarter * 0.25);	// balance left

	printf("Quarters required: %d, balance owing $%.2f\n", nQuarter, balance);
	return 0;

}
