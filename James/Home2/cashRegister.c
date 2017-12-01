/* Workshop 2 - Cash Register (At home) 
cashRegister.c
Code by James Li
*/


#include <stdio.h>

int main()
{
	int nLoon, nQuarter, nDime, nNickel, nPenny;
	int intBalance;
	float balance, tax, GST = 1.13f;

	// input total
	printf("Please enter the amount to be paid: $");
	scanf("%f", &balance);

	// Add GST
	printf("GST: %.2f\n", GST);
	tax = balance * 0.13f + 0.005f;
	balance += tax;

	intBalance = balance * 100;
	printf("Balance owing: $%.2f\n", (float)intBalance / 100);


	// Loonies
	nLoon = intBalance / 100;	// calculate # of coins
	intBalance = intBalance % 100;	// balance left
	printf("Loonies required: %d, balance owing $%.2f\n", nLoon, (float)intBalance/100);

	// Quarters
	nQuarter = intBalance / 25;
	intBalance = intBalance % 25;
	printf("Quarters required: %d, balance owing $%.2f\n", nQuarter, (float)intBalance / 100);

	// Dimes
	nDime = intBalance / 10;
	intBalance = intBalance % 10;
	printf("Dimes required: %d, balance owing $%.2f\n", nDime, (float)intBalance / 100);

	// Nickels
	nNickel = intBalance / 5;
	intBalance = intBalance % 5;
	printf("Nickels required: %d, balance owing $%.2f\n", nNickel, (float)intBalance / 100);

	// Pennies
	nPenny = intBalance / 1;
	intBalance = intBalance % 1;
	printf("Pennies required: %d, balance owing $%.2f\n", nPenny, (float)intBalance / 100);

	return 0;

}
