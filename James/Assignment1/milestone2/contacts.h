/* -------------------------------------------
Name: James Li
Student number: 107863177
Email:jli488@myseneca.ca
Section: IPC144-SWW
Date: Oct 17, 2017
----------------------------------------------
Assignment: 1
Milestone:  1
---------------------------------------------- */

// Structure type Name declaration
struct Name {
    char firstName[31];
    char middleInitial[7];
    char lastName[36];
};

// Structure type Address declaration
// Place your code here...
struct Address {
	int streetNumber;
	char street[41];
	int apartmentNumber;
	char postalCode[8];
	char city[41];
};

// Structure type Numbers declaration
// Place your code here...
struct Numbers {
	char cell[21];
	char home[21];
	char business[21];
};
