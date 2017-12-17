/* -------------------------------------------
Name: Julian (Hoh-il) Synn
Student number: 142176163
Email: jsynn@myseneca.ca
Section: IPC144-SWW
Date: Dec 10, 2017
----------------------------------------------
Assignment: 2
Milestone:  2
---------------------------------------------- */

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

// This source file needs to "know about" the structures you declared
// in the header file before referring to those new types:
// HINT: put the header file name in double quotes so the compiler knows
//       to look for it in the same directory/folder as this source file
// #include your contacts header file on the next line:
#include "contacts.h"


// This source file needs to "know about" the functions you prototyped
//         in the contact helper header file too
// HINT-1: You will want to use the new yes() and getInt() functions to help
//         simplify the data input process and reduce redundant coding
//
// HINT-2: Put the header file name in double quotes so the compiler knows
//         to look for it in the same directory/folder as this source file
//         #include your contactHelpers header file on the next line:
#include "contactHelpers.h"


// +-------------------------------------------------+
// | NOTE:  Copy/Paste your Assignment-2 Milestone-1 |
// |        function definitions below...            |
// +-------------------------------------------------+
//
// HINT:  Update these function to use the helper 
//        functions where applicable (ex: yes() and getInt() )

// getName:
void getName(struct Name *name) {

	int ask;

	//firstn
	printf("Please enter the contact's first name: ");
	scanf("%30s", name->firstName);

	//middlein
	printf("Do you want to enter a middle initial(s)? (y or n): ");
	ask = yes();

	if (ask == 1) {
		printf("Please enter the contact's middle initial(s): ");
		scanf("%6", name->middleInitial);
	}

	//lastn
	printf("Please enter the contact's last name: ");
	scanf("%35s", name->lastName);


	//char ask[2] = { 0 };


	//printf("Please enter the contact's first name: ");
	//scanf("%30s", name->firstName);


	//ask[0] = 1;
	//do {


	//	printf("Do you want to enter a middle initial(s)? (y or n): ");
	//	scanf("%1s", ask);

	//	if (ask[0] == 'y' || ask[0] == 'Y') {
	//		printf("Please enter the contact's middle initial(s): ");
	//		scanf("%6s", name->middleInitial);
	//		ask[0] = 0;
	//	}

	//	else if (ask[0] == 'n' || ask[0] == 'N') {
	//		ask[0] = 0;
	//	}

	//	else {
	//		ask[0] = 1;
	//	}
	//} while (ask[0]);


	//printf("Please enter the contact's last name: ");
	//scanf("%35s", name->lastName);

}


// getAddress:
void getAddress(struct Address *address) {

	int ask;

	//street num
	printf("Please enter the contact's street number: ");
	address->streetNumber = getInt();

	printf("Please enter the contact's street name: ");
	scanf("%40s", address->street);

	//apartment num
	printf("Do you want to enter an apartment number? (y or n): ");
	ask = yes();
	if (ask == 1) {
		printf("Please enter the contact's apartment number: ");
		address->apartmentNumber = getInt();
	}

	//postal 
	printf("Please enter the contact's postal code: ");
	scanf(" %7[^\n]", address->postalCode);

	//city
	printf("Please enter the contact's city: ");
	scanf("%40s", address->city);
}

//char ask[2] = { 0 };

	//scanf("%d", &address->streetNumber);
	//ampersand added because it's an integer. strings don't have ampersands.


	//ask[0] = 1;
	//do {
		//scanf("%1s", ask);

	//	if (ask[0] == 'y' || ask[0] == 'Y') {
	//		printf("Please enter the contact's apartment number: ");
	//		scanf("%d", &address->apartmentNumber);
	//		ask[0] = 0;
	//	}
	//	else if (ask[0] == 'n' || ask[0] == 'N') {
	//		ask[0] = 0;
	//	}
	//	else {
	//		ask[0] = 1;
	//	}
	//} while (ask[0]);



// getNumbers:
// NOTE:  Also modify this function so the cell number is
//        mandatory (don't ask to enter the cell number)
void getNumbers(struct Numbers* numbers) {

	int ask;

	printf("Please enter the contact's cell phone number: ");
	scanf("%20s", numbers->cell);

	//home num
	printf("Do you want to enter a home phone number? (y or n): ");
	ask == yes();
	if (ask == 1) {
		printf("Please enter the contact's home phone number: ");
		scanf("%20s", numbers->home);
	}


	//business num
	printf("Do you want to enter a business number? (y or n): ");
	ask == yes();
	if (ask == 1) {
		printf("Please enter the contact's business phone number: ");
		scanf("%20s", numbers->business);
	}
}
	//char ask[2] = { 0 };


	/*ask[0] = 1;*/
	//do {
	//	printf("Do you want to enter a cell phone number? (y or n): ");
	//	scanf("%1s", ask);

	//	if (ask[0] == 'y' || ask[0] == 'Y') {

	/*ask[0] = 0;*/
	/*	}
	else if (ask[0] == 'n' || ask[0] == 'N') {
	ask[0] = 0;
	}
	else {
	ask[0] = 1;
	}
	} while (ask[0]);*/


//	ask[0] = 1;
//	do {
//		printf("Do you want to enter a home phone number? (y or n): ");
//		scanf("%1s", ask);
//
//		if (ask[0] == 'y' || ask[0] == 'Y') {
//			printf("Please enter the contact's home phone number: ");
//			scanf("%20s", numbers->home);
//			ask[0] = 0;
//		}
//		else if (ask[0] == 'n' || ask[0] == 'N') {
//			ask[0] = 0;
//		}
//		else {
//			ask[0] = 1;
//		}
//	} while (ask[0]);
//
//
//
//	ask[0] = 1;
//	do {
//		printf("Do you want to enter a business phone number? (y or n): ");
//		scanf("%1s", ask);
//
//		if (ask[0] == 'y' || ask[0] == 'Y') {
//			printf("Please enter the contact's business phone number: ");
//			scanf("%20s", numbers->business);
//			ask[0] = 0;
//		}
//		else if (ask[0] == 'n' || ask[0] == 'N') {
//			ask[0] = 0;
//		}
//		else {
//			ask[0] = 1;
//		}
//	} while (ask[0]);
//}


// +-------------------------------------------------+
// | NOTE:  Copy/Paste your Assignment-2 Milestone-1 |
// |        empty function definitions below and     |
// |        complete the definitions as per the      |
// |        Milestone-2 specifications               | 
// +-------------------------------------------------+

// getContact
void getContact(struct Contact *contact) {
	getName(&(contact->name));
	getAddress(&(contact->address));
	getNumbers(&(contact->numbers));

}
