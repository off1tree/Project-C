/*
Name: James Li
Student number:
Email: jli488@myseneca.ca
Workshop: 5
Section: Lab
Date:
*/

// Copy your source code from in_lab file to here
// Expand the option list to include option 3 & 4 after 
// option 2. as following
// "3. Update Employee Salary"
// "4. Remove Employee"

// Create two switch-cases for option 3 & 4 after case 2. 
// Implement "Update Salary" and "Remove Employee" 
// functionality as per instructions
// inside the relevant case statements

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

// Define Number of Employees "SIZE" to be 2
#define SIZE 4

// Declare Struct Employee 
struct Employee {
	int id;
	int age;
	double salary;
};

/* main program */
int main(void) {

	int option = 0;
	printf("---=== EMPLOYEE DATA ===---\n\n");
	int i;
	int validPeople = 0;
	int currIndex = 0;

	int searchID;
	int EXIT_update;
	double newSalary;

	struct Employee emp[SIZE];

	do {
		printf("1. Display Employee Information\n");
		printf("2. Add Employee\n");
		printf("3. Update Employee Salary\n");
		printf("4. Remove Employee\n");
		printf("0. Exit\n\n");
		printf("Please select from the above options: ");

		scanf("%d", &option);
		printf("\n");

		switch (option) {
		case 0:
			printf("Exiting Employee Data Program. Good Bye!!!\n");
			break;
		case 1: // Display Employee Data
				// @IN-LAB

			printf("EMP ID  EMP AGE EMP SALARY\n");
			printf("======  ======= ==========\n");

			for (i = 0; i < SIZE; i++) {
				if (emp[i].id > 0) {
					printf("%6d%9d%11.2lf\n", emp[i].id, emp[i].age, emp[i].salary);
				}
			}
			printf("\n");
			break;
		case 2:	// Adding Employee
				// @IN-LAB

			// Check for limits on the array and add employee 
			// data accordingly. 
			printf("Adding Employee\n");
			printf("===============\n");
			if (validPeople < SIZE) {
				printf("Enter Employee ID: ");
				scanf("%d", &emp[currIndex].id);

				printf("Enter Employee Age: ");
				scanf("%d", &emp[currIndex].age);

				printf("Enter Employee Salary: ");
				scanf("%lf", &emp[currIndex].salary);

				currIndex += 1;
				validPeople += 1;
			}
			else {
				printf("ERROR!!! Maximum Number of Employees Reached\n");
			}
			printf("\n");
			break;
		case 3:	// Update Employee Information

			printf("Update Employee Information\n");
			printf("======================\n");

			EXIT_update = 0;
			do {
				printf("Enter Employee ID: ");
				scanf("%d", &searchID);

				for (i = 0; i < SIZE; i++) {
					if (emp[i].id == searchID) {
						printf("The current salary is %.2lf\n", emp[i].salary);
						printf("Enter Employee New Salary: ");
						scanf("%lf", &newSalary);
						emp[i].salary = newSalary;
						EXIT_update = 1;
					}
				}
				if (EXIT_update != 1) {
					printf("Employee not found!\n");
				}
				printf("\n");
			} while (EXIT_update == 0);
			break;
		case 4:	// Remove Employee

			printf("Remove Employee\n");
			printf("===============\n");

			do {
				printf("Enter Employee ID: ");
				scanf("%d", &searchID);

				for (i = 0; i < SIZE; i++) {
					if (emp[i].id == searchID) {
						printf("Employee %d will be removed\n", emp[i].id);
						emp[i].id = 0;
						validPeople -= 1;
						EXIT_update = 1;
					}
				}
				if (EXIT_update != 1) {
					printf("Employee not found!\n");
				}
				printf("\n");
			} while (EXIT_update == 0);
			break;
		default:
			printf("ERROR: Incorrect Option: Try Again\n\n");
		}
	} while (option != 0);

	return 0;
}

