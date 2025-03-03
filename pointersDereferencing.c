#include <stdio.h>

int main(void) {
	int *p = 0;
	// assigning 0 makes a null pointer, which menas it does NOT point to anything.
	
	// to avoid misuderstandings it is preffered to use the NULL value (it is the same):
	int *t = NULL; // same as assigning 0
	// NULL is a macro which value is 0
	printf("Value of NULL: %d\n", (int)NULL);
	/* a macro is a piece of code that is expanded before compilation.
	 A macro is a specific type of preprocessor directive,
	but not all preprocessor directives are macros.

	if you want to use the NULL symbol, you have to include one of the
	following header files: stdio.h or stddef.h. The NULL symbol is defined there.	
	*/
	

	// DEREFERENCING:
	// an operation by which the pointer variable becomes synonymous with the value it points to.
	int age = 29, *pointer = &age;
	age = 300;
	// we can use the asterisj to get the value pointed,
	// this time the asterisk means dereferencing:
	printf("age: %d\n", *pointer);

	// you can use dereferencing to change the value:
	*pointer = 10;
	
	printf("age: %d\n", *pointer);
	printf("age: %d\n", age);


	/*
	IMPORTANT: dereferencing NULL pointers is strictly forbidden and
	leads to a runtime error, which stops your program's execution at once.
	*/
	return 0;
}
