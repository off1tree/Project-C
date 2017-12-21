/* -------------------------------------------
Name: Julian (Hoh-il) Synn
Student number: 142176163
Email: jsynn@myseneca.ca
Section: IPC144-SWW
Date: Dec 19, 2017
----------------------------------------------
Assignment: 2
Milestone:  4
---------------------------------------------- */

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

// This source file needs to "know about" the SYSTEM string library functions.
// HINT: The library name is string.h.
//       #include the string.h header file on the next line:
#include <string.h>

// ----------------------------------------------------------
// Include your contactHelpers header file on the next line:
#include "contactHelpers.h"


// ----------------------------------------------------------
// define MAXCONTACTS for sizing contacts array (5):
#define MAXCONTACTS 5


//------------------------------------------------------
// Function Definitions
//------------------------------------------------------

// +-------------------------------------------------+
// | NOTE:  Copy/Paste your Assignment-2 Milestone-3 |
// |        function definitions below...            |
// +-------------------------------------------------+

// clearKeyboard:
void clearKeyboard(void)
{
	while (getchar() != '\n'); // empty execution code block on purpose
}


// pause:
void pause(void)
{
	printf("(Press Enter to Continue)");
	clearKeyboard();      //clearkeyboard function

}
// getInt:
int getInt(void)
{
	char NL = 'x';
	int value = 0;

	do {
		scanf("%d%c", &value, &NL);
		if (NL != '\n') {
			clearKeyboard();
			printf("*** INVALID INTEGER *** <Please enter an integer>: ");

		}

	} while (NL != '\n');


	return value;
}

// getIntInRange:
int getIntInRange(int min, int max)
{
	int x;

	x = getInt();

	while (x < min || x > max) {
		if (x < min || x > max) {
			printf("*** OUT OF RANGE *** <Enter a number between %d and %d>: ", min, max);
			x = getInt();
		}

	}
	return x;
}

// yes:
int yes(void)
{
	int result = -1;

	//char c1;
	char c2[11];

	do {

		c2[0] = 0;
		c2[1] = 0;


		scanf("%[^\n]s", c2);
		clearKeyboard();


		if (c2[1] == 0) {
			if (c2[0] == 'Y' || c2[0] == 'y') {
				result = 1;
			}
			else {
				result = 0;
			}
		}

		if (result < 0) {
			printf("*** INVALID ENTRY *** <Only (Y)es or (N)o are acceptable>: ");

		}

	} while (result < 0);

	return result;




}

// menu:
int menu(void)
{
	int option = 0;
	//int min = 0, max = 6;

	printf("Contact Management System");
	printf("\n-------------------------");
	printf("\n1. Display contacts\n");
	printf("2. Add a contact\n");
	printf("3. Update a contact\n");
	printf("4. Delete a contact\n");
	printf("5. Search contacts by cell phone number\n");
	printf("6. Sort contacts by cell phone number\n");
	printf("0. Exit\n");

	printf("\nSelect an option:> ");
	//option = getIntInRange(min, max);
	option = getIntInRange(0, 6);

	return option;

}


// ContactManagerSystem:
void ContactManagerSystem(void)
{
	// number to leave
	// choice to select
	// = menu()
	int choice;
	int number = 40;

	struct Contact CONTACTS[MAXCONTACTS] = {
		{
			{ "Rick",{ '\0' }, "Grimes" },
	{ 11, "Trailer Park", 0, "A7A 2J2", "King City" },
	{ "4161112222", "4162223333", "4163334444" }
		},
		{
			{ "Maggie", "R.", "Greene" },
	{ 55, "Hightop House", 0, "A9A 3K3", "Bolton" },
	{ "9051112222", "9052223333", "9053334444" }
		},
		{
			{ "Morgan", "A.", "Jones" },
	{ 77, "Cottage Lane", 0, "C7C 9Q9", "Peterborough" },
	{ "7051112222", "7052223333", "7053334444" }
		},
		{
			{ "Sasha",{ '\0' }, "Williams" },
	{ 55, "Hightop House", 0, "A9A 3K3", "Bolton" },
	{ "9052223333", "9052223333", "9054445555" }
		}
	};

	//while (number == 0 || number == 40) {
	//	if (number == 0) {
	//		printf("\n");
	//	}
	//	else {
	//		number = 0;
	//	}

		choice = menu();


		switch (choice) {
		case 1:
			displayContacts(CONTACTS, MAXCONTACTS);
			printf("\n");
			pause();
			printf("\n");
			break;

		case 2:
			addContact(CONTACTS, MAXCONTACTS);
			printf("\n");
			pause();
			printf("\n");
			break;

		case 3:
			updateContact(CONTACTS, MAXCONTACTS);
			printf("\n");
			pause();
			printf("\n");
			break;

		case 4:
			deleteContact(CONTACTS, MAXCONTACTS);
			printf("\n");
			pause();
			printf("\n");
			break;

		case 5:
			searchContacts(CONTACTS, MAXCONTACTS);
			printf("\n");
			pause();
			printf("\n");
			break;

		case 6:
			sortContact(CONTACTS, MAXCONTACTS);
			printf("\n");
			pause();
			printf("\n");
			break;

		case 0:
			printf("\nExit the program? (Y)es/(N)o: ");
			number = yes();
			printf("\n");
			if (number == 1) {
				printf("Contact Management System: terminated\n");
			}
			break;

		default:
			break;
		
		}

	}
}


// +-------------------------------------------------+
// | NOTE:  Copy/Paste your Assignment-2 Milestone-3 |
// |        empty function definitions below...      |
// +-------------------------------------------------+

// getTenDigitPhone:
void getTenDigitPhone(char telNum[11])
{
	int needInput = 1;

	while (needInput == 1) {
		scanf("%10s", telNum);
		clearKeyboard();

		// (String Length Function: validate entry of 10 characters)
		if (strlen(telNum) == 10)
			needInput = 0;
		else
			printf("Enter a 10-digit phone number: ");
	}
}

// findContactIndex:
int findContactIndex(const struct Contact contacts[], int size, const char cellNum[])
{
	int x;

	for (x = 0; x < size; x++) {

	}

	return -1;
}


// displayContactHeader
// Put empty function definition below:
void displayContactHeader(void)
{
	printf("+---------------------------------------------------------------------------+\n");
	printf("|                             Contacts Listing                               \n");
	printf("+---------------------------------------------------------------------------+\n");
}



// displayContactFooter
// Put empty function definition below:
void displayContactFooter(int totalContacts)
{
	printf("+-----------------------------------------------------------------------------+\n");
	printf("Total Contacts: %d\n", totalContacts);	
}


// displayContact:
// Put empty function definition below:
void displayContact(const struct Contact *contacts) {
	
	// names
	if (strcmp(contact->name.middleInitial, "") != 0) {	
		printf(" %s %s %s\n", contact->name.firstName, contact->name.middleInitial, contact->name.lastName);
	}
	else {
		printf(" %s %s\n", contact->name.firstName, contact->name.lastName);
	}

	// phone numbers
	printf("    C: %-10s H: %-10s B: %-10s\n", contact->numbers.cell, contact->numbers.home, contact->numbers.business);

	// address numbers
	if (contact->address.apartmentNumber > 0) {
		printf("       %d %s, Apt# %d, %s, %s\n", contact->address.streetNumber, contact->address.street, contact->address.apartmentNumber, contact->address.city, contact->address.postalCode);
	}
	else {
		printf("       %d %s, %s, %s\n", contact->address.streetNumber, contact->address.street, contact->address.city, contact->address.postalCode);
	}
}




// displayContacts:
// Put empty function definition below:
void displayContacts(const struct Contact *contact[], int length) {
	int x;
	int valid = 0;
	displayContactHeader();

	for (x = 0; x < length; x++) {
		if (strlen(contact[x].numbers.cell) > 0) {	//when there is one char at least in the number
			displayContact(&contact[x]);	
			valid += 1;		
		}
	}

	displayContactFooter(valid);
}


// searchContacts:
// Put empty function definition below:
void searchContacts(const struct Contact *contact[], int size) {
	char cell[11];
	int index = -1;

	printf("Enter the cell number for the contact: ");
	getTenDigitPhone(cell);

	index = findContactIndex(contact, size, cell);

	if (index != -1) {	// found contact with cell num
		displayContact(&contact[index]);
	}
	else {	// did not find cell num
		printf("*** Contact NOT FOUND ***\n");
	}


}


// addContact:
// Put empty function definition below:
void addContact(struct Contact *contact[], int size) {
	int x;
	int emptySlots = 0;

	for (x = 0; x < size; x++) {
		if (strlen(contact[x].numbers.cell) == 0) {	 //empty
			emptySlots += 1;
			break;
		}
	}

	if (emptySlots == 0) {		//full 
		printf("*** ERROR: The contact list is full! ***\n");
	}
	else {	// not full
		printf("add", x);
		getContact(&contact[x]);
		printf("--- New contact added! ---\n");
	}

}

// updateContact:
// Put empty function definition below:
void updateContact(struct Contact *contact[], int size) {
	char cell[11];
	int index;

	printf("Enter the cell number for the contact: ");
	getTenDigitPhone(cell);

	index = findContactIndex(contact, size, cell);
	if (index != -1) {	// found contact with cell num
		printf("\nupdate contact[%d]\n", index);

		printf("\nContact found:\n");
		displayContact(&contact[index]);

		// update name
		printf("Do you want to update the name? (y or n): ");
		if (yes() == 1) {
			getName(&contact[index].name);
		}

		// update address
		printf("Do you want to update the address? (y or n): ");
		if (yes() == 1) {
			getAddress(&contact[index].address);
		}

		// update numbers
		printf("Do you want to update the numbers? (y or n): ");
		if (yes() == 1) {
			getNumbers(&contact[index].numbers);
		}

		printf("--- Contact Updated! ---\n");
	}
	else {
		printf("*** Contact NOT FOUND ***\n");
	}
}


// deleteContact:
// Put empty function definition below:
void deleteContact(struct Contact *contact[], int size) {
	char cell[11];
	int index;
	char nul = '\0';

	printf("Enter the cell number for the contact: ");
	getTenDigitPhone(cell);
	index = findContactIndex(contact, size, cell);
	if (index != -1) {	// found contact with cell num
		printf("\nselect contact[%d]\n", index);

		printf("\nContact found:\n");
		displayContact(&contact[index]);

		printf("CONFIRM: Delete this contact? (y or n): ");
		if (yes() == 1) {
			strcpy(&contact[index].numbers.cell[0], &nul);	// changed first char of cell num to null byte
			printf("--- Contact deleted! ---\n");
		}
	}
	else {
		printf("*** Contact NOT FOUND ***\n");
	}
}


// sortContacts:
// Put empty function definition below:
void sortContact(struct Contact contacts[], int length) {
	printf("<<< Feature to sort is unavailable >>>\n");
}
