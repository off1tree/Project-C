

#include <stdio.h>
#include "header.h"

// make a function called swap that returns a void type


//void swap(int *a, int *b) { // a = 1, b = 2
//
//	int c = 0;  // c = 0
//
//	printf("Internal: %d, %d\n", *a, *b);
//	c = *a;	// a = 1, b = 2, c = 1
//	*a = *b;	// a = 2, b = 2, c = 1
//	*b = c;	// a = 2, b = 1, c = 1
//
//	printf("Internal: %d, %d\n", *a, *b);
//	return;
//}


void main() {

	int a, b;
	a = 1;
	b = 2;

	printf("External: %d, %d\n", a, b);
	swap(a, b); // swap a and b
	printf("External: %d, %d\n", a, b);

	return 0;
}

void swap(int a, int b) { // a = 1, b = 2

	int c = 0;  // c = 0


	printf("Internal: %d, %d\n", a, b);
	c = a;	// a = 1, b = 2, c = 1
	a = b;	// a = 2, b = 2, c = 1
	b = c;	// a = 2, b = 1, c = 1

	printf("Internal: %d, %d\n", a, b);
	return;
}
