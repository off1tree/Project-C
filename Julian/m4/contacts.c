/* -------------------------------------------
Name: Julian Synn
Student number: 142176163
Email: jsynn@myseneca.ca
Section: IPC144SWW
Date: Nov 30, 2017
----------------------------------------------
Assignment: 1
Milestone:  4
---------------------------------------------- */

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

// This source file needs to "know about" the structures you declared
// in the header file before referring to those new types:
// HINT: put the header file name in double quotes so the compiler knows
//       to look for it in the same directory/folder as this source file
// #include your contacts header file on the next line:
#include "contacts.h"


// Get and store from standard input the values for Name
// Put your code here that defines the Contact getName function:


void getName(struct Name *first, struct Name *middle, struct Name *last) {
	char prompt[2] = { 0 };

	
	printf("Please enter the contact's first name: ");
	scanf("%30s", first);

	
	prompt[0] = 1;
	do {

		
		printf("Do you want to enter a middle initial(s)? (y or n): ");
		scanf("%1s", prompt);
		
		if (prompt[0] == 'y' || prompt[0] == 'Y') {
			printf("Please enter the contact's middle initial(s): ");
			scanf("%6s", middle);
			prompt[0] = 0;
		}
		
		else if (prompt[0] == 'n' || prompt[0] == 'n') {
			prompt[0] = 0;
		}
		
		else {
			prompt[0] = 1;
		}
	} while (prompt[0]);	

							
	printf("Please enter the contact's last name: ");
	scanf("%35s", last);

}



// Get and store from standard input the values for Address
// Put your code here that defines the Contact getAddress function:
void getAddress(struct Address *streetnumber, struct Address *streetname, struct Address *apartmentnumber, struct Address *postalcode, struct Address *city) {
	char prompt[2] = { 0 };

	printf("Please enter the contact's street number: ");
	scanf("%d", streetnumber);

	
	printf("Please enter the contact's street name: ");
	scanf("%40s", streetname);

	
	prompt[0] = 1;
	do {
		printf("Do you want to enter an apartment number? (y or n): ");
		scanf("%1s", prompt);

		if (prompt[0] == 'y' || prompt[0] == 'Y') {
			printf("Please enter the contact's apartment number: ");
			scanf("%d", apartmentnumber);
			prompt[0] = 0;
		}
		else if (prompt[0] == 'n' || prompt[0] == 'N') {
			prompt[0] = 0;
		}
		else {
			prompt[0] = 1;
		}
	} while (prompt[0]);

	
	printf("Please enter the contact's postal code: ");
	scanf(" %7[^\n]", postalcode);

	
	printf("Please enter the contact's city: ");
	scanf("%40s", city);
}






// Get and store from standard input the values for Numbers
// Put your code here that defines the Contact getNumbers function:
void getNumbers(struct Numbers *cellnumber, struct Numbers *homenumber, struct Numbers *businessnumber) {
	char prompt[2] = { 0 };

	
	prompt[0] = 1;
	do {
		printf("Do you want to enter a cell number? (y or n): ");
		scanf("%1s", prompt);

		if (prompt[0] == 'y' || prompt[0] == 'Y') {
			printf("Please enter the contact's cell phone number: ");
			scanf("%20s", cellnumber);
			prompt[0] = 0;
		}
		else if (prompt[0] == 'n' || prompt[0] == 'N') {
			prompt[0] = 0;
		}
		else {
			prompt[0] = 1;
		}
	} while (prompt[0]);

	
	prompt[0] = 1;
	do {
		printf("Do you want to enter a home number? (y or n): ");
		scanf("%1s", prompt);

		if (prompt[0] == 'y' || prompt[0] == 'Y') {
			printf("Please enter the contact's home phone number: ");
			scanf("%20s", homenumber);
			prompt[0] = 0;
		}
		else if (prompt[0] == 'n' || prompt[0] == 'N') {
			prompt[0] = 0;
		}
		else {
			prompt[0] = 1;
		}
	} while (prompt[0]);


	
	prompt[0] = 1;
	do {
		printf("Do you want to enter a business number? (y or n): ");
		scanf("%1s", prompt);

		if (prompt[0] == 'y' || prompt[0] == 'Y') {
			printf("Please enter the contact's business phone number: ");
			scanf("%20s", businessnumber);
			prompt[0] = 0;
		}
		else if (prompt[0] == 'n' || prompt[0] == 'N') {
			prompt[0] = 0;
		}
		else {
			prompt[0] = 1;
		}
	} while (prompt[0]);
}
