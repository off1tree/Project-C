/* -------------------------------------------
Name: James Li
Student number: 107863177
Email:jli488@myseneca.ca
Section: IPC144-SWW
Date: November 23, 2017
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

void getName(struct Name *name) {
	char prompt[2] = { 0 };

	// First Name
	printf("Please enter the contact's first name: ");
	scanf("%30s", name->firstName);

	// Middle Initial - Optional
	prompt[0] = 1;
	do {// this version includes error checking as a bonus

		// optional input prompt
		printf("Do you want to enter a middle initial(s)? (y or n): ");
		scanf("%1s", prompt);
		// user agrees
		if (prompt[0] == 'y' || prompt[0] == 'Y') {
			printf("Please enter the contact's middle initial(s): ");
			scanf("%6s", name->middleInitial);
			prompt[0] = 0;
		}
		// user skips
		else if (prompt[0] == 'n' || prompt[0] == 'N') {
			prompt[0] = 0;
		}
		// wrong option
		else {
			prompt[0] = 1;
		}
	} while (prompt[0]);	// the value at index[0] should result in either 1 or 0

							// Last Name
	printf("Please enter the contact's last name: ");
	scanf("%35s", name->lastName);

}

// Get and store from standard input the values for Address
// Put your code here that defines the Contact getAddress function:
void getAddress(struct Address *address) {
	char prompt[2] = { 0 };

	printf("Please enter the contact's street number: ");
	scanf("%d", &(address->streetNumber));

	// Street Name
	printf("Please enter the contact's street name: ");
	scanf("%40s", address ->street);

	// Apartment Number - Optional
	prompt[0] = 1;
	do {
		printf("Do you want to enter an apartment number? (y or n): ");
		scanf("%1s", prompt);

		if (prompt[0] == 'y' || prompt[0] == 'Y') {
			printf("Please enter the contact's apartment number: ");
			scanf("%d", &(address->apartmentNumber));
			prompt[0] = 0;
		}
		else if (prompt[0] == 'n' || prompt[0] == 'N') {
			prompt[0] = 0;
		}
		else {
			prompt[0] = 1;
		}
	} while (prompt[0]);

	// Postal Code
	printf("Please enter the contact's postal code: ");
	scanf(" %7[^\n]", address ->postalCode);

	// City
	printf("Please enter the contact's city: ");
	scanf("%40s", address ->city);
}



// Get and store from standard input the values for Numbers
// Put your code here that defines the Contact getNumbers function:
void getNumbers(struct Numbers *numbers) {
	char prompt[2] = { 0 };

	// Cell number - Optional
	prompt[0] = 1;
	do {
		printf("Do you want to enter a cell phone number? (y or n): ");
		scanf("%1s", prompt);

		if (prompt[0] == 'y' || prompt[0] == 'Y') {
			printf("Please enter the contact's cell phone number: ");
			scanf("%20s", numbers->cell);
			prompt[0] = 0;
		}
		else if (prompt[0] == 'n' || prompt[0] == 'N') {
			prompt[0] = 0;
		}
		else {
			prompt[0] = 1;
		}
	} while (prompt[0]);

	// Home number - Optional
	prompt[0] = 1;
	do {
		printf("Do you want to enter a home phone number? (y or n): ");
		scanf("%1s", prompt);

		if (prompt[0] == 'y' || prompt[0] == 'Y') {
			printf("Please enter the contact's home phone number: ");
			scanf("%20s", numbers->home);
			prompt[0] = 0;
		}
		else if (prompt[0] == 'n' || prompt[0] == 'N') {
			prompt[0] = 0;
		}
		else {
			prompt[0] = 1;
		}
	} while (prompt[0]);


	// Business number - Optional
	prompt[0] = 1;
	do {
		printf("Do you want to enter a business phone number? (y or n): ");
		scanf("%1s", prompt);

		if (prompt[0] == 'y' || prompt[0] == 'Y') {
			printf("Please enter the contact's business phone number: ");
			scanf("%20s", numbers->business);
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
