#include <stdio.h>            

int main(void) {


	int loonie = 0;
	int quarter;
	int dime;
	int nickel;
	int penny;
	int amount;
	float paid;
	int paidONE;
	float amountOwing = 0;
	float gst = 1.13;


	printf("Please enter the amount to be paid: ");
	scanf("%f", &paid);


	printf("GST: %.2f\n", gst);
	amountOwing = paid*1.13 + 0.005;


	amount = amountOwing * 100;
	loonie = amount / 100;
	printf("Balance Owing: %.2f \n", (float)amount / 100);
	printf("Loonies required: %d ", loonie);
	loonie = loonie * 100;
	amount = amount - loonie;
	printf("Balance owing : $%.2f \n", (float)amount / 100);


	quarter = amount / 25;
	printf("Quarters required:%d ", quarter);

	amount = (amount % 25);

	printf("Balance owning:$%.2f\n", (float)amount / 100);

	dime = amount / 10;
	printf("Dimes required:%d ", dime);
	amount = (amount % 10);
	printf("Balance owning:$%.2f\n", (float)amount / 100);


	nickel = amount / 5;
	printf("Nickels required:%d ", nickel);
	amount = (amount % 5);
	printf("Balance owning:$%.2f\n", (float)amount / 100);

	penny = amount / 1;
	printf("Pennies required:%d ", penny);
	amount = (amount % 1);
	printf("Balance owning:$%.2f\n", (float)amount / 100);



	return 0;
}