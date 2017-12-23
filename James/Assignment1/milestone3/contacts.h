/* -------------------------------------------
Name: James Li
Student number: 107863177
Email:jli488@myseneca.ca
Section: IPC144-SWW
Date: October 20, 2017
----------------------------------------------
Assignment: 1
Milestone:  3
---------------------------------------------- */

// Structure type Name declaration
struct Name {
    char firstName[31];
    char middleInitial[7];
    char lastName[36];
};

// Structure type Address declaration
// Place your code from Milestone #2 here...
struct Address {
	int streetNumber;
	char street[41];
	int apartmentNumber;
	char postalCode[8];
	char city[41];
};

// Structure type Numbers declaration
// Place your code from Milestone #2 here...
struct Numbers {
	char cell[21];
	char home[21];
	char business[21];
};

// Structure type Contact declaration
// Place your code here...

struct Contacts {
	Name name;
	Address address;
	Numbers numbers;
};

