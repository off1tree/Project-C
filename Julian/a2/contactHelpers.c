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

// This source file needs to "know about" the functions you prototyped
// in the contact helper header file.
// HINT: Put the header file name in double quotes so the compiler knows
//       to look for it in the same directory/folder as this source file
//       #include your contactHelpers header file on the next line:
#include "contactHelpers.h"

//------------------------------------------------------
// Function Definitions
//------------------------------------------------------

// +-------------------------------------------------+
// | ====== Assignment 2 | Milestone 2 =======       |
// +-------------------------------------------------+
// | NOTE:  Copy/Paste your Assignment-2 Milestone-1 |
// |        empty function definitions below and     |
// |        complete the definitions as per the      |
// |        Milestone-2 specifications               | 
// |                                                 |
// | - The clearKeyboard function is done for you    |
// +-------------------------------------------------+


// Clear the standard input buffer
void clearKeyboard(void)
{
    while (getchar() != '\n')   ; // empty execution code block on purpose
}

// pause: Empty function definition goes here:
void pause(void)
{
	printf("(Press Enter to continue)");
	clearKeyboard();      //clearkeyboard function
	
}


// getInt: Empty function definition goes here:
int getInt(void)
{
	char NL = 'x';
	int value = 0;
	
	do {
		scanf("%d%c", &value, &NL);
		if (NL != '\n')
		{
			printf("*** INVALID INTEGER *** <Please enter an integer>: ");
			clearKeyboard();
		}

	} while (NL != '\n');

	
	return value;
}


// getIntInRange: Empty function definition goes here:
int getIntInRange(int min, int max)
{
	int x = 0;
	x = getInt();

	while (x < min || x > max) {
		
		printf("*** OUT OF RANGE *** <Enter a number between %d and %d>: ", min, max);
		x = getInt();
	} 
	return x;
}


// yes: Empty function definition goes here:
int yes(void)
{
	int result = -1;
	char c1;
	char c2;
	
	do {
		scanf("%c%c", &c1, &c2);
		

		if (c2 == '\n') {

			if (c1 != 'Y' && c1 != 'y' && c1 != 'N' && c1 != 'n') {
				printf("*** INVALID ENTRY *** <Only (Y)es or (N)o are acceptable>: ");

			}

			else {
				if (c1 == 'Y' || c1 == 'y') {
					result = 1;

				}
				else {
					result = 0;
				}

			}

		}
		else {
			

		}
		

	} while (result != 1 && result != 0);


		return result;
	
}


// menu: Empty function definition goes here:
int menu(void)
{
	int option = 0;
	int min = 0, max = 6;

	do {

	printf("Contact Management System\n");
	printf("-------------------------\n");
	printf("1. Display contacts\n");
	printf("2. Add a contact\n");
	printf("3. Update a contact\n");
	printf("4. Delete a contact\n");
	printf("5. Search contacts by cell phone number\n");
	printf("6. Sort contacts by cell phone number\n");
	printf("0. Exit\n");

	} while (option != getIntInRange(min, max));

}


// ContactManagerSystem: Empty function definition goes here:
void ContactManagerSystem(void)
{
	printf("<<< Feature 1 is unavailable >>>");
	printf("<<< Feature 2 is unavailable >>>");
	printf("<<< Feature 3 is unavailable >>>");
	printf("<<< Feature 4 is unavailable >>>");
	printf("<<< Feature 5 is unavailable >>>");
	printf("<<< Feature 6 is unavailable >>>");

	printf("Exit the program? (Y)es/(N)o: ");

	printf("Contact Management System: terminated");

}
